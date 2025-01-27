#include<stdio.h>
int main()
{
	int num1,num2;
	printf("Enter two numbers: ");
	scanf("%d %d",&num1,&num2);
	if((num1^num2)<0)
	{
		printf("\n The numbers have opposite signs");
	}
	else{
		printf("\n The numbers do not have opposite signs");
	}
}
