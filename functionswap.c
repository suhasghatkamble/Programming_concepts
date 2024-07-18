#include<stdio.h>
void swap(int,int);

void swap(int a, int b)
{
    int temp=0;
    temp=a;
    a=b;
    b=temp;
    printf("After swapping a=%d and b=%d",a,b);
}
int main()
{
    int a=10, b=20;
    swap(a,b);

    //printf("before swapping a=%d and b=%d",a,b);
}