#include <iostream>
using namespace std;

//function to calculate factorial
int fact(int n){
    if(n == 1) {
        return 1;
    }

    return n * fact(n - 1);
}

int main() {
    int n = 5;

    cout << "calculating " <<n << "!..." << endl;

    int result = fact(n);

    cout << "The answer is: " << result << endl;
}