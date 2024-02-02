#include <iostream>
#include <array>
using namespace std;

class Square 
{
    public:
    int side;
    string name;
    // Constructor
    Square(double vlaue) : Square(1.3, "name") {
        // side = value 
        //square:: Square ( value, "Square1");
        } ;
    // Constructor
    Square(double vlaue, string name) {
        side = value 
        this->name= name;
        
    } 
    void getArea(){
            double area = side*side;
            cout << "The area of the square is " << area << endl;
     }


};
// Main function to test class methods
int main (){
    Square s = Square ();
    s.getArea();
}