class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

    vector<vector<int>> solution;
    sort(nums.begin(),nums.end());
    for(int i=0;i<nums.size()-2;){
      int* curr = &nums[i];
      int* left = &nums[i+1];
      int* right = &nums[nums.size()-1];

      while(left<right){

        if((*curr)+(*left)+(*right)==0){
          vector<int> entry = {*curr,*left,*right};
          solution.push_back(entry);

          if(*left==*right) break;

          int* lptr = left;
          int* rptr = right;

          while(*lptr==*left) left++;
          while(*rptr==*right)  right--;

          continue;          
        }

        if(*left==*right) break;

        if((*curr)+(*left)+(*right)>0){
          right--;
          continue;
        }

        if((*curr)+(*left)+(*right)<0){
          left++;
          continue;
        }

      }
      
      int index=i;
      int* mptr = curr;
      while(*mptr==*curr){
        mptr++;
        index++;
        if(index==nums.size()) return solution;
      }

      i=index;

    } 

    return solution;
    
};    