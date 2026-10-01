class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0, end = nums.size() - 1;
        while(low < end){
            int mid = low + (end - low) / 2;
            if(nums[mid] > nums[end]){
                low = mid + 1;
            } else {
                end = mid;
            }
        }
        return nums[end];
    }
};