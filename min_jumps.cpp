  public:
    int minJumps(vector<int>& arr) {
        int maxReach = arr[0], steps = arr[0], jumps = 1, n=arr.size();
        
        if(arr[0]==0 || n <=1){
            return -1;
        }else {
            for(int i = 1; i<n; i++){
                if(i == n-1)
                    return jumps;
                maxReach = max(maxReach, arr[i]+i);
                steps--;
                
                if(steps == 0){
                    jumps++;
                    if(i >= maxReach)
                        return -1;
                    steps = maxReach-i;
                }
            }   
        }
        return jumps;
    }
