#include<iostream> 
#include<string>
using namespace std;

class TEACHER {

 private:
 double salary=50000;

 public:
  string  name;
  string dept;
  string subject;

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
};



int main(){
    TEACHER t1;
    t1.name="shanawaz";
    t1.dept="CSE";
    t1.subject="DBMS";
    t1.set_salary(62500);
    cout<<t1.name<<endl;
    cout<<t1.get_salary();

    return 0;

}