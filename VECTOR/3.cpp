// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int n;
//     vector<int> dynamic_array;
//     cout<<"Enter the No. of Elements of an array:";
//     cin>>n;
//     cout<<"Enter the Elements of an array:";   //temp fix
//     for(int i=0;i<n;i++){
//         int k;
//         cin>>k;
//      dynamic_array.push_back(k);
//     }
//     cout<<"Now the Elements of an array:";
//     for(int i:dynamic_array){
//         cout<<i;
//     }
//     return 0;
// }
//}

#include<iostream>
#include<vector>   
using namespace std;
int main(){
    vector<int> v;
    v.push_back(3);
    v.push_back(2);
    v.push_back(6);

    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;////capacity concept


    return 0;
}