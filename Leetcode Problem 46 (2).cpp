class Solution {
public:

   void pushintoanswer(vector<int> arr, int index, vector<vector<int>>& answer){
      
      if(index == arr.size()-1){
          answer.push_back(arr);
      }
      
      for(int k=index;k<arr.size();k++){
          swap(arr[index],arr[k]);
          pushintoanswer(arr,index+1,answer);
          swap(arr[index],arr[k]);
      }
      
       
   }

    vector<vector<int>> permute(vector<int>& nums) {
      
      vector<vector<int>> answer;
      pushintoanswer(nums,0,answer);
      return answer;
 
    }
};