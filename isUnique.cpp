class Solution {
public:
    /**
     * @param str: a string
     * @return: a boolean
     */
    bool isUnique(string &str) {
        // write your code here
        if(str.size() > 128){
            return false;
        }
        
        bool* asciitable = new bool[128];
        for(int i = 0; i < str.size(); i++){
            if(asciitable[str[i]]){
                return false;
            }else{
                asciitable[str[i]] = true;
            }
        }
        return true;
    }
};
