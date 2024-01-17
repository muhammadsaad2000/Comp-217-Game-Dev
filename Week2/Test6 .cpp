# include <iostream> 
# include <string>

using namespace std; 

int main()
{
    int num1, num2;
    cout<< "please enter number 1";
    cin>>num1;
    cout<< "please enter number 2";
    cin>>num2;
    if (num1>num2){
        cout<<num1<<" is greater than "<<num2;
    }
    else (num1<num2){
     cout << num2 << " is greater than "<<num1;
    }
    else if(num1 == num2){
        cout<<num1<<" is equal to "<<num2;
    }
    return 0;
    }


