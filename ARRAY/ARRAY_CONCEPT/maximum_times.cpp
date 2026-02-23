//majority elelment o(n2)
// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         int i,j,n=nums.size();
//         for(i=0;i<n;i++){
//             int times=0;
//             for(j=i;j<n;j++){
//                 if(nums[i]==nums[j]){
//                     times++;
//                 }
//                 if(times>(n/2)){
//                     return nums[i];
//                 }
//             }
//         }
//         return nums[i];    
//     }
// };

// or
// slightly better
// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         sort(nums.begin(),nums.end());
//         int n=nums.size(),count=1,i;
//         for(i=1;i<n;i++){
//             if(nums[i]==nums[i-1]){
//                 count++;
//             }
//             else{
//                 count=1;
//             }
//             if(count>(n/2)){
//                  return nums[i];
//             }
//         }
//         return nums[i-1];
//     }
// };

// or
// applying logic through the moores voting algorithm (most efficient)
// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         int freq=0,ans=0;
//         for(int i=0;i<nums.size();i++){
//           if(freq==0){
//             ans=nums[i];
//           }
//           if(ans==nums[i]){
//             freq++;
//           }
//           else{
//             freq--;
//           }
//     }
//     return ans;
//     }
// };
