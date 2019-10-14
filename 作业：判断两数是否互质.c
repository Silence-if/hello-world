#include<stdio.h>
int main (void)
{  int a,b,i,c,;
   printf("enter two numbers\n");
   scanf("%d%d",&a,&b);	
   i = 1;
   if (a>b)
   {while (i<b+1)
    {
	  if(b%i==0 && a%i==0)
	  {
	  c = i;
	  i = i + 1;}
      else 
       i = i+1;}
   }
   
    if (a<b)
   {while (i<a+1)
    {
	  if(a%i==0 && b%i==0)
	  {
	  c = i;
	  i = i + 1;}
      else 
       i = i+1;}
   }
  
   if(c>1) 
   printf("两束不互质\n");
   
   else if(c=1)
   
   printf("两数互质\n");
   
	return 0;
	
    }   
