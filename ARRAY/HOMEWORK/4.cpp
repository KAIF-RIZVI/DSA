#include<iostream>   //printing the intersection of 2 array
using namespace std;
int main(){
   const int size_a=7;
   const int size_b=5;
   int a[size_a];
   int b[size_b];
   const int m=max(size_a,size_b);
   int temp[m],i,j,k;
   
   //input array a[]
   cout<<"Enter the Elements of an array(7):";
     for(int i=0;i<size_a;i++){
     cin>>a[i];
   }
   //input array b[]
   cout<<"Enter the Elements of an array(5):";
     for(int i=0;i<size_b;i++){
     cin>>b[i];
   }

   //logic part
   //taking  commom elements in temp array
   k=0;
   for(i=0;i<size_a;i++)
    {
        for(int j=0;j<size_b;j++){
             if(a[i]==b[j]){
                temp[k]=a[i];
                k++;
             }
        }
    }


    //remove duplicacy
    if(k!=0){
    cout<<"INTERSECTION:"<<endl;
    for(i=0;i<k;i++){
        int flag=0;
        for(j=0;j<i;j++)
        {   
            if(temp[i]==temp[j]){
                flag++;
                break;
            }
        }
        if(flag==0){
           cout<<temp[i]<<"\t";
        }
    }
}
else{
    cout<<"INTERSECTION:NULL"<<endl;
}
return 0;
}
