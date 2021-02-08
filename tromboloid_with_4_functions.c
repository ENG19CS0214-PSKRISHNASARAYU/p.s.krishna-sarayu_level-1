//WAP to find the volume of a tromboloid using 4 functions.
#include<stdio.h>
float input(char k)
{
    float m;
    printf("enter the value of %c:",k);
    scanf("%f",&m);
    return m;

}
float volume(float h,float d,float b)
{
    float volume=(((h*d*b)+(d/b))/3);
    return volume;
}
void output(float vol)
{
    printf("/n the volume of tromboliod is%f",vol);
}
int main()
{
    float height,depth,breath,vol;
    height=input(h);
    depth=input(d);
    breath=input(b);
    vol=volume(h,d,b);
    output(vol);
    return 0;
}
