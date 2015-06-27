class Solution {
public:
    /**
     * @param dictionary: a vector of strings
     * @return: a vector of strings
     */
    vector<string> longestWords(vector<string> &dictionary) {
        // write your code here
        int maxlength = 0;
        vector<string> res;
        for(int i = 0; i < dictionary.size(); i++){
            if(dictionary[i].size() > maxlength){
                res.clear();
                res.push_back(dictionary[i]);
                maxlength = dictionary[i].size();
            }else if(dictionary[i].size() == maxlength){
                res.push_back(dictionary[i]);
            }
        }
        return res;
    }
};