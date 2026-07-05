#include<iostream>
#include<string.h>
using namespace std;


int main(){
    int cases;
    string value;

    cin>>cases;
    cout<<endl;
    for(int i=0;i<cases;i++){
        cin>>value;
        cout<<endl;
        int s=value.size();
        if(s<=10){
            cout<<value<<endl;
            continue;
        }
        cout<<value[0]<<s-2<<value[s-1]<<endl;
        
    }
    return 0;
}