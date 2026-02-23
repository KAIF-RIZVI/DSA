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
    
  }

  double get_salary(){
    return salary;
  }

  void set_salary(double new_salary){
     salary=new_salary;
  }

     Teacher(string s){
        name=s;
        
     }

    ~Teacher(){
       cout<<"i am destruction";
    //    delete cgpaptr;
    }
};



class Student{
    public:

    string name;
    double cgpa;
    double* cgpaptr;
    
  
    
    void getInfo(){
        cout<<"NAME :  "<<name<<endl;
        cout<<"cgpa :  "<<*cgpaptr<<endl;
    }

     Student(string name, double cgpa){
        this->name = name;
         this->cgpa = cgpa;   
        cgpaptr =new double;
        *cgpaptr = cgpa;
    }


    ~Student(){
        cout<<"i am inevitable";
        delete cgpaptr;
    }
};



int main(){
    Teacher t1("kaif");
    Student s1("temp",9);
    cout<<s1.cgpa;
    return 0;

}