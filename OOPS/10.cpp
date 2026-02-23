#include<iostream>
using namespace std;

void fn(){
   static int x=0;
    cout<<x<<endl;
    x++;
}
11
int main(){
    fn();
    fn();
    fn();
    return 0;
}

