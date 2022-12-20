class Solution{
  public:
    int maxDistance(int arr[], int n) 
    { 
        /*
        Case 1 :
         (arr[ i ] -  i) - (arr[ j ] - j )
         
        Case 2 :
       - (arr[ i ]  +  i)  + (arr[ j ] +j )
        */
        //4 8 3 56 7 -> 55
        
int first_max=INT_MIN,second_max=INT_MIN;
int first_min=INT_MAX,second_min=INT_MAX;

            for(int i=0;i<n;i++){
                first_max=max(first_max,arr[i]-i);
                 first_min=min(first_min,arr[i]-i);
                 
                second_max=max(second_max,arr[i]+i);
                second_min=min(second_min,arr[i]+i);
            }

int ans = first_max-first_min;
int ans2 = second_max-second_min;
ans=max(ans,ans2);
            return ans;
    } 
};
