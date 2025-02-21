#include<iostream>
#include<string>

using namespace std;


    class box{
        public:
        double lenth, hight, width;
        double calculate_area(){
            double area = lenth*hight*width;
            return area;
        }
    };

    int main(){
        box box1;
        box1.lenth = 10;
        box1.hight = 16;
        box1.width = 25;
        cout << "the voluem of box1 : ";
        cout<< box1.calculate_area() << endl;

        return 0; 
    }

    
