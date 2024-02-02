#include <iostream>
#include <array>
using namespace std;

// class demoClass{
//     public:
//     void say () {
//         cout << "demo function !";
//     }
    

// };
// class A: public demoClass{
// public :
//     void say () {
//         cout << "demo function A !";
//     }
// public :
// void say() {
//     cout << " this is a virtual funiction A";

// }
// void say1() {
//     cout << " this is a virtual funiction 1"; 
// }


// };

class Circle {
    public:
    static int  totalCircle;
    Circle(){
        totalCircles++;
    }
    static int  gettotalCircle(){
        return totalCircle;
    }

}
// Main function to test class methods
int main (){
    // Creating object of the base class
    // IA a = Ia;
    // C c = C();
    // c.say();
    Cricle ::  totalCircle=1;
    Cricle c = Circle();
    // c.gettotalCricles();
    cout << Cricle :: gettotalCircle();

    
}