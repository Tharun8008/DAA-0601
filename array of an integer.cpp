#include<stdio.h>
int main()
{
	int i ,max,min,a[i];
	printf("enter the array element:");
	for(i=0;i<5;i++)
	scanf("%d", &a[i]);
	max =a[0];
	for(i=1;i<5;i++)
	if(a[i]>max)
	max=a[i];
	min=a[0];
	for(i=1;i<5;i++)
	if(a[i]<min)
	min=a[i];
	printf("max element %d.\n",max);
	printf("min element %d.\n",min);
	
	return 0;
}
