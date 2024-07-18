#include<stdio.h>
int main()

{
    int i=0;
    int j=0;
    char str[50]="hellogoodmorningindia";
    int strlen=0;
    char res[10]=""; 
   

    while (str[strlen] != 0)
    {
        strlen++;
    }
    
    printf("you entered %s \n", str);
    printf("array length %d \n", strlen);

    for(; i<strlen; i++)
    {
        if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        {

        }

        else
        {
            res[j]=str[i];
            j++;
        }
    }
    res[j]='\0';
    printf("\n%s\n",res);



}
