#include <iostream> 
using namespace std;

int getSum(int n){
    //base case
    if(n == 1) {
        return 1;
    }

    int total = n + getSum(n - 1);

    return total;
}

int main(){
    cout << "Sum of 1 to 5 is" << getSum(5);
    return 0;
}