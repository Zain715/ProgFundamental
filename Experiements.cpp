#include <iostream>

using namespace std;

 int main(){
    int num;
    cout << "Enter a number except zero \n";
    cin >> num;
    if (num > 0)
    {
        cout << "Positive number \n";
    }
    else{
        cout << "negative number \n"; 
    }
    return 0;
}