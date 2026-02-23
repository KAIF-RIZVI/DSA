// code to  get minimum element of an array
#include<iostream>
#include <climits>
using namespace std;
int main(){
   const int size=10;
   int testing[size];
   int array_min=INT_MAX;//infinity
   
   //input array
   cout<<"Enter the Elements of an array(10):";
     for(int i=0;i<size;i++){
     cin>>testing[i];
    }

   //logic  to get minimum element of an array
   for(int i=0;i<size;i++){
        if(array_min>testing[i]){
            array_min=testing[i];
        }
   }
   //  giving Minimum umelement of an array
   cout<<"The Minimun element of an  array:"<<array_min<<endl;
   return 0;
}

// OR

// code to  get minimum element of an array
// #include<iostream>
// using namespace std;
// int main(){
//    const int size=5;
//    int testing[size];
//    int array_min;//significance
   
//    //input array
//    cout<<"Enter the Elements of an array(10):";
//      for(int i=0;i<size;i++){
//      cin>>testing[i];
//    }

//    //logic  to get minimum element of an array
//    for(int i=0;i<size;i++){
//         if(i==0){
//         array_min=testing[0];
//         }
//         if(array_min>testing[i]){
//             array_min=testing[i];
//         }
//    }
//    //  giving Minim umelement of an array
//    cout<<"The Minimun elements of an  array:"<<array_min<<endl;
//    return 0;
// }