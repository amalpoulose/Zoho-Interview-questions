  /*  To print the following pattern
        	P     M
                 R   A
                  O R
                   G
                  O R
                 R   A
                P     M                   */

#include<stdio.h>
int main(void)
{

	char str[100],i,j,k,n;
	printf("Enter the string : ");
	scanf("%s",str);
	for(n=-1;str[n];n++);
        if(n%2==0)
        {
          printf("\n\nString length is even\n\n");
          return;
        }
	n=n/2+1;
	for(i=1;i<=n;i++)
	{
		k=0;
		for(j=1;j<i;j++)
			printf(" ");
		for(j=1;j<=2*(n-i)+1;j++)
		{  if(j==1 || j==2*(n-i)+1)
			printf("%c",str[i-1+k]);
			else
				printf(" ");
			k++;
		}
		printf("\n");
	}

	for(i=2;i<=n;i++)
	{
		k=0;
		for(j=1;j<=n-i;j++)
			printf(" ");
		for(j=1;j<=2*i-1;j++)
		{
			if(j==1 || j==2*i-1) 
				printf("%c",str[n-i+k]);
			else
				printf(" ");
			k++;
		}
		printf("\n");
	}
}

