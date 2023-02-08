class solution{
  public:
  int jump(vector<int>&nums){
      int a=0;
      int b=0;
      int c=0;
      for(int i=0;i<nums.size()-1;++i){
         c=max(c,i+nums[i]);
         if(c>=nums.size()-1){
         ++a;
           break;
         
         }
        if(i==b){
        ++a;
          b=c;
        
        }
      
      }
  
  return a;
  
  }

}
