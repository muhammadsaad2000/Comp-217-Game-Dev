# include <iostream> 
# include <string>

using namespace std; 

void greet(string, int ); 

int main()
{
    greet( "harry", 40);
    return 0;
}
void greet ( string name, int age ){

   cout<< "Good Evening" << name << "Your age is: " << age;


}


