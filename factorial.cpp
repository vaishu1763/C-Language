#include<stdio.h>
   int func(int n)
   {
   int fact=1;
   while(n>0)
   {
   	   return n*func(n-1);
   }
   return fact;
}
int main()
{
	int n1;
	printf("Enter a number: ");
	scanf("%d",&n1);
	printf("Factorial number is: %d",func(n1));
	func(n1);
}
