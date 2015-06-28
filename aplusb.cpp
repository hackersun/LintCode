class Solution {
public:
    /*
     * @param a: The first integer
     * @param b: The second integer
     * @return: The sum of a and b
     */
    int aplusb(int a, int b) {
        // write your code here, try to do it without arithmetic operators.
        long andres = a & b;
        long res = a ^ b;
        if(andres == 0) return res;
        return aplusb(res, andres<<1);
    }
};
