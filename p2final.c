#include<stdio.h>
struct_fraction
{
  int num,den;
};
typedef _fraction Fraction
Fraction input_fraction()
{
  Fraction val1;
  scanf("%d%d",&val1.num,&val1.den);
  return val1;
}
Fraction Largest_fraction(Fraction f1,Fraction f2,fraction f3)
{
  Fraction result;
  int i,lcm,fr1,fr2,fr3;
  lcm=f1.den*f2.den*f3.den;
  fr1=f1.num*lcm;
  fr2=f2.num*lcm;
  fr3=f3.num*lcm;
  for(i=1;i<=f1.den&&i<=f2.den&&i<=f3.den;++i)
  {
    if(f1.den%i==0&&f2.den%i==0&&f3.den%i==0)
      gcd=i;
  }
}
if(fr1<fr2&&fr2<fr3)
{
  result=
}