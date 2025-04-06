class Solution {
  public:
      int majorityElement(vector<int>& nums) {
          int num=0, count=0, mElement=0;
          for(int i=0;i<nums.size();i++)
          {
             num=nums[i];
             if(count==0)
               mElement=num;
               
                if(num==mElement)
                count++;
                else
                count-- ;
          }
          return mElement;
      }
  };