#include<stdio.h>
#include<math.h>
int main (void)
{
	int n,i,k,x[8],a,m,b,g,j,l,d;
	 for(n=2;;n++)
	 { 
	 b=0;
	  for(m=1;m<=n;m++)
	     {
	 
	 	for(i=1;i<=m;i=i*10)
	 	  { k=log10(i)+1;
		   }
		   g=m;
		   a=0;
		    for(j=k;j>0;j--)
		    { d=1;
		      for(l=0;l<j-1;l++)
		      {
		      	d=d*10;
			  }
			  x[j]=g/d;
			  g=g-x[j]*d;
			  if(x[j]==1)
			  {
			  	a=a+1;
			  }
				
			 }
		   b=b+a;
		   }
		  printf("%d\n",n);
		   if(b==n)
		   {
		   break;
		   }
		   
		   
	   }
	   return 0;
}
	   
		   
	
	   
	   

