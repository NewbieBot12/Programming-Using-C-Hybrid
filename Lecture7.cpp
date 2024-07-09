#include <iostream>
using namespace std;
int main() {

    int a[5];            
    a[0] = 72;
    a[1] = 12;
    a[2] = 52;
    a[3] = 42;
    a[4] = 42;

    cout << "Array elements: ";
    for (int i = 0; i < 5; i++) {
        cout << a[i] << " "; 
    }
    return 0;
}
