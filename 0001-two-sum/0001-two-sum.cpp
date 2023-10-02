class Solution {
public:
    #define pr pair<int,int>
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pr> v;
        for(int i=0;i<nums.size();i++){
            v.push_back({nums[i],i});
        }
        sort(v.begin(),v.end());
        int left = 0;
        int right = nums.size()-1;
        int sum;
        while(left<right){
            sum = v[left].first + v[right].first;
            if(sum == target){
                return {v[left].second, v[right].second};
            }else if(sum < target){
                left++;
            }else{
                right--;
            }
        }
        return {};
    }
};