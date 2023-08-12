class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        string ans="";
        sort(strs.begin(),strs.end());
        string i=strs[0],j=strs[n-1];
        for(int k=0;k<i.size();k++){
            if(i[k]==j[k]){
                ans+=i[k];
            }
            else{
                break;
            }
        }
        return ans;
    }
};
