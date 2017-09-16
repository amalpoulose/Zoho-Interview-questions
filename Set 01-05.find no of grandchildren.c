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
//enter th number of pair of strings
printf("Enter the number of pair : ");
scanf("%d",&n);
//create 3d array dynamically using malloc
a=malloc(sizeof(char*)*n);     //allocate n character pointer spaces and store addres in a
for(i=0;i<n;i++)                 
{ a[i]=malloc(sizeof(char*)*2); // store 2 chara pointer spaces to every previously allocated n spaces 
  for(j=0;j<2;j++)
     a[i][j]=malloc(sizeof(char)*50); // allocate 50 bytes to previously allocated 2 char pointer spaces
}
//enter the list of strings
printf("Enter the strings : ");
for(i=0;i<n;i++)
{
  for(j=0;j<2;j++)
   scanf(" %s",a[i][j]);
}
//print length of strings
printf("The Array is : \n");
for(i=0;i<n;i++)
{
  printf("<");
  for(j=0;j<2;j++)
   printf("%-10s ",a[i][j]);
  printf(">\n");
}
//enter the grangfather name 
printf("Enter the string : ");
scanf("%s",str);

printf("Grandchildren of %s :  ",str);
for(i=0;i<n;i++)
  if(strcmp(a[i][1],str)==0)             //Locate grandfather in the list
      for(j=0;j<n;j++)                   // Find son of the grandfather
         if(strcmp(a[j][1],a[i][0])==0)  //find grandchildren
          {  printf("%s ",a[j][0]); 
             c++;                        //increment count for every grandchildren   
          }
printf("\nNumber of grandchildren  :  %d\n",c);
free(a);
free(str);
return 0;
}         

