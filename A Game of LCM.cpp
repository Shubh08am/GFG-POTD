// User function Template for C++

class Solution {
  public:
    long long maxGcd(int N) {
        // code here
        
         long long int all = log2(N);
         long long int pwr = pow(2,all) ;
         long long int ans = INT_MIN;
 
         //search for all combination 
         for(long long int i=all ; i<=N;i++){
             long long curr = i; 
             long long prev = i-1; 
             int cnt=1;
             
             while(cnt<4){
                 if(__gcd(curr,prev) ==1){
                     curr*=prev*1LL;
                     cnt++;
                 }
                 prev--;//for all combination 
                 //for 4 take 1 twice 
                 if(prev<=0){
                     prev=1;
                 }
             }
             ans=max(ans,curr);
         }
        return ans;
    }
};
