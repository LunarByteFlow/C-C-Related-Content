#include <stdio.h>
int main()
{
  int operation,sum,mul,div,sub,a,b;
  printf("Enter two Integers:\n");
  scanf("%d",&a);
  scanf("%d",&b);
  printf("Choose your operator (1 = Addition  2 = subtract 3 = Multiplication 4 = division\n");
  printf("Enter your operator:\n");
  scanf("%d",&operation);

  sum = a +b ;
  sub = a - b;
  mul = a*b;
  div = a/b;


  if(operation == 1)
  {
    printf("The sum of %d and %d is %d",a,b,sum);
  }

  else if(operation == 2){
    printf("The difference of %d and %d is %d",a,b,sub);
  }

  else if(operation == 3){
    printf("The Multiplication of %d and %d will give %d",a,b,mul);
  }

  else if(operation == 4){
    printf("The division of %d and %d will give %d ",a,b,div);
  }

 return 0;


}
