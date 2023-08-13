class Solution {
public:
    int strStr(string haystack, string needle) {
        int m=haystack.length();
        int n=needle.length();
        for(int j=0;j<=m-n;j++){
            for(int i=0;i<n;i++){
                if(needle[i] != haystack[j+i]){
                    break;
                }
                if(i==n-1){
                    return j;
                }
            }
        }
        return -1;
    }
};
