class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int cnt,sum=0,i,j,fin_cnt;

        for(i=0;i<nums.size();i++){
            cnt=0;
           for(j=0;j<nums.size();j++){
               if(nums[i]==nums[j]){
                   cnt++;
               }
            fin_cnt=cnt;
            
           }
          if(fin_cnt<2){
                sum+=nums[i];
                }
        }
        return sum;
        
    }  
};
