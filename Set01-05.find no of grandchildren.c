/*  Given a two dimensional array of string like

  <”luke”, “shaw”>
  <”wayne”, “rooney”>
  <”rooney”, “ronaldo”>
  <”shaw”, “rooney”> 

Where the first string is “child”, second string is “Father”. 
And given “ronaldo” we have to find his no of grandchildren Here “ronaldo” has 2 grandchildren.
 So our output should be 2. */
#include<stdlib.h>
#include<stdio.h>
int main(void)
{
char *str,***a;
str=malloc(50);
int n,i,j,c=0;
printf("Enter the number of pair : ");
scanf("%d",&n);
a=malloc(sizeof(char*)*n);
for(i=0;i<n;i++)
{ a[i]=malloc(sizeof(char*)*2);
  for(j=0;j<2;j++)
  a[i][j]=malloc(sizeof(char)*50);
}
printf("Enter the strings : ");
for(i=0;i<n;i++)
{
  for(j=0;j<2;j++)
   scanf(" %s",a[i][j]);
}

printf("The Array is : \n");
for(i=0;i<n;i++)
{
  printf("<");
  for(j=0;j<2;j++)
   printf("%-10s ",a[i][j]);
  printf(">\n");
}

printf("Enter the string : ");
scanf("%s",str);

printf("Grandchildren of %s :  ",str);
for(i=0;i<n;i++)
  if(strcmp(a[i][1],str)==0)
      for(j=0;j<n;j++)
         if(strcmp(a[j][1],a[i][0])==0)
          {  printf("%s ",a[j][0]);
             c++;   
          }
printf("\nNumber of grandchildren  :  %d\n",c);
free(a);
free(str);
return 0;
}         

