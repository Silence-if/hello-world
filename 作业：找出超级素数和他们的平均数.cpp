#include <stdio.h>
int main (void)
{
	int n=100,i,a,q,l,b[6],c,m,k,j=0,p=0;
	while(1)
	{   q=0;
		for(i=2;i<=n/2;i++)
		{if((n%i)==0)
		q=1;
		}
		a=n;
		m=n;
		l=1;
		c=0;
		while(n/l!=0)
		{
		l=l*10;
		c=c+1;
		}
		a=c;
		l=l/10;
		b[c]=n/l;
		for(c=a-1;c>0;c--)
		{
			b[c]=m-b[c+1]*l;
			m=b[c];
			l=l/10;
			b[c]=m/l;
		}
		m=0;
		k=0;
		for(c=1;c<=a;c++)
		{
			m=m+b[c];
			k=k+b[c]*b[c];
	     }	
	     for(i=2;i<=m/2;i++)
		{if((m%i)==0)
		q=1;
		}
		for(i=2;i<=k/2;i++)
		{if((k%i)==0)
		q=1;
		}
	     if(q==0)
		     {j=j+n;
		     p=p+1;
		     printf("%d\n",n);
			 }
	     if(n>10000)
	     break;
	     n=n+1;
   }
   printf("%d\n",j/p);
}

