 //  Created by Muhammad Esam //
// Date : 5 november 2026  11:15 pm
 //  (❁´◡`❁)
#include<iostream>
#include <math.h>
using namespace std;

int predictAge(int age1, int age2, int age3, int age4, int age5, int age6, int age7, int age8) 
{
  double age=0.0;
  age = sqrt( age1*age1+age2*age2+age3*age3+age4*age4+age5*age5+age6*age6+age7*age7+age8*age8) /2;
  return age;
}

int main ()
{
  int age1=0 , age2=0 , age3=0 , age4=0 , age5=0, age6=0 , age7=0 , age8=0;
  cout<<"Enter Eights Ages : ";
  cin>>age1>>age2>>age3>>age4>>age5>>age6>>age7>>age8;
  predictAge(age1,age2,age3,age4,age5,age6,age7,age8);
  return 0;
}
