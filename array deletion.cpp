#include<stdio.h>
#include<stdlib.h>
main()
{
    int a[10],i,n;
    printf("Enter the size of an array");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter index %d elemental: ",i);
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        printf("\nElements at index %d = %d\n",i,a[i]);
    }
    
    int pos;
    printf("Enter the position you want to delete");
    scanf("%d",&pos);

    for(i=pos;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    n--;
    for(i=0;i<n;i++)
    {
        printf("\nElement in the array at index %d = %d",i,a[i]);
    }
    return 0;
}
