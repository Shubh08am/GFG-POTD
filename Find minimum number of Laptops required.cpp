//User function Template for C++

class Solution {
  public:
    int minLaptops(int N, int start[], int end[]) {
        // Code here
 
  /*   
1 2 5 
2 3 6 

1 2 3
4 4 6
*/

        sort(start,start+N) ; 
        sort(end,end+N) ; 

        int low = 0 , high=0 , cnt=0 ;
         
         while(low<N and high<N) {
             if(start[low] < end[high]){
                 cnt++;
                 low++;
              } 
              
              else if(start[low] >= end[high]){
                  high++;
                  low++;
              }
         }
        return cnt;
    }
};
