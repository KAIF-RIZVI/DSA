#include<iostream>
using namespace std;

class Complex{
    public :
    int real;
    int img;
    

    Complex(int real , int img){
        this->real=real;
        this->img=img;
    }

    Complex operator +(Complex c){
        Complex temp(c.real,c.img);
        temp.real=real+c.real;
        temp.img=img+c.img;
        return temp;
    }
};

int main(){
    Complex c1(3,7);
    Complex c2(1,2);

    Complex c3=c1 + c2;

    cout<<c3.real <<"\t";
    cout<<c3.img;


    

    // int a;
    // int b;
    // int c= a+b;


    return 0;
}