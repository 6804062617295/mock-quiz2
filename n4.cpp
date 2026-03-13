#include <iostream>
using namespace std;
long int fn(int n){
    if(n == 1)
        return 2;
    else
        return 3*fn(n-1) - 1;
}
int main() {
    int n;
    cin >> n;
    if(n < 1 || n > 20)
        return 0;
    long int aws = fn(n);
    cout << aws << endl;
    return 0;
}