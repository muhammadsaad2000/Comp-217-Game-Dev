// // ifstream => read file (if only if u are reading file)
// //ofstream =>write (if only if ua re writing file)
// //fstream allows you to do both, read and write( use if u are doing both)

// #include <iostream>
// #include <fstream>
// #include <cstring>
// using namespace std;

// //file handler create and edit file
// int main(){
// char stream(20);
// strcpy(stream, "hellow i am harry");
// fstream file;
// file.open("week5.txt", ios::in | ios::out| ios::trunc | ios::binary); trunc will create the file, if file is there it will erase older data.
// //fstream file ("week5.txt", ios::in | ios::out| ios::app);
// cout<<file.tellg() <<endl;  //0
// cout<<file.tellp()  <<endl;   //-1
// if (!file.is_open()){
//     cout << "File is not open"<<endl;
// }

// else {
//     // // //cout << "File is opened"<< endl;
//     // // file <<"Hello World!"<<endl;
//     // // file<<"my name is harry"<<endl;
//     // // file << "bye bye "<< endl ;
//     // file.seekg(0);
//     // string i ;
//     // getline(file , i);
//     // while(file.good) {
//     //     getline (file, i );
//     //     cout <<i<<endl;
//     // }

//     for (int i = 0;i< strlen(stream);i++){
//         file.put(stream[i];)
// }

// char j; 
// file.seekkg(0);
// while(file.good) {
//         getline (file, j);
//         cout <<j<<endl;
//     }

// file.close();
// return 0;
// }}

#include <iostream>
#include <ofstream>
#include <ifstream>
using namespace std;

int main(){
    string i;
    getline(cin , i); // prints complete line and sets it to i
    cout<<i;


    ofstream file("name.ytxt", ios::out, ios::trunc); 
    ifstream file ("name2.txt", ios::in);
    return 0;
}