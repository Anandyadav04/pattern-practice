class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int low = 0;
        int res = -1;
        unordered_map< int, int > fr;
        for (int high = 0; high < fruits.size(); high++) {
            fr[fruits[high]]++;
            while(fr.size() > 2){
                fr[fruits[low]]--;
                if(fr[fruits[low]] == 0){
                    fr.erase(fruits[low]);
                }
                low++;
            }
            if(fr.size() <= 2){
                res = max(res, high - low + 1);
            }  
        }
        return res;
    }
};