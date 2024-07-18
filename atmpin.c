#include<stdio.h>
int main()
{
    int pin=0, flag=-1, count=0;

    do{
        if (count==3)
        {
            printf("max attempts reached ; %d  \n",count);
        }
    printf("enter pin : \n");
    scanf("%d",&pin);

    if (pin==1234)
    {
        flag=0;
        printf("welcome to bank atm");
        break;
    }

    else
    {
        flag=1;
        count++;
        printf("Invalid pin  \n \n");
        printf("attempts: %d  \n",count);
    }
        
    }
    while (flag==1);
   
    
}