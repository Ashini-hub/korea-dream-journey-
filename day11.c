/*A program to add two numbers*/
# include<stdio.h>
int sum(int,int);
void main()
{
int a,b,s;
printf("enter two numbers")
scanf("%d%d",&a,&b);
s = sum(a,b);
printf("The result is %d",s);
}
int sum(int x,int y)
{
  return(x+y)
}
 
