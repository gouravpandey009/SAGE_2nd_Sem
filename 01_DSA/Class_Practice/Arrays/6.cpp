#include<iostream>
using namespace std;

//updating elements

void multiplyElements(int arr[] , int size , int factor)
{
    for(int i = 0 ; i < size ; i++){
 arr[i] *= factor; // updating by index within a function   
    }
   


}


int main() {
    int numbers[5] = {10 , 20  , 30 , 40 , 50};

    numbers[2] = 100;

    int newVal;
    cout << "Enter a new value for the first element: ";
    cin >> newVal;
    numbers[0] = newVal;

    multiplyElements(numbers , 5 , 2);
    for(int i = 0 ; i < 5 ;i++){
        cout << numbers[i] << " ";
    }

    return 0;
}