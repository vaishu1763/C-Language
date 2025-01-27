#include<stdio.h>
int main()
{
    int n,arr[100],min,max,i;
	printf("Enter array size: ");
	scanf("%d",&n);
	if(n<1)
	{
		printf("Invalid array size\n");
		return 1;
	}	
	printf("Enter elements in array: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	min=max=arr[0];
	for(i=0;i<n;i++){
		if(arr[i]>max)
	       max=arr[i];
     	if(arr[i]<min)
	      min=arr[i];
	}
	 printf("Difference between max and min is: %d",max-min);  
}
