#include <iostream>
using namespace std;
int fib(int n) {
    if (n == 0) return 0;
    if (n == 1 || n == 2) return 1;
    return fib(n - 1) + fib(n - 2);
}
int main() {
    int n; cout << "n = ";  cin >> n;
    int i = 0;
    while (i < n) {
        cout << fib(i) << " ";
        i++;
    }
    return 0;
}