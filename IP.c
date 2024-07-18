#include<stdio.h>

int main()
{
    int i=0;
    int j=0;
    char arr[50]="1.0.11.1.1";
    char newarr[50];
    int length=0;


    while (arr[length] != 0)
    {
        length++;
    }
    printf("ip address entered %s \n", arr);
    printf("array length %d \n", length);

    for(i=0; i<length; i++)
    {
        if (arr[i]!='.')
        {
            newarr[j]=arr[i];
            j++;
        }
        else
        {
            newarr[j]='[';
            newarr[++j]='.';
            newarr[++j]=']';
        j++;
        }

        
    }
    printf("\n%s\n",newarr);

    return 0;
}