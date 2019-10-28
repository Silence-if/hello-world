#include<stdio.h>
int main (void)
{
	int x[5]={0,1,2,3,4},i=0,j;
	scanf("%d%d%d%d%d",&x[0],&x[1],&x[2],&x[3],&x[4]);
	while(x[0]<x[1]||x[1]<x[2]||x[2]<x[3]||x[3]<x[4])
	{i=0;
   while(i<4)
	{
	if(x[i]<x[i+1])
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
   printf("%d%d%d%d%d",x[0],x[1],x[2],x[3],x[4]);
   return 0;
	
}
