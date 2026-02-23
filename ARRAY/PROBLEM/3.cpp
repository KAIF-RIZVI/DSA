// index of minimum elements of an array
#include<iostream>
#include<climits>           // add this so the code became portable other than on specific compiler
using namespace std;
int main(){
    const int size=5;
    int  array[size];
    int array_min=INT_MAX,i,index_min;
    cout<<"ENTER THE ELEMENTS OF AN ARRAY(UPT0 5):"<<endl;
    for(i=0;i<size;i++){
        cin>>array[i];
    }
    for(i=0;i<size;i++){
        if(array_min>array[i]){
            array_min=array[i];
            index_min=i;
        }
    }
    
    cout<<"THE minimum element of an array is "<<array_min<<" at array index "<<index_min<<endl;
    return 0;
}

