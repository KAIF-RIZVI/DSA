//printing unique elements from array
//error due  to FLAG// VALID by deepsearch deepseek 
#include<iostream>
using namespace std;
int main(){
   const int size=7;
   int a[size],flag=0;
   
   //input array
   cout<<"Enter the Elements of an array(7):";
     for(int i=0;i<size;i++){
     cin>>a[i];
   }

   //logic part
   cout<<"unique elements are:";
   for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(a[i]==a[j]&&i!=j){
                flag++;
            }
        }
        if(flag>0){
           flag=0;
        }
        else{
            cout<<a[i]<<"\t";
        }
   }

   return 0;
}
