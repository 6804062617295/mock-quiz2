#include <iostream>
using namespace std;
int countDivisible(int A[], int B[], int length);
int main() {
    int length;
    cin >> length;
    int A[length], B[length];
    for (int i = 0; i < length; i++) {
        cin >> A[i];
    }
    for (int i = 0; i < length; i++) {
        cin >> B[i];
    }
    int count = countDivisible(A, B, length);
    int arr[1000];
    int index = 0;
    for (int i = 0; i < length; i++){
        if (B[i] != 0 && A[i] % B[i] == 0){
            arr[index] = i + 1;
            index++;
        }
    }
    cout << count << endl;
    for (int i = 0; i < count; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
int countDivisible(int A[], int B[], int length){
    int count = 0;
    for (int i = 0; i < length; i++){
        if (B[i] != 0 && A[i] % B[i] == 0){
            count++;
        }
    }
        return count;
}