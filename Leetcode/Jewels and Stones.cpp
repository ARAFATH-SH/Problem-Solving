class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {

        //naive 

        // int count = 0;
        // for(int i=0; i<jewels.size(); i++){
        //     for(int j=0; j<stones.size(); j++){
        //         if(jewels[i] == stones[j]) count++;
        //     }
        // }
        // return count;
        //TC : O(jewls * stones)
        //SC : O(1)

        //Hash_set 
        unordered_set<int> jewelsSet;
        for(auto& jewel : jewels){
            jewelsSet.insert(jewel);
        }

        int jewelsinStone = 0;
        for(auto& stone : stones){
            if(jewelsSet.count(stone)) jewelsinStone++;
        }
        return jewelsinStone;
        //Tc : O(jewels + stones) 
        //SC : O(jewelsSet)
    }
};