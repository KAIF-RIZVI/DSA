#include<iostream> 
#include<string>
using namespace std;

class Teacher {
 private:
 double salary=50000;

 public:
  string  name;
  string  dept;
  string  subject;

  void change_dept(string new_dept){
    dept=new_dept;
    salary;
  }

  double get_salary(){
    return salary;
  }

  void set_salary(double new_salary){
     salary=new_salary;
  }

    Teacher(double salary,string dept){
    this->salary = salary;  // using this pointer in c++
    this->dept=dept;
    }

    Teacher(Teacher &object){
        dept=object.dept;

    }

    ~Teacher(){
       
    }
};



class Student{
    public:
    string name;
    double cgpa;
    double* cgpaptr;
  
    
    void getInfo(){
        cout<<"NAME :  "<<name<<endl;
        cout<<"cgpa :  "<<*scgpaptr<<endl;
    }

     Student(string name, double cgpa){
        this->name = name;
        cgpaptr =new double;
        *cgpaptr = cgpa;
    }

};


int main(){
    // Teacher t1(2,"cse");
    // t1.name="k";
    // Teacher t2(t1);
    // cout<<t2.subject;
    // cout<<t2.dept;
    // cout<<t2.name;

    Student s1("kaif",9);
    s1.getInfo();

    Student s2(s1);
    s2.getInfo();
    return 0;
}