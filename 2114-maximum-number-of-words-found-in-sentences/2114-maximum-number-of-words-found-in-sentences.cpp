class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        
        int m= 0;
        int n = sentences.size();
        for(int i =0;i<n;i++){
            int count = 1;
            string x = sentences[i];
            for (unsigned char ch : x){
            if (std::isspace(ch)) {
            count++;
            }
            m= max(m,count);
        }
        
    }
    return m;
    }
};