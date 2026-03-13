#include <iostream>
using namespace std;
bool check(string str){
    if (str.length() != 7)
        return false;
    if (str[0] != '#')
        return false;
    for (int i = 1; i < str.length(); i++){
        if (!((str[i] >= '0' && str[i] <= '9') || (str[i] >= 'A' && str[i] <= 'F') || (str[i] >= 'a' && str[i] <= 'f') )){
            return false;
        }
    }
    return true;
}
bool atlest(string str){
    for (int i = 1; i < str.length(); i++){
        if ((str[i] >= 'a' && str[i] <= 'f' ) || (str[i] >= 'A' && str[i] <= 'F') ){
            return true;
        }
    }
    return false;
}
int main(){
    string str[1000];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> str[i];
    }
    for (int i = 0; i < n; i++){
        if (check(str[i]) && atlest(str[i])){
            cout << str[i] << endl;
        }
    }
    return 0;
}