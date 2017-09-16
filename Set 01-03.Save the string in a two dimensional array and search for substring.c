/* Save the string “WELCOMETOZOHOCORPORATION” in a two dimensional array and search for substring like “too” in the two dimensional string both from left to right and from top to bottom.

w	e	L	C	O
M	E	T	O	Z
O	H	O	C	O
R	P	O	R	A
T	I	O	n	  

And print the start and ending index as

Start index : <1,2>

End index: <3, 2>*/
#include<stdio.h>
int sqt(float);
int main(void)
{
char str[100],str1[100],a[100][100];
int n,rc,i,j,inx,k,c;
printf("Enter the string : ");
scanf("%s",str);
for(n=0;str[n];n++);
if(n=sqt(n)*sqt(n))
 rc=sqt(n)+1;
else
 rc=sqt(n);
for(inx=0,i=0;i<rc ;i++)
  for(j=0;j<rc && str[inx];j++)
   { 
      a[i][j]=str[inx++];
   }

for(i=0;i<rc;i++)
{
  for(j=0;j<rc;j++)
   printf("%c ",a[i][j]);
  printf("\n");
}

printf("Enter word to found  :  ");
scanf("%s",str1);

for(i=0;i<rc;i++)
  for(j=0;j<rc;j++)
    if(a[i][j]==str1[0])
    {  for(k=j,c=0;a[i][k]==str1[c] && a[i][k]!='\0';k++,c++);
       if(str1[c]=='\0'){
          printf("\nStart index : <%d ,%d>   End index: <%d, %d>\n",i,j,i,k-1);}
    }

for(i=0;i<rc;i++)
  for(j=0;j<rc;j++)
    if(a[j][i]==str1[0])
    { 
      for(k=j,c=0;a[k][i]==str1[c] && a[k][i]!='\0';k++,c++);
       if(str1[c]=='\0'){
         printf("\nStart index : <%d ,%d>   End index: <%d, %d>\n",j,i,k-1,i);}
    }          
return 0;

}



int sqt(float n)
{
float x=n,y=1;
while(x-y>0.00001)
{
  x=(x+y)/2;
  y=n/x;
}
return x;
}
