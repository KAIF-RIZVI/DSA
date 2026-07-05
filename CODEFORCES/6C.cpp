#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;

    vector<int> c(n);
    for(int i=0; i<n; i++){
        cin>>c[i];
    }

    int i=0, j=n-1,s1=0,s2=0, c1=0,c2=0;
    while(i<=j){
        if(s1<=s2){
            s1+=c[i];
            i++;
            c1++;
        }     
        else if(s1>s2){
            s2+=c[j];
            j--;
            c2++;
        }
    }
    cout<< c1<<"\t"<<c2;
    return 0;
}