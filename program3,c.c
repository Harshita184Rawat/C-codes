#include <stdio.h>

//Compiler version gcc  6.3.0

void main()
{
  int x=10;
  printf("%d\n",x+=1);
  printf("%d\n",x-=1);
  printf("%d\n",x*=2);
  x/=5;
  printf("%d\n",x);
  x%=2;
  printf("-%d \n",x);
  int a=4,result;
  float b=5;
  double c=6.0;
  char d=3.5;
  printf("Size of int=%lu bytes\n",sizeof(a));
  printf("Size of float=%lu bytes\n",sizeof(b));
  printf("Size of double=%lu bytes\n",sizeof(c));
  printf("Size of char=%lu byte\n",sizeof(d));
  printf("++a = %d \n", ++a);
  printf("--b = %d \n", --b);
  printf("++c = %f \n", ++c);
  printf("--d = %f \n", --d);

    result = (a == b) && (c > b);
    printf("(a == b) && (c > b) is %d \n", result);

    result = (a == b) && (c < b);
    printf("(a == b) && (c < b) is %d \n", result);

    result = (a == b) || (c < b);
    printf("(a == b) || (c < b) is %d \n", result);

    result = (a != b) || (c < b);
    printf("(a != b) || (c < b) is %d \n", result);

    result = !(a != b);
    printf("!(a != b) is %d \n", result);

    result = !(a == b);
    printf("!(a == b) is %d \n", result);



}
