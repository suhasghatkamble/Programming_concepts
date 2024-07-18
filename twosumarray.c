#include<stdio.h>

int main(){
    int i;
    int j;
    int flag=0;
    int arr[]={2,7,9,5};

    int length=sizeof(arr)/sizeof(arr[0]);
    int target = 9;

    for ( i = 0; i < length; i++)
    {
        for ( j = 0; j < length; j++)
        {
            if (i!=j && arr[i]+arr[j]==target)
            {
                printf("%d, %d \n",i,j);
            }
            
        }
        if (flag>0)
        {
            break;
        }
        
        
    }
    
}