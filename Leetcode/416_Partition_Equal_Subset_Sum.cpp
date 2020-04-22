class Solution {
public:
    bool arr[202][10001] = {0};
    bool canPartition(vector<int>& b) {
        int n;
        n = b.size();
        vector<int> a(n+1, 0);
        int tot = 0;
        for(int i = 0; i < n; i++){
            a[i+1] = b[i];
            tot+=a[i+1];
            arr[i][0] = true;
        }
        if(tot%2==1){
            return false;
        }
        arr[n][0] = true;
        for(int i = 1; i < (int)a.size(); i++){
            memcpy(arr[i],arr[i-1],sizeof(arr[i-1]));
            for(int j = tot+1; j >= 0; j--){
                if(j-a[i]>=0 && arr[i][j-a[i]]){
                    arr[i][j] = true;
                }
            }
        }
        if(tot%2==0)
            if(arr[a.size()-1][tot/2])
                return true;
        
        return false;
    }
};
