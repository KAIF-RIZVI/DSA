/* code to  get maximum element of an array*/
#include<iostream>
using namespace std;
int main(){
   const int size=10;
   int testing[size];
   
   //input array
   cout<<"Enter the Elements of an array(10):";
     for(int i=0;i<size;i++){
     cin>>testing[i];
   }

   int array_max=testing[0];

   //logic  to get minimum element of an array
   for(int i=0;i<size;i++){
        if(array_max<testing[i]){
            array_max=testing[i];
        }
   }
   //  giving Minim umelement of an array
   cout<<"The Minimun elements of an  array:"<<array_max<<endl;
   return 0;
}
