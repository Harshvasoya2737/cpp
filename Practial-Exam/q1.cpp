#include<iostream>
using namespace std;

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int n;
    cout << "Enter the number for factorial series: ";
    cin >> n;

   
    for (int i = 0; i <= n; i++) {
        cout << "Factorial Series "<< i <<" is ";
        cout << factorial(i) << " "<<endl;
    }

    return 0;
}
