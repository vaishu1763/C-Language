#include<stdio.h>
int main()
{
	int binary,octal=0;
	int rem,i=1;
	printf("Enter a binary number: ");
	scanf("%d",&binary);
	while(binary!=0)
	{                         //binary=1001
		rem=binary%10;          //1001%10=100
		octal=octal+rem*i;      //i=1*2=2
		i=i*2;                    //100/10=1 (removed) again iterates 100%10....
		binary=binary/10;
	}
	printf("Octal number is: %d",octal);
}
