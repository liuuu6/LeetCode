class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) 
    {
        if(!strs.size()){
            return " ";
        }
            int length = strs[0].size();
            int count = strs.size();
            for (int i = 0;i<length;++i){
                char c=strs[0][i];
                for(int j=1;j<count;++j){
                    int ou = strs[j].size();
                     if(c != strs[j][i] || i== ou){
                         return strs[0].substr(0,i);
                     }     
                } 
            }return strs[0];
    }
};


