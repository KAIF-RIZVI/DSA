#include<iostream>
#include<string>
using namespace std;

class A{
public:
    int a;
    int b;

    int cal(int a,int b){
        return a+b;
    }

    virtual void hello(){
        cout<<"hello from parent";
    }


};

class B : public A{
    public:
   float cal(float a, float b){
        return a*b;
    }

    void hello(){
        cout<<"hello from child";
    }

};



int main(){

B o1;
A o2;

cout<< o2.cal(2,3);
cout<< o1.cal(2.1,3);

o2.hello();
o1.hello();


    return 0;
}


