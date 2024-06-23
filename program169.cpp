/* Write a program which accept one number and position from user and toggle that bit. Return modified number.

Input : 10  3
Output : 14

*/  

#include<iostream>
using namespace std;

typedef unsigned int UINT;

int ToggleBit(UINT iNo,UINT iPos)
{
    UINT iMask=0x000000001;
    UINT iResult=0;

    if((iPos < 1)  ||  (iPos > 32))
    {
        cout<<"Invalid number"<<"\n";
        return false;
    }

    iMask=iMask<<(iPos-1);

    iResult=iNo ^ iMask;

    return iResult;
}


int main()
{
    UINT iValue=0;
    UINT iBit=0;
    UINT iRet=0;

    cout<<"Enter number : "<<"\n";
    cin>>iValue;

    cout<<"Enter the bit position from 1 to 32"<<"\n";
    cin>>iBit;

    iRet=ToggleBit(iValue,iBit);

    cout<<"Modified number is : "<<iRet<<"\n";


    return 0;
}