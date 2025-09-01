#include <iostream>
using namespace std;

// Template function to find the maximum of two values
template <typename T>
T getMax(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    cout << "Max of 10 and 20: " << getMax(10, 20) << endl;
    cout << "Max of 5.6 and 3.2: " << getMax(5.6, 3.2) << endl;
    cout << "Max of 'a' and 'z': " << getMax('a', 'z') << endl;
    return 0;
}
