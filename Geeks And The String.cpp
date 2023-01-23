class Solution {
  public:
    string removePair(string s) {
                stack<char>st;

        string ans="";
        for(auto a:s){
            if(!st.empty()&&st.top()==a)st.pop();
            else st.push(a);
        }
        while(!st.empty()){
            ans=st.top()+ans;
            st.pop();
        }
        return ans==""?"-1":ans;
    }
};
