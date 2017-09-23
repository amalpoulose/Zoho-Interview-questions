
#include<stdio.h>
int main(void)
{
int a[20][20],b[20][20],i,j,r1,c1,r2,c2;
printf("Row  and  coloumn : ");
scanf("%d %d",&r1,&c1);
printf("Elements to array : ");
for(i=0;i<r1;i++)
for(j=0;j<c1;j++)
scanf("%d",&a[i][j]);

printf("Row  and  coloumn : ");
scanf("%d %d",&r2,&c2);

printf("Elements to array : ");
for(i=0;i<r2;i++)
for(j=0;j<c2;j++)
scanf("%d",&b[i][j]);


printf("Array A   Elements  : \n");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
printf("%d ",a[i][j]);
printf("\n");
}

printf("Array B  Elements  : \n");
for(i=0;i<r2;i++)
{
for(j=0;j<c2;j++)
printf("%d ",b[i][j]);
printf("\n");
}

if(r2==c1 && c2==r1)
{
for(i=c1-1;i>=0;i--)
for(j=0;j<r1;j++)
if(a[j][i]!=b[c1-1-i][j])
    goto NEXT1;
printf("\nTRUE  (90 Deg)\n");
return;
}

if(r2==r1&&c2==c1)
{
for(i=r1-1;i>=0;i--)
for(j=c1-1;j>=0;j--)
if(a[i][j]!=b[r1-1-i][c1-1-j])
  goto NEXT2;
printf("\nTRUE  (180 Deg)\n");
return;
}

NEXT1:
if(r2==c1 &&c2==r1)
{
for(i=0;i<c1;i++)
for(j=r1-1;j>=0;j--)
if(a[j][i]!=b[i][r1-1-j])
   goto NEXT4;
printf("\nTRUE (270 Deg)\n");
return;
}
NEXT2:

if(r2==r1&&c2==c1)
{
for(i=0;i<r1;i++)
for(j=c1-1;j>=0;j--)
if(a[i][j]!=b[i][c1-1-j])
  goto NEXT3;
printf("\nTRUE  (Horizontal Mirror)\n");
return;
}
NEXT3:

if(r2==r1&&c2==c1)
{
for(i=r1-1;i>=0;i--)
for(j=0;j<c1;j++)
if(a[i][j]!=b[r1-1-i][j])
  goto NEXT4;
printf("\nTRUE  (Vertical Mirror)\n");
return;
}

NEXT4:
printf("\nFALSE\n");
return 0;
}
