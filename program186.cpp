// Write generic program to accept N values from user and return smallest values

#include<iostream>
using namespace std;

template <class T>

T Min(T *Arr,int size)
{
    int icnt=0;
    int iMin=Arr[0];

    for(icnt=0;icnt<size;icnt++)
    {
        if(Arr[icnt]<iMin)
        {
            iMin = Arr[icnt];
        }
    }
    return iMin;
}

int main()
{
    int Arr[] = {10,20,30,40,50};
    float Brr[] = {10.0,3.7,9.8,8.7};

    int iret = Min(Arr,5);
    printf("%d\n",iret);

    float fret = Min(Brr,4);
    printf("%f\n",fret);

    return 0;

}
