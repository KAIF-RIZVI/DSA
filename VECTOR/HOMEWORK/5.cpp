#include<iostream>
using namespace std;
#include<vector>
int linear_search(vector<int> &v,int target);
int main(){
    vector<int> v;
    int n,target;
    cout<<"Enter the no. of members of a vector:"<<endl;
    cin>>n;
        for(int i=0;i<n;i++){
            int k;
            cin>>k;
            v.push_back(k);
    }

    //linear search
    cout<<"Enter the element to search";
    cin>>target;
    int found =linear_search(v,target);
    if(found==-1){
        cout<<"element not present"<<endl;
    }
    else{
    cout<<"element is found at index: "<<found<<endl;
    }
return 0;
}

int linear_search(vector<int> &v,int target){
    int loc=0;
    for(int i: v){
        if(i==target){
            return loc;
        }
        loc++;
    }
    return -1;
}