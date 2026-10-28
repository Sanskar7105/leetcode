class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int cnt2 = 0;
        for (int i = 0 ; i<nums.size();i++){
           int cnt =0;
           int n = nums[i];
           while(n>0){
            int rem = n%10;
            n = n/10;
            cnt ++;
           }
           if (cnt%2==0){
            cnt2++;
           }

        }
        return cnt2;
    }
};