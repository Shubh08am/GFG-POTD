// User function template for c++

// User function template for c++

class Solution {
  public:
  int sum(int n){
      int c=0;
      while(n){
          c+=n%10;
          n/=10;
      }
      return c;
  }
    string BalancedString(int N) {
        // code here
        string s = "abcdefghijklmnopqrstuvwxyz";
        string ans="";int b = N;
        while(N > 26){
            ans += s;
            N -= 26;
        }
        if(!(N&1)){
            int st = N/2 , en = N/2;
             int i=0;
             while(st--){
                    ans+=s[i];
                    i++;
                }
              i=1;string rev="";
                while(en--){
                    rev+=s[26-i];
                    i++;
                }
                reverse(rev.begin(),rev.end());
                ans+=rev; 
                
        }
        
        else{
            int a = sum(b);
            
            if(!(a&1)){
                int st = (N+1)/2;
                int en = (N-1)/2;
                
                 int i=0;
                while(st--){
                    ans+=s[i];i++;
                }
                 i=1;string rev="";
                while(en--){
                    rev+=s[26-i];
                    i++;
                }
                reverse(rev.begin(),rev.end());
                ans+=rev;
                
            }
            else{
                int st = (N-1)/2;
                int en = (N+1)/2;
                int i=0;string rev="";
                 while(st--){
                    ans+=s[i];i++;
                }
                 i=1;
                while(en--){
                    rev+=s[26-i];
                    i++;
                }
                reverse(rev.begin(),rev.end());
                ans+=rev;
            }
            
        }
        return ans;
    }
};
