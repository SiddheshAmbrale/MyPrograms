/* Write a program which search first occurrence of particular element from singly linear linked list.
Function should return position at which element is found

Input : 30

Output : 3

*/

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst( PPNODE head,int no)
{
    PNODE newn = NULL;

    newn=(PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if(*head==NULL)
    {
        *head=newn;
    }
    else
    {
        newn->next = *head;
        *head=newn;
    }

}

int firstocc(PNODE head,int ino)
{
    int ipos=-1;
    int icnt=0;

    while(head!=NULL)
    {
        icnt++;
        if(ino==head->data)
        {
            ipos=icnt;
            break;
        }
        head=head->next;
    }
    return ipos;
}

void Display(PNODE head)
{
    printf("Enter the Linked list: \n");

    while(head!=NULL)
    {
        printf("%d\t",head->data);
        head = head->next;
    }
    

}

int main()
{
    PNODE first = NULL;
    int ifirst = 0;

    InsertFirst(&first,70);
    InsertFirst(&first,30);
    InsertFirst(&first,50);
    InsertFirst(&first,40);
    InsertFirst(&first,30);
    InsertFirst(&first,20);
    InsertFirst(&first,10);

    Display(first);

    ifirst=firstocc(first,30);

    printf("%d\n",ifirst);


    return 0;
}