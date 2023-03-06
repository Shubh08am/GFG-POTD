/* Tree node structure  used in the program
 struct Node
 {
     int data;
     Node* left, *right;
}; */

class Solution{
  public:
    /*You are required to complete below method */
    int maxLevelSum(Node* root) {
         vector<int>ans;
        queue<Node*>q;//stores nodes
        if(root==NULL){
            return -1; //i.e empty
        }
        //else insert root  in queue
        q.push(root);

        while(!q.empty()){
            int level=0;
            int size_to_traverse = q.size();//traversing till size of each level

            for(int i=0;i<size_to_traverse;i++){
                //see if left and right exist if yes insert that nodes in queue
                Node*node = q.front();
                q.pop();//remove from queue 
                if(node->left!=NULL){
                    q.push(node->left);
                }
                if(node->right!=NULL){
                    q.push(node->right);
                }
            //now,insert all level nodes in level vector 
            level+=node->data;
            }
       //store level vector in ans now --> as nodes get inserted level vise 
       ans.push_back(level);
        } 
        sort(ans.begin(),ans.end(),greater<int>()) ;
          return ans[0];
    }
};
