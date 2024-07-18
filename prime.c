#include<stdio.h>
int main(){
    int i=2, n;
    printf("enter number:");
    scanf("%d",&n);

    while (i<n)
    {
        if(n%i==0)
            break;

        else
            i++;
        
    }
        if(i==n)
            printf("prime number");
        else
            printf("number is not prime numb");

    return 0;
}