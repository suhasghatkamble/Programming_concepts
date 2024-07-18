#include<stdio.h>
int main(){
    int num[10],size,i,j;
    num[i];
    num[j];

    printf("enter size of an array: \n");
    scanf("%d",&size);

    for ( i = 0; i < size; i++)
    {
        printf("enter values of an array :\n");
        scanf("%d",&num[i]);
     }
    for ( i = 0; i < size; i++)
     {
        num[j]+=num[i];
        j++;
        printf("%d  ",num[i]);
     }
    return 0;
}