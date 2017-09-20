/* 5. Given two sorted arrays, merge them such that the elements are not repeated

Eg 1: Input:
        Array 1: 2,4,5,6,7,9,10,13
        Array 2: 2,3,4,5,6,7,8,9,11,15
       Output:
       Merged array: 2,3,4,5,6,7,8,9,10,11,13,15 */

/* Procedure 1 : Remove repeated terms and saving into third array(lengthy)*/
#include<stdio.h>
int main(void)
{
	int a[100],b[100],c[100],i,j,k,m,n;
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
	for(i=0,j=0,k=0;i<m && j<n;k++)
	{
		if(b[j]<a[i])               //element of array b is smaller then true 
		{
			if(c[k-1]==b[i])    //if previous element in 3rd array is current element then discard it otherwise save it into 3rd array  
				i++;
			else{
				c[k]=b[j];
				j++;
			}
		}
		else if(a[i]<b[j])          //element of array a is smaller then true
		{ 
			if(c[k-1]==a[i])    //if previous element in 3rd array is current element then discard it otherwise save it into 3rd array
				i++;
			else
			{   
				c[k]=a[i];
				i++;
			}
		}
		else if(a[i]==b[j])        // if both elements in array a and b are  equal then true
		{  
			if(c[k-1]==a[i]){  //if previous element in 3rd array is current element then discard it otherwise save it into 3rd array
				i++;j++;k--;
			}
			else{
				c[k]=a[i];
				i++;
				j++;
			}
		}

	}

	while(i<m || j<n)            // if m and n are different values the remaing values must store into 3rd array
	{
		if(i<m)              //if i<m true only 1st array elements remaining
		{
			if(c[k-1]==a[i]) //if previous element in 3rd array is current element then discard it otherwise save it into 3rd array
				i++;
			else 
			{  
				c[k]=a[i];
				i++;
				k++;
			}
		}
		if(j<n)                //if i<m true only 1st array elements remaining
		{
			if(c[k-1]==b[j]) //if previous element in 3rd array is current element then discard it otherwise save it into 3rd array
				j++;
			else
			{
				c[k]=b[j];
				j++;
				k++;
			}
		}
	}
	printf("\nArray 3 elements :");
	for(i=0;i<k;i++)
		printf("%d ",c[i]);
	printf("\n");
	printf("\n---------------------------------------------------------------\n");
	return 0;
}
