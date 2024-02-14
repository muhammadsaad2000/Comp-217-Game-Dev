// templaes, collection 
#include <iostream>
//vectors
#include <vector>
using namespace std;

// int area(int a, int b){
//     reutn a*b;
// }
// //  template function can be used to calculate the area of any type of rectangle.
// double area(double a, double b){
//     reutn a*b;
// }

// template <typename T> T area (T a, T b){
//     return a * b ;

// }

// int main (){
    

//    int i =  area<int>(1,2);
//    double j = area <double> (1.3,3.4);
//    cout << "The Area of integer Rectangle is :"<<i<<endl;
//    cout << "The Area of Double Rectangle is :"<<j<<endl;
//     return 0;


// }

//vectors
int main(){
    vector<int> v = {1,3,4,9,100,55,6};

    //iterator
    auto it = v.begin() +4 ; //  points to element at index 4
    cout << "Fifth element in Vector: "<< *it << endl;
    cout<<it-v.begin()<<endl; // gives us the position of fifth element from beginning
    it = v.insert(it, 100);
    cout << "After Inserting Element at Fifth Position:"<<*it<< endl;
    cout<<it-v.begin()<<endl;


    // //size = 6
    // //capasity = 6 will awlsy double if u add stuff to the end of the array
    // //maxsize = large num
    // cout<<v.size()<<v.capacity()<<endl;
   
    // v.push_back(23);
    // //size = 7
    // //capasity = 12 will awlsy double if u add stuff to the end of the array
    // //maxsize = large num

    // // v[0]; // accessing element by index
    // // v.at(5); // access elements in vectors
    // // v.pop_back(); // give u last element  and remove it from the vector
    // // v.insert(2,34); //  give u the position and the element u want to insert at that postion
    // // v.empty(); //  check whether the vector is empty or not
    // // v.front(); //   gives u the first element of the vector
    // // v.back; //  gives u the last element of the vector
    // // v.shrink_to_fit();//  reduce memory usage when we have less than capacity

    
    // // v.begin();//  gives u first elemnt of the vector
    // // v.rbegin(); // gives u reverse iterator starts from the last element
    // // v.rend(); //  gives u reverse iterator ends with the first element
    // // v.end(); //  gives u the last element +1

    // cout<<*v.begin()<<endl;
    // cout<<*v.rbegin()<<endl;
    // cout<<*v.rend()<<endl;
    // cout<<*v.end()<<endl;
    // cout<<v.size()<<v.capacity()<<endl;
    // v.pop_back();
    // cout<<v.size()<<v.capacity()<<endl;
    // cout<<v[6] <<v.at(6);
    

}