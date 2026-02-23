//pair sum problem 

// #include<iostream>
// #include<vector>
// using namespace std;
// pair<int, int> pair_sum(vector <int> &nums,int target);
// int main(){
//     vector <int> nums={3,4,5,6,7};
//     int target;
//     cout<<"ENTER THE SUM VALUE OF TWO MEMBERS OF ARRAY(VALID):"<<endl;
//     cin>>target;
//     pair<int,int> result=pair_sum(nums,target);
//     cout<<"THE SUM:"<<target<<" is made from "<<nums[result.first]<<" and "<<nums[result.second];
//         return 0;
// }

// pair<int, int> pair_sum(vector <int> &nums,int target){
//     int n=nums.size();
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(nums[i]+nums[j]==target)
//             {
//                 return{i,j};
//             }
//         }
//     }
//     return {-1,-1};
// }


// pair sum O(n) 
// condition-  sorted needed
// based on 2 pointer approach
#include<iostream>
#include<vector>
using namespace std;
vector<int> pair_sum(vector <int> &nums,int target);
int main(){
    vector <int> nums={3,4,5,6,7}; //sorted
    int target;
    cout<<"ENTER THE SUM VALUE OF TWO MEMBERS OF ARRAY(VALID):"<<endl;
    cin>>target;
    vector <int> ans=pair_sum(nums,target);
    cout<<"THE SUM:"<<target<<" is made from indices "<<ans[0]<<" and "<<ans[1];
        return 0;
}
vector<int> pair_sum(vector <int> &nums,int target){
    vector <int> ans;
    int n=nums.size();
    int i=0,j=n-1;
    while(i<j){
        if ((nums[i]+nums[j])==target){
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
        else if((nums[i]+nums[j])<target){
            i++;
        }
        else if((nums[i]+nums[j])>target){
            j--;
        }
    }
    return ans;

}
