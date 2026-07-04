class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0, high = n-1;
        int guess;
        while(low <= high){
            guess = (low+high) / 2;
            if(nums[guess] == target){
                return guess;
            }
            else if(nums[guess] < target){
                low = guess+1;
            }
            else{
                high = guess - 1;
            }
        }
        return -1;
    }
};
