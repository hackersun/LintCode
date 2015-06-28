class Solution {
public:
    /**
     * @param num: an integer
     * @return: an integer, the number of ones in num
     */
    int countOnes(int num) {
        // write your code here
        int res = 0;
        if(num < 0) num = -num;
        while(num){
            if(num & 1) res++;
            num = num >> 1;
        }
        return res;
    }
};
