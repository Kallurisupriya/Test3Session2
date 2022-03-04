#include<stdio.h>
typedef struct fraction
{
int num,den;
}Fraction;
Fraction input_fraction()
{
  Fraction val1;
  scanf("%d%d",&val1.num,&val1.den);
  return val1;
}
Fraction smallest_fraction(Fraction f1, Fraction f2, Fraction f3) 
{
  int lcm,fr1,fr2,fr3;
  lcm=f1.den*f2.den*f3.den;
  fr1=f1.num*lcm/f1.den;
  fr2=f2.num*lcm/f2.den;
  fr3=f3.num*lcm/f3.den;
  if(fr1<fr2&&fr1<fr3)
    return f1;
  else
    if(fr2<fr3&&fr2<fr1)
      return f2;
  else
      if(fr3<fr1&&fr3<fr2)
        return f3;
}
void output(Fraction f1, Fraction f2, Fraction f3, Fraction smallest)
{
  printf("the smallest of %d/%d,%d/%d and %d/%d is %d/%d",f1.num,f1.den,f2.num,f2.den,f3.num,f3.den,smallest.num,smallest.den);
}
int main()
{
  Fraction f1,f2,f3,result;
  printf("enter 3 fractions\n");
  f1=input_fraction();
  f2=input_fraction();
  f3=input_fraction();
  result=smallest_fraction(f1,f2,f3);
  output(f1,f2,f3,result);
  return 0;
}