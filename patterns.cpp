/* 1 2 2 2 2
   3 1 2 2 2
   3 3 1 2 2
   3 3 3 1 2
   3 3 3 3 1 */
/*#include<stdio.h>
int main()
{
	int r,c;
	for(r=1;r<=5;r++)
	{
		for(c=1;c<=5;c++)
		{
			if(r==c)
			{
				printf("1 ");
			}
			else if (c>r)
			{
				printf("2 ");
			}
			else
			printf("3 ");
		}
		printf("\n");
	}
} */  


/* 1 2 3 4 5
   6 7 8 9 10
   11 12 13 14 15
   16 17 18 19 20
   21 22 23 24 25 */
   
/*#include<stdio.h>
int main()
{
	int r,c,x=1;
	for(r=1;r<=5;r++)
	{
		for(c=1;c<=5;c++)
		{
			printf("%3d ",x++);
		}
		printf("\n");
	}
   }   */
   
   
/*  1 2 3 4 5
    10 9 8 7 6
	11 12 13 14 15
	20 19 18 17 16
	21 22 23 24 25 */
	
/* #include<stdio.h>
int main()
{
	int r,c,x=1,m;
	for(r=1;r<=5;r++)
	{
		m=4;
		for(c=1;c<=5;c++)
		{
			if(r%2!=0)
				printf("%3d ",x++);
			else
			{
				printf("%3d ",(m+x));
				m=m-2;
				x++;
			}
		}
		printf("\n");
	}
}	 */ 
