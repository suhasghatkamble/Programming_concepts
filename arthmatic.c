//Calculator for arithmetic operations on two numbers.
#include<stdio.h>
int main()
{
    float num, num1,res;
    int option;
    printf("enter two number : ");
    scanf("%f%f",&num,&num1);

    printf("you entered %.1f and %.1f",num,num1);
    printf("enter options: \n for addtion press 1 \n for substraction press 2 \n for division press 3 \n for multiplication press 4 \n");
    scanf("%d",&option);

    switch (option)
    {
    case 1:
        res=num+num1;
        printf("Addition is : %f", res);
        break;

    case 2:
        res=num-num1;
        printf("Substraction is : %f", res);
        break;

    case 3:
        res=num/num1;
        printf("Division is : %f", res);
        break;

    case 4:
        res=num*num1;
        printf("Multiplication is : %f", res);
        break;

    default:
        printf("you entered wrong optiion");
   }
}