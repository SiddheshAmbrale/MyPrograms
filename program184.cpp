// Write generic program to accept N values from user and return Addition of that values

#include<iostream>
using namespace std;

template <class T>

T AddN(T *Arr,int size)
{
    T sum=0;
    int i=0;

    for(i=0;i<size;i++)
    {
        sum = sum + Arr[i];
    }
    return sum;
}

int main()
{
    int Arr[] = {10,20,30,40,50};
    float Brr[] = {10.0,3.7,9.8,8.7};

    int isum = AddN(Arr,5);

    printf("%d\n",isum);

    float fsum = AddN(Brr,4);

    printf("%f\n",fsum);

    return 0;


}
