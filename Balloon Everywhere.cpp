class Solution{
public:
    int maxInstance(string s){
        vector<int>v(26,0) ; 
        for(auto it : s) {
            v[it-'a']++;
        }
        int b = v['b'-'a'];int a = v['a'-'a']; 
        int l = v['l'-'a']/2;int o = v['o'-'a']/2;
        int n = v['n'-'a']; 
        int ans = min({min(b,a),min(l,o),n});
        return ans;
    }
};
