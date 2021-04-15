//WAP to find the sum of two fractions.
#include<stdio.h>
struct frac
{
int numerator;
int denominator;
};
typedef struct frac fract;
fract input()
{
fract f1;
printf("Enter the numerator\n");
scanf("%d",&f1.numerator);
printf("Enter the denominator\n");
scanf("%d",&f1.denominator);
return f1;
}
fract sum(fract f1,fract f2)
{
fract f3;
if(f1.denominator==f2.denominator)
{
f3.denominator=f1.denominator;
f3.numerator=f1.numerator+f2.numerator;
}
else
{
f3.denominator=f1.denominator*f2.denominator;
f3.numerator=(f1.numerator*f2.denominator)+(f2.numerator*f1.denominator);
}
return f3;
}
int main()
{
fract f1,f2,c;
f1 =input();
f2 =input();
c =sum(f1,f2);
printf("The final sum is %d/%d",c.numerator,c.denominator);
return 0;
}

