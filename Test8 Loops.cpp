# include <iostream> 
# include <string>

using namespace std; 
// while 
int main()
{
  int secret = 10 ; 
  bool won = false;

while (!won){
  int guess;
  cout << "guess a number between 1 and 10" << endl;
  cin >> guess;
  if (guess == secret){
    cout << "you won" << endl;
    won = true;
  }
  else if (guess > secret){
    cout << "too high" << endl;
  }
  else if (guess < secret){
    cout << "too low" << endl;
  }
}
   return 0;
   }

// for loops
int main()
{
  int number [6]= {1,5,7,8,9,12};
  for ( i = 0; i < 6; i++){
    cout << number[i] << endl;
  }

   return 0;
   }

