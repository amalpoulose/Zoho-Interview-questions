#include<stdio.h>
int main(void)
{
int a[100],i,th,n,count=0,sum,temp;
printf("Array size : ");
scanf("%d",&n);
printf("Elements to Array : ");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Array   elements  : ");
for(i=0;i<n;i++)
printf("%d ",a[i]);
printf("\nThreshold value   : ");
scanf("%d",&th);

for(i=0;i<n;i++)
{
  temp=th;
  sum=0;
  while(sum!=a[i])
  {
    sum+=temp;
    count++;
    if(sum>a[i])
    {
     sum-=temp;
     temp--;
     count--;
    }
  }
}  
printf("count = %d\n",count);
return 0;
}  
