// User function Template for C++

class Solution{
public:
    int hopscotch(int n, int m, vector<vector<int>> mat, int ty, int i, int j)
    {
        // code here
  
    int res =0;
// y is odd for unit dist --> Avantika
         
int x_odd[] ={0,1,1,1,0,-1};
int y_odd[] ={1,1,0,-1,-1,0};
         
// y is even 
int x_even[] ={-1,-1,-1,0,1,0};
int y_even[] ={0,-1,1,-1,0,1};
        
// unit 2 distance --> aakriti

 // y  odd
int xx_odd[] = { -1,-1,-2,-1,-1,0,0,1,1,2,2,2}; 
 int yy_odd[] = { -2,-1,0,1,2,-2,2,-2,2,-1,0,1};
        
// y  even
 int xx_even[] = {-2,-2,-2,-1,-1,0,0,1,1,1,1,2}; 
 int yy_even[] = {-1,0,1,-2,2,-2,2,-2,-1,1,2,0};
        
       
// one step
 if(ty==0){
   if(j&1){
        for(int k=0; k<6; k++){
             int x = x_odd[k]+i;
               int y = y_odd[k]+j;
                  if(x>=0 && x<n && y>=0 && y<m)
                         res+= mat[x][y];
                        }
            }
     else if(!(j&1)){
         for(int k=0; k<6; k++){
                int x = x_even[k]+i;
                 int y = y_even[k]+j;
                  if(x>=0 && x<n && y>=0 && y<m)
                        res+= mat[x][y];
                        }
            }
    
        }
        else if(ty==1){
             //odd
           if(j&1){
                   for(int k=0; k<12; k++){
                          int x = xx_odd[k]+i;
                          int y = yy_odd[k]+j;
                
                           if(x>=0 && x<n && y>=0 && y<m)
                             res+= mat[x][y];
                        }
            }
            else
            {
                   for(int k=0; k<12; k++)
                        {
                          int x = xx_even[k]+i;
                          int y = yy_even[k]+j;
                
                           if(x>=0 && x<n && y>=0 && y<m)
                             res+= mat[x][y];
                        }
            }
        }
        return res;
        
    }
};
