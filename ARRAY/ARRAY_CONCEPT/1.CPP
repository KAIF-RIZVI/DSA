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
    for(int i=0;i<5;i++){
        cout<<testing[i]<<endl;
    }    
return 0;
}
// #include<iostream>
// using namespace std;
// int main(){
//    int testing[5];
//    int  size_of_array=sizeof(testing)/sizeof(testing[0]);  // calculating the size of an array using size fn(size fn calculates the  size in bytes) 
//    cout<<size_of_array;

// return 0;
// }