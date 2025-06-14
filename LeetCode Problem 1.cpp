class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int sum=0; int one; int two;
        for(int i=0;i<nums.size();i++){
          sum = nums[i];  
          for(int j=0;j<nums.size();j++){
            if(sum+nums[j]==target && j!=i) {
              sum += nums[j];
              two = j;
              break;
            }    
          }
          if(sum==target){
            one = i;
            break;
          } 
        }
        
        vector<int> answer = {one, two};

        return answer;

    }
};