//WAP to find the distance between two points using structures and 4 functions.
#include<stdio.h>
#include<math.h>
struct coordinate
{
    float x;
    float y;
};
typedef struct coordinate point;
point input();
float distance(point a1,point a2);
void output(float dis);

int main()
{
    point a1,a2;
    float dis;
    printf("Enter the coordinate of 1st point\n");
    a1=input();
    printf("Enter the coordinate of 2nd point\n");
    a2=input();
    dis=distance(a1,a2);
    output(dis);
    return 0;
}
point input()
{
    point a;
    printf("Enter x coordinate:\n");
    scanf("%f",&a.x);
    printf("Enter y coordinate:\n");
    scanf("%f",&a.y);
    return a;
}
float distance(point a1,point a2)
{
    return(sqrt(((a2.x-a1.x)*(a2.x-a1.x))+((a2.y-a1.y)*(a2.y-a1.y))));
}
void output(float dis)
{
    printf("The distance between two points is:\n%f",dis);
}
