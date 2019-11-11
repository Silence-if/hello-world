#include<stdio.h>
int main (void)
{int x[8],i,temp,k,j,m,n=0,q;
  for(i=0;i<5;i++)
    {scanf("%d",&x[i]);
      }
for (q=0;q<4;q++)
   {
   for(i=0;i<4;i++)
     {
	  if(x[i]<x[i+1])
        {temp=x[i];
          x[i]=x[i+1];
          x[i+1]=temp;
		  k=x[0]*10000+x[1]*1000+x[2]*100+x[3]*10+x[4];
		  for(j=1;j<k+1;j++)
		    {if(k%j==0)
		     m=j;
			 } 
			 if(m==k)
			 n=m;
		   }
		   
		}   
    }
    if(n==0)
    printf("error");
    if(n!=0)
    printf("%d",n);
}
