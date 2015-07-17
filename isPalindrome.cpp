class Solution {
public:
    /**
     * @param s A string
     * @return Whether the string is a valid palindrome
     */
    bool isPalindrome(string& s) {
    // Write your code here
    if(s.size() <= 0)
        return true;
    int i = 0, j = s.size() - 1;
    while(i < j){
        while(!isAlphaBeta(s, i) && i < j)
            i++;
        if(i >= j) return true;
        while(!isAlphaBeta(s, j) && i < j)
            j--;
        if(i >= j) return true;
        if(toupper(s[i]) == toupper(s[j])){
            i++;
            j--;
        }else{
            return false;
        }
    }
    return true;
}

bool isAlphaBeta(string s, int index){
    char c = s[index];
    if((c >= 65 && c <= 90) || (c >= 97 && c <= 122) || (c>= 48 && c <= 57)){
        return true;
    }
    return false;
}
};
