#include<iostream>
#include<vector>    //STL
using namespace std;
int main(){
    vector <int> vec={5,6,7,8,9,3,2,4,5,6,7};

    for(int i:vec){     //using the for each loop
    cout<<i<<"\t";
    }
    cout<<endl;
    return 0;
}