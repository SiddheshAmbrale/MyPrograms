// Write a program which search last occurrence of particular element from singly linear linked list.
// Function should return position at which element is found

#include <stdio.h>
#include <stdlib.h>
#define ERR_NOTFOUND -1

struct Node
{
    int data;
    struct Node *next;
};

typedef struct Node NODE;
typedef struct Node *PNODE;
typedef struct Node **PPNODE;

void InsertFirst(PPNODE Head, int No)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE)); //  void *__cdecl malloc(size_t)

    newn->data = No;
    newn->next = NULL;

    if (*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn->next = *Head;
        *Head = newn;
    }
}

void InsertLast(PPNODE Head, int No)
{
    PNODE newn = NULL;
    PNODE temp = *Head;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if (*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
    }
}

void DeleteFirst(PPNODE Head)
{
    PNODE temp = *Head;

    if (*Head == NULL)
    {
        return;
    }
    else if ((*Head)->next == NULL)
    {
        free(*Head);
        *Head = NULL;
    }
    else
    {
        *Head = (*Head)->next;
        free(temp);
    }
}

void DeleteLast(PPNODE Head)
{
    PNODE temp = *Head;

    if (*Head == NULL)
    {
        return;
    }
    else if ((*Head)->next == NULL)
    {
        free(*Head);
        *Head = NULL;
    }
    else
    {
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        free(temp->next);
        temp->next = NULL;
    }
}

int Count(PNODE Head)
{
    int iCount = 0;

    while (Head != NULL)
    {
        iCount++;
        Head = Head->next;
    }

    return iCount;
}

void InsertAtPos(PPNODE Head, int No, int ipos)
{
    int iLength = 0;
    int iCnt = 0;
    PNODE newn = NULL;
    PNODE temp = *Head;

    iLength = Count(*Head);

    if ((ipos < 1) || (ipos > (iLength + 1)))
    {
        printf("Invalid input\n");
        return;
    }

    if (ipos == 1)
    {
        InsertFirst(Head, No);
    }
    else if (ipos == (iLength + 1))
    {
        InsertLast(Head, No);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));

        newn->data = No;
        newn->next = NULL;

        for (iCnt = 1; iCnt < (ipos - 1); iCnt++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next = newn;
    }
}

void DeleteAtPos(PPNODE Head, int ipos)
{
    int iLength = 0;
    int iCnt = 0;
    PNODE temp = *Head;
    PNODE tempX = *Head;

    iLength = Count(*Head);

    if ((ipos < 1) || (ipos > iLength))
    {
        printf("Invalid input\n");
        return;
    }

    if (ipos == 1)
    {
        DeleteFirst(Head);
    }
    else if (ipos == (iLength + 1))
    {
        DeleteLast(Head);
    }
    else
    {
        for (iCnt = 1; iCnt < (ipos - 1); iCnt++)
        {
            temp = temp->next;
        }
        tempX = temp->next;
        temp->next = temp->next->next;
        free(tempX);
    }
}

void Display(PNODE Head)
{
    while (Head != NULL)
    {
        printf("|%d| -> ", Head->data);
        Head = Head->next;
    }

    printf("NULL\n");
}

int lastOcc(PNODE Head, int iNo)
{
    int iCount = 0;
    int iPos = ERR_NOTFOUND;

    while (Head != NULL)
    {
        iCount++;

        if (Head->data == iNo)
        {
            iPos = iCount;
        }
        Head = Head->next;
    }

    return iPos;
}

int main()
{
    PNODE First = NULL;
    int Element = 0;
    int iRet = 0;

    InsertFirst(&First, 70);
    InsertFirst(&First, 30);
    InsertFirst(&First, 50);
    InsertFirst(&First, 40);
    InsertFirst(&First, 30);
    InsertFirst(&First, 20);
    InsertFirst(&First, 10);

    Display(First);

    printf("Enter element that you want to search : \n");
    scanf("%d", &Element);

    iRet = lastOcc(First, Element);

    if (iRet != ERR_NOTFOUND)
    {
        printf("Last occurence of %d is : %d\n",Element,iRet);
    }
    else
    {
        printf("There is no such element\n");
    }

    return 0;
}