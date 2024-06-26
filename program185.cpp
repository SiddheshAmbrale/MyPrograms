// Write generic program to accept N values from user and return largest values

#include<iostream>
using namespace std;

template <class T>

T Max(T *Arr,int size)
{
    int icnt=0;
    int iMax=Arr[0];

    for(icnt=0;icnt<size;icnt++)
    {
        if(Arr[icnt]>iMax)
        {
            iMax = Arr[icnt];
        }
    }
    return iMax;
}

int main()
{
    int Arr[] = {10,20,30,40,50};
    float Brr[] = {10.0,3.7,9.8,8.7};

    int iret = Max(Arr,5);
    printf("%d\n",iret);

    float fret = Max(Brr,4);
    printf("%f\n",fret);

    return 0;

}
