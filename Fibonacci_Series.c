#include<stdio.h>
int fib(int n)
{
  int a = 0, b = 1, c, i;
  if( n == 0)
    return a;
  for (i = 2; i <= n; i++)
  {
	 
     c = a + b;
     a = b;
     b = c;
	 printf("i=%d   b=%d\n",i,b); 
	 
  }
  return b;
}
 
int main ()
{
  int n = 9;
  printf("%d", fib(n));
  return 0;
}