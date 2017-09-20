/* 2. Write a program to sort the elements in odd positions in descending order and elements in ascending order

Eg 1: Input : 13,2 4,15,12,10,5
      Output: 13,2,12,10,5,15,4
Eg 2: Input : 1,2,3,4,5,6,7,8,9
      Output: 9,2,7,4,5,6,3,8,1 
*/
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int *a,n,i,j;
	printf("Array size : ");
	scanf("%d",&n);
	a=malloc(sizeof(int)*n);
	printf("Enter Elements : ");
	for(i=0;i<n;i++)
		scanf("%d",a+i);
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
		{
			if(i%2)
			{
				if(a[i]>a[j])
					a[i]=a[i]+a[j]-(a[j]=a[i]);
			}
			else
			{
				if(a[i]<a[j])
					a[i]=a[i]+a[j]-(a[j]=a[i]);
			}
		}
	printf("Array elements  : ");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
        printf("\n");
	free(a);
	return 0;
}    

