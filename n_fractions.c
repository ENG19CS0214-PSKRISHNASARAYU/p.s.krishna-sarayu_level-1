//WAP to find the sum of n fractions.
#include<stdio.h>
struct fraction
{
int numer;
int denom;
};
typedef struct fraction Frac;
Frac input()
{
Frac f;
printf("Enter the numerator: ");
scanf("%d",&f.numer);
printf("Enter the denominator: ");
scanf("%d",&f.denom);
return f;
}
void input_n(Frac f1[],int *n)
{
printf("Enter the number of fractions: \n");
scanf("%d", n);
printf("Enter the values of the fraction\n");
for(int i=0; i<*n; i++)
{
f1[i] = input();
}
}
Frac sum(Frac f1, Frac f2)
{
Frac f3;
f3.numer=(f1.numer*f2.denom)+(f2.numer*f1.denom);
f3.denom = f1.denom*f2.denom;
int g = gcd(f3.numer,f3.denom);
f3.numer = f3.numer/g;
f3.denom = f3.denom/g;
return f3;
}
Frac sum_n(Frac f1[], int n)
{
Frac f3;
f3.numer = 0;
f3.denom = 1;
for(int i=0;i<n; i++)
{
f3 = sum(f1[i],f3);
}
return f3;
}
int gcd(int a, int b)
{
int i,gcd=1,temp;
if( a < b)
{
temp = a;
a=b;
b=temp;
}
if ( a % b == 0)
{
return b;
}
for ( i = b/2; i >=2 ; i--)
{
if( a%i == 0 && b%i==0)
return i;
}
return gcd;
}
void output(Frac f1[], Frac f3, int n)
{
printf("The sum of ");
for(int i=0; i<n; i++)
{
if(i<n-1)
printf("%d/%d + ", f1[i].numer,f1[i].denom);
else
printf("%d/%d", f1[i].numer,f1[i].denom);
}
printf(" is %d/%d ", f3.numer, f3.denom);
}
int main()
{
Frac f1[100],f3;
int n;
input_n(f1,&n);
f3=sum_n(f1,n);
output(f1,f3,n);
return 0;
}
