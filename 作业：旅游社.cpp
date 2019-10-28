#include<stdio.h>
int main (void)
{int a,b,c,d,e;
 printf("输入总人数，会英语的人数，会俄语的人数,两个都不会的人数");
 scanf("%d%d%d%d",&a,&b,&c,&d);
 e = b+c-(a-d);
 if(e>0&&a>0&&b>0&&c>0&&d>0)
 printf("两个都会的人数是%d",e);
 else
 printf("输入数据错误"); 
  

} 
