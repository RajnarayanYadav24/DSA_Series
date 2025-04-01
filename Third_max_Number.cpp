class Solution {
  public:
      int thirdMax(vector<int>& nums) {
  
          set<int>Sorted(nums.begin(),nums.end());
         vector<int>third_max(Sorted.begin(),Sorted.end());
         int n=third_max.size();
          if(n>3 ||n==3)
          return third_max[n-3];
          else
          {
              if(n==2)
              return third_max[1];
              else
              return third_max[0];
          }
      
      }
  };