class Solution {
  public:
      int removeDuplicates(vector<int>& nums) {
       int index=0;
        for(int i=0;i<nums.size();i++)
        {
          if(index<2 || nums[i]!=nums[index-2])
          {
          nums[index]=nums[i];
          index++;
          }
        }
        return index;  
      }
  };