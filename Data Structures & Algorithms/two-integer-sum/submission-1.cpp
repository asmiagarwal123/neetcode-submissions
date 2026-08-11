class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int , int > mpp ; 
        

                for ( int i = 0 ; i < size(nums); i++){
                     int req = target - nums[i];

                     if(mpp.contains(req)){
                        return {mpp[req], i };
                        
                     }
                     mpp[nums[i]]=i;



            }


                

        


        
    }
};
