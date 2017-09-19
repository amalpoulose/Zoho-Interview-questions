/*  Alternate sorting: Given an array of integers, rearrange the array in such a way that the first element is first maximum and second element is first minimum.

    Eg.) Input  : {1, 2, 3, 4, 5, 6, 7}
         Output : {7, 1, 6, 2, 5, 3, 4} */
#include<stdio.h>
int main(void)
{
	int a[100],i,j,n,t;
	printf("Array size : ");
	scanf("%d",&n);
	printf("Enter array elements : ");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Array elements : \n");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);       
	printf("\n");
	/* Selection sort is used because the 1st element would be fixed after one iteration of outer loop*/ 
	for(i=0;i<n-1;i++)                     
		for(j=i+1;j<n;j++)
		{
			if(i%2)                   // if i value is odd then smallest value in remaining index values is goes to ith index
			{  if(a[i]>a[j])
				a[i]=a[i]+a[j]-(a[j]=a[i]);
			}
			else                   //  if i value is even then largest value in remaining index values is goes to ith index
			{
				if(a[i]<a[j])   
					a[i]=a[i]+a[j]-(a[j]=a[i]);
			}
		} 
	printf("Array elements : \n");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);       
	printf("\n");
	return 0;
}
