class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        sort(hand.begin(),hand.end());
        if(hand.size() % groupSize != 0) return false;
        unordered_map<int,int> count;
        for(int card:hand) count[card]++;
        for(int card:hand){
            if(count[card] == 0) continue;
            
            for(int i=0; i<groupSize; i++){
                int next_card = card+i;
                if(count[next_card] == 0){
                    return false;
                }
                count[next_card]--;
            }
        }
        return true;
    }
};
