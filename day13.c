#include<stdio.h>

int main() {
  char op;
  float a,b;
  printf("Ex: 10 + 5");
  scanf("%f %c %f",&a,&op,&b);

  switch(op) {
   case'+': 
     printf("Result = %.2f",a+b); 
     break;
   case'-': 
     printf("Result = %.2f",a-b); 
     break;
   case'*': 
     printf("Result = %.2f",a*b); 
     break;
   case'/':
     if(b !=0) 
       printf("Result = %.2f",a/b);
     else 
       printf("does not divide zero!");
     break;
   default: 
     printf("Wrong operator!");
  }
  return 0;
}

  
