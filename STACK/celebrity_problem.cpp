#include<iostream>
#include<stack>
#include<vector>
using namespace std;

class sol{
public:
int celeb(vector<vector<int>> &a){

    // assume person know themselve so a[i][i] is always 1
    stack<int> st;
    int n=a.size();
    for(int i=0; i<n;i++) st.push(i);

    while(st.size()!=1){
        int k1=st.top();
        st.pop();
        int k2=st.top();
        st.pop();

        if(a[k1][k2]==0) st.push(k1);
        else st.push(k2);
    }

    for(int i=0; i<n; i++){
        if(st.top() !=i)
        {
            if(a[st.top()][i] != 0 || a[i][st.top()]!=1)
        {
            return -1;
        }
    }
    }

    return st.top();

    
}
};

int main(){
    vector<vector<int>> v ={
    {1,1,1,0},
    {0,1,1,0},
    {0,0,1,0},
    {0,1,1,1}
    };

    sol s;
    int ans=s.celeb(v);
    cout<< "CELEBRITY:"<<ans<<endl;
    return 0;
}