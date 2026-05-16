class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> arr;
        // for(int mask = 0; mask < (1<<nums.size()); mask++){
        //     for(int i=0; i<nums.size(); i++){
        //         if((mask>>i) & 1){
        //             arr.push_back(nums[i]);
        //         }
        //     }
        //     ans.push_back(arr);
        //     arr.clear();
        // }
        solve(nums, 0, ans, arr);
        return ans;
    }
    void solve(vector<int>& nums, int index, vector<vector<int>> &ans, vector<int> &arr){
        if(index == nums.size()){
            ans.push_back(arr);
            return;
        }

        //pick
        arr.push_back(nums[index]);
        solve(nums, index+1, ans, arr);

        //backtrack
        arr.pop_back();

        //unpick
        solve(nums, index+1, ans, arr);
    }
};