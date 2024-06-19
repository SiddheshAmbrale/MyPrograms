/* Accept character from user . If character is small display its corresponding capital character , and if it small then
display its corresponding capital. in other cases display as it is.

Input: Q
Output: q

Input: m
output: M

Input: 4
Output: 4

*/

#include<stdio.h>

char Display(char ch)
{
    if(ch>='A' && ch<='Z')
    {
       return ch + 32;
    }
    if(ch>='a' && ch<='z')
    {
      return  ch - 32;
    }
    else
    {
        return ch;
    }

}
int main()
{
    char cvalue='\0';
    char cret='\0';

    printf("Enter the character\n");
    scanf("%c",&cvalue);

    cret=Display(cvalue);

    printf("%c",cret);

    return 0;
}