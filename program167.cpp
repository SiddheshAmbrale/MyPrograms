/* Write a program which accept one number and position from user and off that bit. Return modified number.

Input : 10  2
OUTPUT : 8

*/

#include<iostream>
using namespace std;

typedef unsigned int UINT;

int OffBit(UINT iNo,UINT iPos)
{
    UINT iMask=0x000000001;
    UINT iResult=0;

    iMask=iMask<<(iPos - 1);
    iMask=~iMask;

    iResult=iNo & iMask;

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

    iRet=OffBit(iValue,iBit);

    
    cout<<"Modified number is : "<<iRet<<"\n";


    return 0;
}