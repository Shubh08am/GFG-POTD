//User function Template for C++

class Solution {
public:
    int minimizeSum(int N, vector<int> arr) {
 
        multiset<int>s; int ans=0;
        for(auto &it:arr){
            s.insert(it);
        }
        
        // for(auto &it:s){
        //   cout<<it<<" ";
        // }
         bool flg=1;
        while(!s.empty() and flg) {
            
            if(s.size()==1) {
               flg=0;break;
            }
            
            int first_val=*s.begin();
            s.erase(s.begin());
             int second_val = *s.begin();
            s.erase(s.begin());
            
            ans+=(first_val+second_val);
            s.insert(first_val+second_val);
        }
        
        return ans;
    }
};
