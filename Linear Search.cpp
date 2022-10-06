#include<stdio.h>   
int main ()  
{  
    int a[10] = {10, 23, 40, 1, 2, 0, 14, 13, 50, 9};  
    int item, i,f;  
    printf("\nEnter Item which is to be searched\n");  
    scanf("%d",&item);  
    for (i = 0; i< 10; i++)  
    {  
        if(a[i] == item)   
        {  
            f = i+1;  
            break;  
        }   
        else   
        f = 0;  
    }   
    if(f != 0)  
    {  
        printf("\nItem found at location %d\n",f);  
    }  
    else  
    {  
        printf("\nItem not found\n");   
    }  
}
