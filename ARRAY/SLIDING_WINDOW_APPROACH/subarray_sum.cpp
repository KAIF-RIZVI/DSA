#include<iostream>
#include<vector>
using namespace std;

vector<int> subarray_sum(vector<int>& nums,int k){
    vector<int> result;
    int n=nums.size();
    for(int i=0; i<n-k+1; i++){
        int sum=0;
        for(int j=i;j<i+k;j++){
            sum+=nums[i];
        }
        result.push_back(sum);
    }
    return result;
}

int main(){
    vector<int> a={2,3,-1,5,8,9,1,0};
    vector<int> result=subarray_sum(a, 4);
    for(int i=0; i<result.size();i++){
        cout<<result[i];
    }

    return 0;
}