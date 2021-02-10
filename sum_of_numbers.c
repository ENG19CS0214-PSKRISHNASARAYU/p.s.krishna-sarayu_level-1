//Write a program to find the sum of n different numbers using 4 functions
#include<stdio.h>

float input();
float sumation(float p,float q);
float output(float s);

int main()
{
int n,k;
printf("enter how many numbers must be added?");
scanf("%d",&n);
float p[n];
for (k=0;k<n;k++)
{
printf("enter the numbers:%d\n",k+1);
p[k]=input();
}
float q=0;
for(k=0;k<n;k++)
{
q=sumation(q,p[k]);
}
output(q);
return 0;
}
float input()
{
float m;
scanf("%f",&m);
return m;
}
float sumation(float p,float q)
{
return(p+q);
}
float output(float s)
{
printf("the sum of the n numbers :%f\n",s);
return 0;
}
