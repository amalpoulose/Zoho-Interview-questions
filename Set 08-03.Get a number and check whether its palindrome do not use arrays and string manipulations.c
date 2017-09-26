#include<stdio.h>
int main(void)
{
	int n,i,j=0,temp;
	printf("Enter a Number : ");
	scanf("%d",&n);

	for(i=sizeof(int)*8-1;!(n>>i&1);i--);
	for(;j<i;i--,j++)
		if((n>>i&1)!=(n>>j&1))
			break;
        temp=i;
	for(i+=j;i>=0;printf("%d",n>>i&1),i--);
	if(temp<=j)
		printf(" - Palindrome\n");
	else
		printf(" - Not Palindrome\n");
	return 0;
}
