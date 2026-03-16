#include<iostream>
using namespace std;

int main() {
    int arr[10] = {10 , 20 ,30 , 40};
    int n = 4;
    int pos = 2;
    int value = 25;

    for(int i = n - 1 ; i >= pos ; i--){
        arr[i + 1] = arr[i];
    }

    arr[pos] = value;
    n++;

    for(int i = 0 ; i < n ; i++){
        cout << arr[i] << " ";
    }
}