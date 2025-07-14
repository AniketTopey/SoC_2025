class Solution {
public:
    vector<vector<int>> answer;

    void startingWith (vector<int> arr, vector<int> nums, vector<vector<int>>& answer){
      if(arr.size()==nums.size()){
        answer.push_back(arr);
        return;
      }

      for(int i=0;i<nums.size();i++){
        bool toadd = true;
        for(int j=0;j<arr.size();j++){
          if(arr[j]==nums[i]){
            toadd=false;
            break;
          }
        }
        if(toadd){
          vector<int> newarr = arr;
          newarr.push_back(nums[i]);
          startingWith(newarr, nums, answer);
        }
      }
    }

    vector<vector<int>> permute(vector<int>& nums) {
      
      for(int x : nums){
        vector<int> startingarr;
        startingarr.push_back(x);
        startingWith(startingarr, nums, answer);
      }

      return answer; 
      
    }
};