//Reverse a three digit number
#include<stdio.h>
int main()
{
    int num, rev,temp;
    printf("enter a number : ");
    scanf("%d",&num);
    rev=0; temp=num;

    while (temp !=0)
    {
        rev=rev*10 + temp%10;
        temp=temp/10;
    }
    printf("Reverse of %d is %d",num, rev);
    return 0;
    
}