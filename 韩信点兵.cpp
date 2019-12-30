#include<stdio.h>
int main (void)
{
	int n,a,b,c,d,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	 {
	scanf("%d%d%d",&a,&b,&c);
	d=0;
	while(d%3!=a||d%5!=b||d%7!=c)
	{d=d+1;
	}
	
   if(d<10||d>100)
   printf("Impossible\n");
   else
	printf("%d\n",d);	
	}
	return 0;
}
