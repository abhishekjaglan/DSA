class Solution {
  public:
    int divisorCount(int n){
        int sum = 0;
        
        for(int i=1; i<=n ; i++){
            if(n%i==0)
                sum += i;
        }
        return sum;
    }
    int sumOfDivisors(int n) {
        int sum = 0;
        
        while(n){
            sum += divisorCount(n);
            n--;
        }
        return sum;
    }
};
