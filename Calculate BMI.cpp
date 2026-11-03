   // "Created by Muhammad Esam " 
   // Date : 3 November 2026
#include <string>
using namespace std;

std::string bmi(double w, double h) 
{
  double bmi=0.0;
  bmi=w/(h*h);
  if(bmi<=18.5){
    return "Underweight";
  }else if(bmi<=25.0){
    return "Normal";
  }else if(bmi<=30.0){
    return "Overweight";
  }else
    return "Obese";
}
