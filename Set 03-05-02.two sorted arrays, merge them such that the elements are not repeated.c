/*5. Given two sorted arrays, merge them such that the elements are not repeated

Eg 1: Input:
        Array 1: 2,4,5,6,7,9,10,13
        Array 2: 2,3,4,5,6,7,8,9,11,15
       Output:
       Merged array: 2,3,4,5,6,7,8,9,10,11,13,15 */
/*Procedure 2 : Saving both array into 3rd array and removing repeated terms*/
#include<stdio.h>
int main(void)
{
	int a[100],b[100],c[100],i,j,k,l,m,n;
	printf("\n---------------------------------------------------------------\n");
	printf("Array  size 1: ");
	scanf("%d",&m);
	printf("Elements to array 1 : \n");
	for(i=0;i<m;i++)
		scanf("%d",&a[i]);
	printf("Array  size 2: ");
	scanf("%d",&n);
	printf("Elements to array 2 : \n");
	for(i=0;i<n;i++)
		scanf("%d",&b[i]);
	printf("\n---------------------------------------------------------------\n");
	printf("\nArray 1 elements :");
	for(i=0;i<m;i++)
		printf("%d ",a[i]);
	printf("\nArray 2 elements :");
	for(i=0;i<n;i++)
		printf("%d ",b[i]);
	for(i=0;i<m;c[i]=a[i],i++);    //save array 1 elements to array 3 
	for(j=0;j<n;c[i]=b[j],i++,j++);//save array 2 elements to array 3
	l=m+n;                         //l is length of array 3
	for(i=0;i<l;i++)
		for(j=i+1;j<l;j++)
			if(c[i]==c[j])   // if repeating terms found in array 3 
			{
				for(k=j;k<l-1;c[k]=c[k+1],k++);   //delete repeating terms 
				l--;                              //reduce length of array 3 by one
				j--;                              //j reduces by one to continue on same jth iteration
			}         


	printf("\nArray 3 elements :");
	for(i=0;i<l;i++)
		printf("%d ",c[i]);
        printf("\n");
        printf("\n---------------------------------------------------------------\n");
        return 0;
}
