#include<stdio.h>
void swap(int *, int *);

void swap(int *a , int *b)
{
    int temp;
    
    temp=*a;
    *a=*b;
    *b=temp;
}



int main()
{
    int a=10, b=20;
    printf("Before Swapping in main function a=%d, b=%d\n ", a,b);
    swap(&a,&b);
    printf("After Swapping in main function a=%d, b=%d", a,b);
    // printf("%d%d",a,b);
}



