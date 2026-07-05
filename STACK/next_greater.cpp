#include<iostream>
#include<vector>
#include<stack>
using namespace std;

vector<int> nextGreater(vector<int> &a){
     stack<int> st;
    vector<int> ans(a.size(),0);

        for(int i=a.size()-1; i>=0;i--){
            
            while(st.size()!=0 && st.top()<=a[i]){
                st.pop();
            }
            
            if(st.size() == 0){ 
                ans[i]=-1;
            }
            else{
                ans[i]=st.top();
            }
            st.push(a[i]);
        }
        return ans;
    }

int main(){
    vector<int> a={1,2,3,4,5,6};
    vector<int> res=nextGreater(a);

    for(int el:res) cout<<el<<" ";
    return 0;
}

