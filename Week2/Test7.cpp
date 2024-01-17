# include <iostream> 
# include <string>

using namespace std; 
// ask the user to input 1-7 and displau correspoding days of the weeks 1 = sunday 8 = idk
int main()
{
   int num ;
   cout <<"please enter a vlaue from 1 - 7" ; 
   cin >> num ;
   
   switch(num) {
     case 1:
       cout << "sunday" ;
       break;
     case 2:
       cout << "monday" ;
       break;
     case 3:
       cout << "tuesday" ;
       break;
     case 4:
       cout << "wednesday" ;
       break;
     case 5:
       cout << "thursday" ;
       break;
     case 6:
       cout << "friday" ;
       break;
     case 7:
       cout << "saturday" ;
       break;
     default:
       cout << "IDK" ;
       break;
   }

   return 0;

   
   
       }


