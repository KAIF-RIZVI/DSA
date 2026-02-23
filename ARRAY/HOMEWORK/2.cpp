#include<iostream>//swap max and min elements of an array
using namespace std;
int main(){
   const int size=7;
   int testing[size];
   
   //input array
   cout<<"Enter the Elements of an array(7):";
     for(int i=0;i<size;i++){
     cin>>testing[i];
   }

   int array_max=testing[0];
   int array_min=testing[0];
   int max_ind=0,min_ind=0;

   //logic  to get minimum element of an array
   for(int i=0;i<size;i++){
        if(array_max<testing[i]){
            array_max=testing[i];
            max_ind=i;
        }
   }
   //logic  to get minimun element of an array
   for(int i=0;i<size;i++){
        if(array_min>testing[i]){
            array_min=testing[i];
            min_ind=i;
        }
   }

   //display original array
   for(int i=0;i<size;i++){
    cout<<testing[i]<<"\t";
   }
    
   swap(testing[max_ind],testing[min_ind]);cout<<endl;

   //  giving Minimum and maximun umelement of an array
   cout<<"The Maximum elements of an  array:"<<array_max<<endl;
   cout<<"The Minimun elements of an  array:"<<array_min<<endl;
  
   //display final array
   for(int i=0;i<size;i++){
    cout<<testing[i]<<"\t";
   }
    
   
   return 0;
}
