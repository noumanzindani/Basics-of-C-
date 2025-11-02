#include <iostream>
using namespace std;

// --- Call by Value ---
void byValue(int x) {
    x = 50;  // only a copy changes
    cout << "Inside byValue: x = " << x << endl;
}

// --- Call by Reference ---
void byReference(int &x) {
    x = 100; // changes original variable
    cout << "Inside byReference: x = " << x << endl;
}

// --- Call by Pointer ---
void byPointer(int *x) {
    *x = 150; // changes original using pointer
    cout << "Inside byPointer: *x = " << *x << endl;
}

int main() {
    int num = 10;

    cout << "Original num = " << num << endl;

    byValue(num);
    cout << "After byValue call: num = " << num << endl;

    byReference(num);
    cout << "After byReference call: num = " << num << endl;

    byPointer(&num);
    cout << "After byPointer call: num = " << num << endl;

    return 0;
}
