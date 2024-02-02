#include <iostream>
using namespace std;
//cin cout clog cerror
// cout<<100
// fstream sstream iomanip iostream (focus in this class iomain iso stream) 
int main() {
    //set flags
    cout.setf(ios::showpos); // shows postive sign infornt of the number
    cout<<100<<endl;
    cout<<-5<<endl;
    cout.unsetf(ios::showpos); // removes the postive sign in fornt of the numbers
    cout<<100<<endl;

    cout.setf(ios::showpoint); // shows 00 in the output
    cout<<100.9000<<endl;
    cout<<100<<endl;

    cout.precision(8); //shows how many chatcers you need after a .
    cout<<123.56789<<endl;

    //dec-> digit, oct-> 0digit ,hec-> 0xdigit and showbase flag
    cout.setf(ios::showbase); // shows the x base or 1 0 infront  of hexadecimal numbers
    cout<<100<<endl;
    cout<<hex<<100<<endl; // converts the 100 to a heaadecimal form
    cout<<hexfloat<<13.23423432<<endl;// flo2at values for hexa
    cout<<oct<<100<<endl;
    cout<<dec<<100<<endl;

    //boolapha enter bool vlaues and output as true or false 
    bool a;
    cin.setf(ios::boolalpha);
    cin>> a;
    cout<<boolalpha<<a;




}   