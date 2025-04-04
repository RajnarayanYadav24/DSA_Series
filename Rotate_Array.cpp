class Solution {
  public:
      void rotate(vector<int>& nums, int k) {
          k=k%nums.size();
          //first we reverse the last k element of array
          reverse(nums.end()-k,nums.end());
          //then we reverse first n-k element of array
          reverse(nums.begin(),nums.end()-k);
          // finally we reverse the whole Array
          reverse(nums.begin(),nums.end());
      }
  };