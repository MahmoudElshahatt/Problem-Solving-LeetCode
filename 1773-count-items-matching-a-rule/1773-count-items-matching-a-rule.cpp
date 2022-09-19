class Solution {
public:
  int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int counts=0;
        
            if(ruleKey == "type"){
            for(int i = 0; i<items.size(); i++){
                if(ruleValue == items[i][0]){
                    counts++;
                }
            }
            return counts;
        }
        
        if(ruleKey == "color"){
            for(int i = 0; i<items.size(); i++){
                if(ruleValue == items[i][1]){
                    counts++;
                }
            }
            return counts;
        }
        
        if(ruleKey == "name"){
            for(int i = 0; i<items.size(); i++){
                if(ruleValue == items[i][2]){
                    counts++;
                }
            }
            return counts;
        }
        return 0;
            }
};