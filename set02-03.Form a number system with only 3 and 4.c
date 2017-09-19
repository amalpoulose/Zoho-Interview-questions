/* C) Form a number system with only 3 and 4. Find the nth number of the number system.
Eg.) The numbers are: 3, 4, 33, 34, 43, 44, 333, 334, 343, 344, 433, 434, 443, 444, 3333, 3334, 3343, 3344, 3433, 3434, 3443, 3444 ….
*/
#include<stdio.h>
int main(void)
{
	int n,i,m,pos,tmp=1,num_dgs;
	printf("Enter the value n  : ");
	scanf("%d",&n);
	m=n;

	for(i=-1;m;m/=2,i++);  //find number of digits
	num_dgs=i;

	for(;i;i--)           //find nearest value which is power of two
		tmp*=2;

	pos=n-tmp;           
	pos++;               //find position of nth  number in the class of num_digits 
                             //eg: 11 is 4th number in 3 digits numbers

	if(!num_dgs)         //if  n=1 when pos = 1 next step becomes  number of digits  1 and position 0
		pos=1;

	if(pos==tmp){       //In cases for example n=7 we have to make number of digits 3 instead of 2 and pos 0
		pos=0;
		num_dgs++;
	}

	printf("The %dth number in sequence is : ",n);
	for(i=num_dgs-1;i>=0;i--)                      //loop in which where 1 is present in bits of pos prints 4 and where 0 print 3
		if((pos>>i)&1)
			printf("4");
		else
			printf("3");

	printf("\n");

	return 0;
}
