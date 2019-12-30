#include<stdio.h>
int main (void)
{
	int a[4],i,n,q;
	for(i=0;i<3;i++)
	{
		scanf("%d",&a[i]);
	}
	for(q=0;q<3;q++){
	
	for(i=0;i<2;i++)
	{
		if(a[i]>a[i+1])
		{
			n=a[i];
			a[i]=a[i+1];
			a[i+1]=n;
		}
	}
        }
	for(i=1;i<=a[0];i++)
	{
		if(a[0]%i==0&&a[1]%i==0&&a[2]%i==0)
		n=i;
	}
	printf("%d\n",n);
 } 
