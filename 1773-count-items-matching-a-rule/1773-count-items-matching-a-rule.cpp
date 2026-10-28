class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int  n = items.size();
        int cnt =0;
        int m = 0;
        if (ruleKey == "type"){ m=+0;}
        else if(ruleKey == "color"){m =+1;}
        else{ m =+2;}
        for(int i = 0 ;i<n;i++){
           vector<string> x = items[i];
           if (x[m] == ruleValue){
               cnt++;
            }
             
        }
        
        return cnt;
    }
};