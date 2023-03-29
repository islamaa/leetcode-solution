class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        int ans = 0;
        int ss = 0;
        sort(begin(satisfaction),end(satisfaction),greater<>());
        for(const int n : satisfaction){
            ss += n;
            if(ss <= 0)
            return ans;
            ans += ss;









        }
        return ans;

        
        
    }
};
