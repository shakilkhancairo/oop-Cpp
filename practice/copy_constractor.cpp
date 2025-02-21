#include<iostream>
#include<string>

using namespace std;

class teacher{
    //properties/  attributes
    private:
    double salary;

    public:
    string name;
    string dept;
    string subject;

    //perametericed constractor..
    //Using this pointer..
    teacher(string name, string dept, string subject, double salary){
        this->name = name;
        this->dept = dept;
        this->subject = subject;
        this->salary =salary;
    }

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
    void getInfo() {
        cout << "name : " << name << endl;
        cout << "subject : " << subject << endl;
        cout << "Deperment : " << dept << endl;
        cout << "salary : " << salary << endl;
    }
    void rohan();

};

void teacher::rohan(){
 cout<<"hi i am rohan\n";
 
}


int main() {
    teacher t1("shakil", "computer science", "c++", 25000);
    t1.getInfo();
    t1.rohan();

    return 0;
}