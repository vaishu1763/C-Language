#include<stdio.h>
int main()
{
	int x,y;
	printf("Enter x value: ");
	scanf("%d",&x);
	printf("Enter y value: ");
	scanf("%d",&y);
	x=x+y;   //x=9 y=8  x=9+8=17
	y=x-y;    //x-y=17-8=9
	x=x-y;       //x-y=17-9=8=8  x=8,y=9
	printf("x = %d y = %d",x,y);
}
