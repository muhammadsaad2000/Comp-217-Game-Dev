# include <iostream> 
# include <string>

using namespace std; 

int main()
{
    bool isstudent = true;
    bool isgraduated = true;
    if(isstudent && isgraduated){
        cout << "Enrolled in the college" << endl;
    }
    else if(isgraduated &&!isstudent){
        cout << "You are not a student in the college and graudted ";
    }
    else if(isstudent &&!isgraduated){
        cout << "You are not a student in the college and not graudted ";
    }
    else if (!isgraduated &&isstudent){
        cout << "You are a student in the college and not graudted ";
    }
    else{
        cout << "Not enrolled in the college" << endl;
    }

    return 0;
}


