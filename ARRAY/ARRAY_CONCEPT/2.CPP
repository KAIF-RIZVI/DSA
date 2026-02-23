// array follows passs by reference
#include<iostream>
using namespace std;
void change_array(int testing[],int size);
int main(){
    const int a=5;
    int testing[a];   // declare an array     static
    int size= sizeof(testing)/sizeof(testing[0]);
    cout<<"Enter the elements of an array(5):"<<endl;   // taking inputs 
    for(int i=0;i<size;i++){
        cin>>testing[i];
    }   

    cout<<"NOW the elements of an array:"<<endl;       // showing outputs
    for(int i=0;i<size;i++){
        cout<<testing[i]<<"\t";
    }  
     cout<<endl;
    
     change_array(testing,size);
     
   cout<<"NOW the elements of an array:"<<endl;       // showing outputs
    for(int i=0;i<5;i++){
        cout<<testing[i]<<"\t";
    }    

return 0;
}
void change_array(int testing[],int size){
    for(int i=0;i<size;i++){
        testing[i]=2*testing[i];
    }
}
