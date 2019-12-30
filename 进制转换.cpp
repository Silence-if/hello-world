#include<stdio.h>
int main (void)
{
	int a,b,i,c[100]={0},q;
	printf("enter a number");
	scanf("%d",&a);
	printf("enter the binary");
	scanf("%d",&b);
	i=0;
	while(a!=0)
	{
		c[i]=a%b;
		a=((a-c[i])/b);
		i=i+1;
	}
	i=99;
	while(c[i]==0)
	i=i-1;
	for(q=i;q>0;q--)
	printf("%d",c[q]);
	printf("%d",c[0]);
 } 
