#include<iostream>
using namespace std;
#include<vector>
void reverse_vector(vector<int> &v);
int main(){
    vector<int> v;
    int n;
    cout<<"Enter the no. of members of a vector:"<<endl;
    cin>>n;
    cout<<"Now enter the values of a vector"<<endl;
        for(int i=0;i<n;i++){
            int k;
            cin>>k;
            v.push_back(k);
    }
//reverse
reverse_vector(v);
cout<<"THE BRAND NEW VECTOR IS:"<<endl;
for(int value: v){
    cout<<value<<"\t";
} 
return 0;
}
//2pointer approach for reverse the vector  (dyanamic arrray)
void reverse_vector(vector<int> &v){
    int n=v.size();
    int i=0,j=n-1;
    while(i<j){
        swap(v[i],v[j]);
        i++;j--;
    }
}