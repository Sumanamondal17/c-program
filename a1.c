/*swapping the values of two numbers */
#include<stdio.h>
int main()
{
   int x,y,temp;
   printf("\n enter first number .:-");
   scanf("%d",&x);
   printf("enter the second number .:-")
   scanf("%d", &y);
   printf("before swap first=%d second=%d\n",x,y);
   temp=x;
   x=y;
   y=temp;
   printf("after swap first=%d and second=%d\n",x,y);
   return 0;
  }
