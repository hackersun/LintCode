class Solution {
public:
    /**
     * @param string: An array of Char
     * @param length: The true length of the string
     * @return: The true length of new string
     */
    int replaceBlank(char string[], int length) {
        // Write your code here
        if(length <= 0)return length;
        int spaceNum = 0;
        for(int i = 0; i < length; i++){
            if(string[i] == ' ')
                spaceNum++;
        }
        if(spaceNum == 0) return length;
        
        int newLength = length + 2 * spaceNum;
        string[newLength] = string[length];
        
        int newindex = newLength - 1;
        int oldindex = length - 1;
        
        while(oldindex >= 0){
            if(string[oldindex] == ' '){
                string[newindex--] = '0';
                string[newindex--] = '2';
                string[newindex--] = '%';
                oldindex--;
            }else{
                string[newindex--] = string[oldindex--];
            }
        }
        return newLength;
    }
};  
