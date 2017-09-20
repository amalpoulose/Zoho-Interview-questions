/* 1. Write a program to give the following output for the given input

Eg 1: Input: a1b10
       Output: abbbbbbbbbb
Eg: 2: Input: b3c6d15
          Output: bbbccccccddddddddddddddd
The number varies from 1 to 99.*/
#include<stdlib.h>
#include<stdio.h>
int main(void)
{
char *str,last;
int i,n=0;
str=malloc(100);
printf("Enter the string  : ");
scanf("%s",str);

for(i=0;str[i];i++)
{ 
  if(str[i]<48||str[i]>57)
  {
     printf("%c",str[i]);                           //print characters other than integer value and continue the loop
     continue;
  }
  for(last=i;(str[i]>=48&&str[i]<=57)&&str[i];i++)  //Loop to find integer value store it in n
     n=n*10+(str[i]-48);
  i--;
  if(last)                                          //if first value is integer that is last = 0 do nothing simply put n=0 in else part
  for(n-=1;n;n--)                                   //Loop to print n times the character
    printf("%c",str[last-1]);            
  else n=0;
}
printf("\n");
free(str);
return 0;
}
 
