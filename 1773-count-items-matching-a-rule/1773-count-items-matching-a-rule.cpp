class Solution {
public:
   int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int counts=0;
        for(int i=0;i<items.size();i++){
            for(int j=0;j<items[i].size();j++){
                if(ruleKey == "type"&&ruleValue == items[i][0]) {counts++;
                break;}
                else if(ruleKey == "color"&&ruleValue == items[i][1]){counts++;
                break;}
                else if(ruleKey == "name"&&ruleValue == items[i][2]) {counts++;
                break;}
            }
        }
        return counts;
        
            }
};