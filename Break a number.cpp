//User function Template for C++
//User function Template for C++
class Solution{   
public:
    long long int waysToBreakNumber(long long int n){
        // code here 
        int mod = 1e9+7;
         long long int ans=0;
        //3 whole number 
        /*0 ke sath pairs ,
         1 ,0 ke sath 
         1,2,0  ke sath 
         3,1,2 || 3,1,0 ke sath 
         .. so on 
         n even or odd  except 1-->
        2 -> 6 ans -> 3*4/2
        4-> 15 ans -> 5*6/2
        6-> 28 ans -> 7*8/2
        5-> 21 ans -> 6*7/2
        7-> 36 ans -> 8*9/2
        */
        if(n==1){ // 0 0 1 || 0 1 0 || 1 0 0
            ans = 3%mod;
        }
        
        else{
            ans = ( ( ((n+1) %mod) * ((n+2)%mod) *1LL) %mod*1LL)/2;

        }
        return ans ;
    }
};
