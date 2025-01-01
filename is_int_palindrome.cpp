    bool isPalindrome(int x) {
        if(x < 0)
            return false;

        int y = x, digit = 0;
        long num = 0;

        while(y != 0){
            digit = y % 10;
            num = num*10 + digit;
            y /= 10;
        }

        if(num == x)
            return true;
        return false;
    }
