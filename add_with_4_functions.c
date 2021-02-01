//Write a program to add two user input numbers using 4 functions.
#include<stdio.h>
int add();
int main()
{
int a,b;
int result;
printf("enter the values of a,b:");
scanf("%d%d",&a,&b);
result=add(a,b);
printf("sum=%d",result);
}
int add(int a,int b)
{
  int sum=0;
  sum=a+b;
  return sum;
}
