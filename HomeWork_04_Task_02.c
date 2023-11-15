#include<stdio.h>
int main()
{
  int  a,b,c;

  printf("Enter the value of the angle A,B,C: ");
  scanf("%d %d %d",&a,&b,&c);

  if(a+b+c==180 && a!=0 && b!=0 && c!=0)
  {
      printf("The Triangle is Valid.");
  }
  else
  {
     printf("The Triangle is Invalid.");
  }

    return 0;
}
