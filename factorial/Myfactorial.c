#include<stdio.h>
int main()
{
  int c,num,fact=1;
  printf("Enter a number:");
  scanf("%d",&num);
  
  for(c=1;c<=num;c++)
  {
    fact=fact*c;

  }
  printf("Factorial of %d is:%d",num,fact); //typo

return 0;
}



}
