class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int low =0;
        int n = nums.size();
        int high = n-1;
        int mid;
        if(n==1){
            return 0;
        }
        while(low<=high){
            mid = low + (high-low)/2;
            if((mid==0 || nums[mid] > nums[mid-1]) && (mid == n-1 || nums[mid] > nums[mid+1])){
                return mid;
            }
            else if(mid==0 || nums[mid] > nums[mid-1] && mid == n-1 || nums[mid] < nums[mid+1]){
                low = mid+1;
            }
            else if(mid==0 || nums[mid] < nums[mid-1] && mid == n-1 || nums[mid] > nums[mid+1]){
                high = mid-1;
            }
        }
        return mid;
    }
};