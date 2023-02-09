class solution{
public:
  bool is palindrome(int x){
     if(x<0)
       return false;
    long reversed=0;
    int y=x;
    while(y){
      reversed = reversed *10 + y %10;
      y /=10;
    
    }
    return reversed == x;
  
  
  }
}
