#include <iostream>
#include <array>
using namespace std;

class ArrayClass 
{
    private :
    //pointer p
    int*p;
    int size;
    public:
    ArrayClass(){
        size = 5;
        p = new int [size];
    }
    //desctroctors
   ~ArrayClass(){
        delete [] p;
        myarray = Null
    }
    



};
// Main function to test class methods
int main (){
    
}