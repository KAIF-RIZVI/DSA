#include<iostream>
using namespace std;

int main(){
    int cases, f1, f2, f3 , ans=0;
    cin>>cases;
    cout<<endl;

    for(int i=0;i<cases;i++){
        cin>>f1>>f2>>f3;
        if((f1+f2+f3)>=2)
        ans++;
        cout<<endl;  
    }
    cout<<ans;

    return 0;
}

