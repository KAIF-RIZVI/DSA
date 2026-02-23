#include<iostream>
#include<string>
using namespace std;

class Person{
public:
    string name;
    int age;

};

class Student :  public Person{
    public:
    int rollno;

    void getInfo(){
        cout <<"name : "<<name<<endl;
        cout <<"age : "<<age<<endl;
        cout <<"rollno : "<<rollno<<endl;
    }
};


class Player : public Student{
    public:
    int score;
    int  scoreing(){
    return score;
}
 

};

int main(){
    Player p1;
    p1.name="ka";
    p1.score = 2;
    p1.getInfo();
    cout<< p1.scoreing();

    return 0;
}