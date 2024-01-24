// calculate the produt of all the elemts inside an array secept self and result => arr
// arr + { 1,2,3=> {6,3, 2}}

# include <iostream> 
# include <array>
using namespace std;

int main(){
    array<int, 3> arr1 ={ 1,2,3};
    int sum=0;
    for(int i : arr1)
    sum+=i;
    array<int, 3> arr={sum-arr1[0]-
    arr1[2],arr1[0],sum-arr1[1]-arr1[0]};
    cout<<"The product is: ";
    for (int i : arr) {   //for const iterating
    cout << i << " ";          //printing each element
    }
    return 0;

}

