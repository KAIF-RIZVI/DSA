#include<iostream>
using namespace std;

void rec(){
    rec();   // infinite recursion
}

int main(){
    rec();
    
    return 0;
}

