//User function template for C++

long long maxArea(long long A[], int len)
{
    // Your code goes here
    int start = 0 , end = len-1;
    int water = 0;
    while(start<end){
        int mini = min(A[start],A[end]);
        int curr = (end-start)*mini;
        water = max(water,curr);
        
        if(A[start]<=A[end])   start++;
        else  if(A[start]>A[end])    end--;
    }
    return water;
}
