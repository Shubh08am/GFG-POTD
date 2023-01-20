class Solution {
  public:      // code here 
        //find set bit cnt in b 
        // than assgn set bit the same pos as in A from MSB 
        //after,that from LSB 
        
    int countsetBits(int n) {
        int count = 0;
        while (n > 0){
            n = n & (n - 1);
            count++;
        }
        return count;
    }
public:
    int minVal(int a, int b){
        int n = countsetBits(b);
        int ans = 0;
        for (int i = 31; i >= 0 && n > 0; i--) {
            // obtaining the ith bit of a
            int bit = (a >> i) & 1;

            if (bit == 1){
                n--;
                // set ith bit in ans
                ans = ans | (1 << i);
            }
        }
        // ans must have n set bits
        // if n > 0 after loop we have to set bits from lsb
        for (int i = 0; i < 32 && n > 0; i++) {
            int bit = (ans >> i) & 1;
            if (bit == 0) {
                n--;
                // set ith bit in ans
                ans = ans | (1 << i);
            }
        }
        return ans;
    }
};
