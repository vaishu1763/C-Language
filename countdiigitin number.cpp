#include<stdio.h>
int main()
{
	int  n,originalnum;
	int count=0,isNegative=0;
	printf("Enter a number: ");
	scanf("%d",&n);
	originalnum=n;
	if(n<0)
	{
		isNegative=1;
		n=n-n;
	}
	if(n==0)
	{
		count=1;
	}
	else
	{
		while(n!=0)     //6789/10=678=1
		{                 //678/10=67=2
			n/=10;            //67/10=6=3
			count++;             //6/10=0=4
		}
	}
	if(isNegative)
	{
		printf("Number of digits in are: %d\n",n,count);
	}
	else
	{
		printf("Number of digits in are: %d\n",n,count);
	}
	return 0;
}
