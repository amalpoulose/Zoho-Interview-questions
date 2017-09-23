#include<stdio.h>
int main(void)
{
int a,b,i;
printf("Lower NUmber : ");
scanf("%d",&a);
printf("Upper NUmber : ");
scanf("%d",&b);
printf("Perfect Square number between %d and %d is : ",a,b);
for(i=0;i*i<=a;i++);
for(;i*i<b;i++)
printf("%d ",i*i);
printf("\n");
return 0;
}

