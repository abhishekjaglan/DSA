class Solution {
public:
    int reverse(int x) {
        double num = 0;

        while(x != 0){
            int digit = x % 10;
            num = (num * 10) + digit;
            x = x/10;
        }

        if(num > pow(2,31) - 1 || num < -1 * pow(2,31)) return 0;
        else return num;
    }
};
