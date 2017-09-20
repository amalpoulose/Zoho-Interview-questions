/*3. Write a program to print the following output for the given input. You can assume the string is of odd length

Eg 1: Input: 12345
       Output:
1       5
  2   4
    3
  2  4
1      5
Eg 2: Input: geeksforgeeks
         Output:
g                         s
  e                     k
    e                 e
      k             e
        s         g
          f      r
             o
          f     r
        s         g
      k             e
    e                 e
  e                      k
g                          s 
*/
#include<stdio.h>
int main(void)
{
	char str[50];
	int i,j,n;
	printf("Enter the string : ");
	scanf("%s",str);
	for(n=0;str[n];n++);
	n=n/2+1;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<i;j++)
			printf(" ");
		for(j=0;j<2*(n-i)+1;j++)
			if(j==0 || j==2*(n-i))
				printf("%c",str[i-1+j]);
			else
				printf(" ");
		printf("\n");
	}

	for(i=2;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
			printf(" ");
		for(j=1;j<=2*i-1;j++)
			if(j==1 || j==2*i-1)
				printf("%c",str[n-i-1+j]);
			else
				printf(" ");
		printf("\n");
	}

	return 0;
}
