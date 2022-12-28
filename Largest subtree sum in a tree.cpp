//User function Template for C++

class Solution {
   
  public:
  int a(Node*root , int&maxSum){
       int sum=0 ;
 
if(root==NULL) return 0;
         
//if left child exist 
       int  leftChild =  a(root->left,maxSum);
        
//if right child exist 
       int  rightChild =  a(root->right,maxSum);

     sum=leftChild + rightChild + root->data;
         //see for maxSum of tree
        maxSum = max(maxSum,leftChild + rightChild + root->data);
        
        return sum;
  }
    // Function to find largest subtree sum.
    int findLargestSubtreeSum(Node* root)
    {   int maxSum=INT_MIN;

        a(root,maxSum);
        return maxSum;
    }
};
