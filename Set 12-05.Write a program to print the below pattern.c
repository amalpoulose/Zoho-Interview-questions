#include<stdio.h>
int main(void)
{
	int n,i,j,k;
	printf("Limit : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		k=i+1;
		for(j=0;j<n-i;k+=n-j,j++)
			printf("%2d ",k);
		printf("\n");
	}
	return 0;
}
