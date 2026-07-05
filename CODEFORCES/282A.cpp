#include<iostream>
#include<string>
using namespace std;

int main(){
   string instr;
   int n_instr, ans=0;
   cin>>n_instr;
   cout<<endl;

    for(int i=0;i<n_instr;i++){
       cin>>instr;
       if(instr == "X++") 
       {ans++;}
       else if(instr == "++X") 
       {++ans;}
       else if(instr == "X--") 
       {ans--;}
       else if(instr == "--X")
       {--ans;}
       else{
        break;
       } 
       cout<<endl;
    }
    cout<<ans;
    return 0;
}