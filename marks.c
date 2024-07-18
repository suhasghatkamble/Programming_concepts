#include<stdio.h>
int main()
{
    int marks1,marks2,marks3,marks4,marks5;
    int sum;
    float percentage;

    printf("enter 5 subjects marks : ");
    scanf("%d%d%d%d%d",&marks1,&marks2,&marks3,&marks4,&marks5);

    sum=marks1+marks2+marks3+marks4+marks5;
    percentage=(sum*100)/500;

    if(percentage>75)
    {
        printf("Distinction %f",percentage);
    }
    else if(percentage>65&&percentage<75)
    {
        printf("First Class %f",percentage);
    }
    else if (percentage>55&&percentage<65)
    {
        printf("Second Class %f",percentage);
    }
    else
    {
        printf("you not pass");
    }
    
}
