class Solution {
public:
    int findDuplicate(vector<int>& nums) {

        // int n = nums.size();
        // int arr[n];
        // memset(arr, 0, sizeof(arr));

        
        // for(int i=0; i<nums.size(); i++){
        //     if(arr[nums[i]]==0){
        //         arr[nums[i]]++;
        //     }
        //     else{
        //         arr[nums[i]]+=1;
        //         if(arr[nums[i]]>1) {
                //         store = i;
                //         break;
                // } 
        //     }
        // }

        int store = 0;
        sort(nums.begin(), nums.end());

        for(int i=1; i<nums.size(); i++){
            if(nums[i]==nums[i-1]) {
                store = i;
                break;
            }
        }

        return nums[store];
    }
};