#include<stdio.h>
int main()
{
	int n,num,r,rev=0;
	n=1;
	while(n<=1000)
	{
		rev=0;
		num=n;
		while(num>0)
		{
			r=num%10;
			rev=rev+(r*r*r);
			num=num/10;
		}
		if(n==rev)
		printf("\n %d is a armstrong number",n);
		n++;
	}
}
