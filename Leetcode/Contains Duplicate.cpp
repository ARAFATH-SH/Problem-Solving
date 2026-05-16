class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // set<int> extra;
        // for(auto i : nums){
        //     extra.insert(i);
        // }
        // return extra.size() != nums.size();

        unordered_set<int> extra;

        for(auto i: nums){
            if(extra.count(i)){
                return true;
            }
            extra.insert(i);
        }
        return false;
    }

    //TC : O(N)
    //SC : O(N)
};