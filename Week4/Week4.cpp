#include <iostream>
#include <array>
using namespace std;

//protected class  for internal use only
class A 
{
    protected :
    void printsomething(){
        cout << "Hello World" << endl;
    }
};

class B : public A{
    public:
    void printsomethingB(){
     A :: printsomething();
    }
};


int main() {

    A a = A();
    B b = B();
    
    // Accessing the method of class A from class B 
    b.printsomethingB();
}