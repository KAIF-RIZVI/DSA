// reversing an array (without using 2nd array) 
#include<iostream>
using namespace std;
int main(){
    const int size=7;
    int a[size];  //declare an array
    int i,j; //taking 2 pointers for reverse logic of an array

    //taking input array
    cout<<"Enter the Elements of an array:"<<endl;
    for(i=0;i<size;i++){
        cin>>a[i];
    }
    //reverse logic 
    i=0;
    j=size-1;
    while(i<j){
        swap(a[i],a[j]);
        i++;
        j--;
    }
// printing reverse array
    cout<<endl<<"REVERSE ARRAY:";
    for(i=0;i<size;i++){
      cout<< a[i] <<"\t";
}

    return 0;
}