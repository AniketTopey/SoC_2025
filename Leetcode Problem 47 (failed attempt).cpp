class Solution {
public:
    
    void pushintoanswer(vector<int> arr, int index, vector<vector<int>>& answer){
      
      if(index == arr.size()-1){
        answer.push_back(arr);
        return;
      }

      for(int k=index;k<arr.size();){
        if((arr[index]==arr[k]) && (index!=k)) {
          k++;
          continue;
        }
        if((k<arr.size()-1)&&(arr[k]==arr[k+1])&&(k!=index)){
          swap(arr[index],arr[k]);
          pushintoanswer(arr,index+1,answer);
          swap(arr[index],arr[k]);

          int j=k;
          bool inending = false;
          while(arr[j]==arr[k]){
            j++;
            if(j==arr.size()-1){
              inending = true;
              break;
            }
          }
          if(!inending){
            k=j;
            continue;
          } else break;
        }

        swap(arr[index],arr[k]);
        pushintoanswer(arr,index+1,answer);
        swap(arr[index],arr[k]);    
        k++;    
      }

    }
    
    vector<vector<int>> permuteUnique(vector<int>& nums) {
      vector<vector<int>> answer;
      sort(nums.begin(),nums.end());
      pushintoanswer(nums,0,answer);
      return answer;
    }
};