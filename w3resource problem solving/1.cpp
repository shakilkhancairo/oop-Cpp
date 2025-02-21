#include<iostream>
#include<string>
using namespace std;

class circle{
    private:
    double radius;
    public:
    void setradius(double r){
        this->radius = r;
    }
    double Calculate_area(){
        double area = 3.1416*radius*radius;
        return area;
    }
    double Calbulate_circumference(){
        double circumference = 2 * 3.1416 * radius;
        return circumference;
    }
};

int main(){
    circle one;
    one.setradius(25);
    cout<< "\n\nThe area of circle is " << one.Calculate_area() << endl;
    cout<< "The circumference of circle is "<< one.Calbulate_circumference() << endl << endl;

    return 0;
}