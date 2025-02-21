#include<iostream>
#include<string>

using namespace std;

class teacher{
    //properties/  attributes
    private:
    double salary;

    public:
    //non-peramerericed constractor..
    teacher(){
        dept = "Computer Science and Engennering";
    }
    string name;
    string dept;
    string subject;

    //methods/ member functions
    void changeDept(string newDept){
        dept = newDept;
    }
    
    //setter function
    void setSalary(double s){
        salary = s;
    }

    //gertter function
    double getSalary(){
        return salary;
    }

};

int main() {
    teacher t1;
    t1.name = "Shakil";
    t1.subject = "oop-c++";
    t1.setSalary(25000);

    cout<< t1.name << endl << t1.subject << endl << t1.dept << endl << t1.getSalary() << endl;
 
    return 0;
}