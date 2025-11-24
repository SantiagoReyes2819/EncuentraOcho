#include <iostream>
using namespace std;

int main() {
    int n, x;
    cin >> n;
    int hay;
    for (int i = 0; i < n; i++) {
        cin >> x;
        if (x == 8) {
            cout<<"1";
            return 0;
        }
    }
    cout << "0";
    return 0;
}
