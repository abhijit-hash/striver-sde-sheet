class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>ms,mt;
        if(s.size()!=t.size()){
            return false;
            }
        for(int i=0;i<s.size();i++){
            ms[s[i]]++;
            mt[t[i]]++;
            }
          for(auto x:s){
              if(ms[x]!=mt[x]){
                  return false;
                  }
              }
            
                
                
        return true;

    }
};
