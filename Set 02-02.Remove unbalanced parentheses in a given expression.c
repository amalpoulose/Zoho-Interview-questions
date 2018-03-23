/* Remove unbalanced parentheses in a given expression.

    Eg.) Input  : ((abc)((de))
         Output : ((abc)(de)) 
 
         Input  : (a(b)))(cd)  
         Output : (a(b))(cd)

	 Input  : (a(b)))(c(d)
         Output : (a(b))(cd)

         Input  : (ab))(c(d))))
         Output : (ab)(c(d))

         Input  : (((ab)
         Output : (ab) 

*/
#include<stdio.h>
int main(void)
{
	char str[100];
	int i,j,end=0;
	printf("enter the string : ");
	scanf("%s",str);
	for(i=0;str[i];i++)
	{
		if(str[i]=='(')
		{ 
			for(end+=1;str[end]!=')'&&str[end]!='\0';end++);
			if(str[end]=='\0')                         //remove unbalanced '(' at any position
			{
				for(j=i;str[j]=str[j+1];j++);    
				i--;
			}
			if(end<i)
			{
				for(j=end;str[j]=str[j+1];j++);    //remove unbalanced ')' at middle position 
				i-=1;
			}
		}
		if(str[i]==')')                                     //remove unbalanced ')' at last positions
		        if(i>end || i==0)
			{
				for(j=i;str[j]=str[j+1];j++);
				i--;}

	}
	printf("New string is : %s\n",str);
	return 0;
}

