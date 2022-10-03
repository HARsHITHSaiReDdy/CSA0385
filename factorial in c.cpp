#include<stdio.h>
int main()
{
	int n,i,b=1;
	printf("enter a value:");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		b=b*i;	
	}
	printf("%d factorial",b);
	return 0;
}
