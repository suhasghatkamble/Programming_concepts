#include<stdio.h>
int main()

{
    int i=0;
    int j=0;
    char str[10]="hello";
    int strlen=0;   

    while (str[strlen] != 0)
    {
        strlen++;
    }
    
    printf("you entered %s \n", str);
    printf("array length %d \n", strlen);


}