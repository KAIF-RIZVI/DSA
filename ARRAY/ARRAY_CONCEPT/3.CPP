// Linear Search
#include<iostream>
using namespace std;
int main(){
    int a[]={12,23,566,899,445,4453,78};
    int target=78,index=-1;

    for(int i=0;i<7;i++){
        if(target==a[i]){
            index=i;
            break;
        }
    }
    if(index==-1)
    cout<<"Not present";
    else
    cout<<"present"<<index;
return 0;
}