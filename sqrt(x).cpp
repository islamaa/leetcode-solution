#include<bits/stdc++.h>
using namespace std;
class solution {
  public:
  int mysqrt(int x){
    
    int y=1;
    int n=x;
    while(x>y){
    
      n=y+(n-y)/2;
      y=n/x;
    
    }
    
    
  
   return n;
  
  
  }
  
 
};


