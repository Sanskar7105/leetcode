class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n =candies.size();
        int max = *max_element(candies.begin(),candies.end());
        vector<bool> result(n);
        for (int i= 0;i<n;i++){
            int x = candies[i] + extraCandies;
            if (x>=max){
                result[i] = true;
            }
            else {
                result[i] = false;
            }
           
    }
    return result;
    }
    
};