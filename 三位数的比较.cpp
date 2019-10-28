#include<stdio.h>
int main (void)
{
	int x[3]={0,1,2},i=0,j;
	scanf("%d%d%d",&x[0],&x[1],&x[2]);
	while(x[0]>x[1]||x[1]>x[2])
	{i=0;
   while(i<2)
	{
	if(x[i]>x[i+1])
	{j = x[i];
	x[i]=x[i+1];
	x[i+1]=j;
	i = i+1;}
	
	else
	{
		i = i+1;
	}
}
}
   printf("%d%d%d",x[0],x[1],x[2]);
   return 0;
	
}
