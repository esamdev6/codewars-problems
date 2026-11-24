// created by Muhammad Esam and Ahmar Louis(only write class) 
//date 24 november 2026

#include<iostream>
using namespace std;
class CountDig
{
public:
    static int nbDig(int n, int d);
};

int CountDig::nbDig(int n, int d){
    int count{0},square{0};
  if(d!=0){
    for(int i=0;i<=n;i++){
        square=i*i;
      
        while(square>0){
            if(square%10==d){
                count++;
            }
            square=square/10;
        }
      
    }
      return count;
    }else{
    for(int i=0;i<=n;i++){
        square=i*i;
      
        while(square>0){
            if(square%10==d){
                count++;
            }
            square=square/10;
        }
      
    }
    return count+1;
  }
}
