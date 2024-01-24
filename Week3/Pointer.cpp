# include <iostream> 
# include <array>
using namespace std;

int main() {
   // int arr1[5] = {1,2,3,4,5};



//class template array 
    array<int, 5> arr1= {1,2,3,4,5};

    for (int i = 0; i<arr1.size();i++){
        cout<< arr1[i]<< endl;
    }

   // range for  
    for (int i : arr1)
        cout << i << endl;

    int ar_size = 4;
    array <int , ar-size> arr2 ;
    for (int i = 0; i<ar_size;i++){
        arr2[i] = i;
    }
    // will fill the whole array with 4
    fill (arr1.begin(), arr1.end(), 4);


    arr1.front();// return the front value of the array 
    arr1.back(); // return the back value of the array 
    arr1.[2];// return the second value of the array
    arr1.at(2);// return the second value of the array
    arr1.max_size():// return the size of the array 
    arr1.size(); // return the size of the array 
    arr1.empty(); // will check if it's empty, if  filled return true if nothing is in it false.


    for (int i = 0; i<arr1.size();i++){
        cout<< arr1[i]<< endl;

    return 0;

}

