// BASICS FOR I/O in an array using loops
#include<iostream>
using namespace std;
int main(){
    int a=5;
    int testing[a];   // declare an array     static
    cout<<"Enter the elements of an array(5):"<<endl;   // taking inputs 
    for(int i=0;i<5;i++){
        cin>>testing[i];
    }    
    cout<<"NOW the elements of an array:"<<endl;       // showing outputs
    for(int i: testing){
        cout<<i<<endl;
    }    
return 0;
}