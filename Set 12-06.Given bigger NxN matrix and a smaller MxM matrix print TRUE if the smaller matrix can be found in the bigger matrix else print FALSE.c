
#include<stdio.h>
int main(void)
{
int a[50][50],b[50][50],r1,c1,r2,c2,i,j,k,l;
printf("Array 1 size : ");
scanf("%d%d",&r1,&c1);
printf("Elements to Array : ");
for(i=0;i<r1;i++)
for(j=0;j<c1;j++)
scanf("%d",&a[i][j]);

printf("Array   elements  : \n");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
printf("%d ",a[i][j]);
printf("\n");
}
printf("Array 2 size : ");
scanf("%d%d",&r2,&c2);

printf("Elements to Array : ");
for(i=0;i<r2;i++)
for(j=0;j<c2;j++)
scanf("%d",&b[i][j]);

printf("Array   elements  : \n");
for(i=0;i<r2;i++)
{
for(j=0;j<c2;j++)
printf("%d ",b[i][j]);
printf("\n");
}

for(i=0;i<r1;i++)
for(j=0;j<c1;j++)
{
 if(a[i][j]==b[0][0])
 { 
   for(k=0;k<r2;k++)
    for(l=0;l<c2;l++)
      if(a[i+k][j+l]!=b[k][l])
        goto EXIT;
    EXIT:
    if(k==r2 && l==c2)
    {  
       printf("\nTRUE : <%d,%d> to <%d,%d>\n",i,j,i+k-1,j+l-1);
       return;
    }
 }
}
 printf("\n False\n");
 return 0;
}
 

