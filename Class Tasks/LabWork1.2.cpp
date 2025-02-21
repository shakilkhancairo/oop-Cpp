#include<iostream>
#include<string>
using namespace std;

class box{
    public:
    double lenth, hight, width;
    double calculate_area();
};

double box::calculate_area(){
    double area = lenth*hight*width;
    return area;
}

int main(){
    box b1;

    b1.hight = 38;
    b1.lenth = 37;
    b1.width = 12;
    cout << "\nThe volume of the box is : " << b1.calculate_area() << endl;

    return 0;
}