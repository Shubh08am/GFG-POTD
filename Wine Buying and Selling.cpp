//User function Template for C++


class Solution{
  public:
  long long int wineSelling(vector<int>& Arr, int N){
      //Code here
       /*
     -1000, -1000, -1000, 1000, 1000, 1000 
    [1] 0th sell to 3rd -> 1000*(3-0) -> 3000
     0, -1000, -1000, 0, 1000, 1000
     [2] 1st sell to 4th -> 1000*(4-1) -> 3000
     0, 0, -1000, 0, 0, 1000
     [3] 2nd sell to 5th -> 1000*(5-2) -> 3000
     0, 0,  0, 0, 0,  0
     
     total = 9000
      */
      
       long long int sum=0;
      //prefix sum 
      for(int i=0; i<N ; i++){
          Arr[i+1]+=Arr[i];
      }
      //5 1 2 -1 0  -> abs(sum) -> 9
      // -1000 -2000 -3000 -2000 -1000 0  -> abs(sum) -> 9000
     
      
      for(auto it : Arr) sum+=abs(it);
      
      return sum;
      
  }
};
