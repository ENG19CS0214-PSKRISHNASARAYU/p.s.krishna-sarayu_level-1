//WAP to find the distance between two point using 4 functions.
#include<stdio.h>
#include<math.h>
void input();
void output(float distance);
void distance(float p1,float q1,float p2,float q2);

void input()
{
  float p1,q1,p2,q2;
  printf("enter the values of p1 and q1:");
  scanf("%f%f",&p1,&q1);
  printf("enter the values of p2 and q2:");
  scanf("%f%f",&p2,&q2);
  distance(p1,q1,p2,q2);
}
void distance(float p1,float q1,float p2, float q2)
{
  float distance;
  distance=((p2-p1)*(p2-p1)+(q2-q1)*(q2-q1));
output(distance);
}
void output(float d)
{
printf("the distance between two points is %f",d);
}
int main()
{
input();
return 0;
}
