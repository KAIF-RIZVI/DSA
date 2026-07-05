#include<iostream>
#include<vector>
using namespace std;

int soe(int n){
    if(n<2){
        return 0;
    }

    vector<bool> v(n ,true); //<<less than n rang
    for(int i=2; i<n;i++){
        if(v[i]){
            for(int j=2*i;j<n;j+=i){
                v[j]=false;
            }
        }
    }

    int count=0;
    for(int i=0;i<n;i++){
        if(v[i])
        {count++;}
    }
    return count;
}

int main(){
    int n;
    cin>>n;
    int count = soe(n);
    cout<<count-2<<endl;
    return 0;
}

//sieve_of_eratosthenes for count prime efficient