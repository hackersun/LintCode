class Solution {
public:
    /**
     * @param s A string
     * @return the length of last word
     */
    int lengthOfLastWord(string& s) {
        // Write your code here
        int end = s.size()-1;
        int begin = end;
        while(begin >= 0){
            if(s[begin] == ' '){
                break;
            }
            begin--;
        }
        if(begin == end)return 0;
        return end-begin;
    }
};
