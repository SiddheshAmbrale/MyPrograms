/* Write a program which accept one number and position from user and check whether bit at that position is on or off . If bit is one return TRUE otherwise return FALSE;

Input : 10  2
Output : TRUE

*/

#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool ChkBit(UINT iNo,UINT iPos)
{
    UINT iMask=0x000000001;
    UINT iResult=0;

    if((iPos < 1)  ||  (iPos > 32))
    {
        cout<<"Invalid number"<<"\n";
        return false;
    }

    iMask=iMask<<(iPos-1);

    iResult=iNo & iMask;

    if(iResult == iMask)
    {
        return true;
    }
    else
    {
        return false;
    }

}


int main()
{
    UINT iValue=0;
    UINT iBit=0;
    bool bRet=false;

    cout<<"Enter number : "<<"\n";
    cin>>iValue;

    cout<<"Enter the bit position from 1 to 32"<<"\n";
    cin>>iBit;

    bRet=ChkBit(iValue,iBit);

    if(bRet == true)
    {
        cout<<iBit<<"th Bit is ON TRUE"<<"\n";
    }
    else
    {
        cout<<iBit<<"th Bit is OFF FALSE"<<"\n";
    }


    return 0;
}