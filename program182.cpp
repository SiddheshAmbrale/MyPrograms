// Write generic program to multiply two numbers.

#include<iostream>
using namespace std;

template<class T>

T Multiply(T no1, T no2)
{
    T ans;
    ans = no1 * no2;
    return ans;
}

int main()
{
    int iret = Multiply(10,20);

    printf("%d\n",iret);

    float fret = Multiply(10.0f,20.0f);

    printf("%f\n",fret);

    return 0;

}