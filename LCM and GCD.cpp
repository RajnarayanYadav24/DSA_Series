class Solution {
  public:
    vector<int> lcmAndGcd(int a, int b) {
    vector<int>ans;
         int r_var=0;
         int A=a,B=b;
         while(B!=0)
         {
             r_var=A;
             A=B;
             B=r_var%B;
         }
         int gcd=A;
         int lcm=(a*b)/gcd;
         ans.push_back(lcm);
         ans.push_back(gcd);
         return ans;
    }
  
};
