void print(int n){
    if(n == 0) return //base case;

    print(n - 1); // recursive call (wait command)
    cout << n << " "; // actions (happens AFTER returning)
}