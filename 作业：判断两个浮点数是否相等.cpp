#include <stdio.h>
#include <math.h>
int main (void)
{  
 double a,b,c;
 scanf("%lf%lf",&a,&b);
 c = fabs(a - b);
 if (c<0.00001)
 printf("a = b");
 else
 printf("a != b");
 return 0;
 
  
	
}
