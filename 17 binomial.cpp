#include<stdio.h>
int bio(int n,int k )
{
	int a[n+1][k+1];
	int i,j;
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=k && j<=i;j++)
		{
			if(j==0 || j==i)
			{
				a[i][j]=1;
			}
			else
			{
				a[i][j]=a[i-1][j-1]+a[i-1][j];
			}
		}
	}
	return a[n][k];
}
int main()
{
	int n,k;
	printf("enter the number ");
	scanf("%d",&n);
	printf("enter the number");
	scanf("%d",&k);
	int res= bio (n,k);
	printf("%d\n",res);
}
