#include <iostream>
using namespace std;

int main() {
    int array[100], size, sum = 0;
    cout << "Enter size: ";
    cin >> size;

    cout << "Enter elements: ";
    for (int i = 0; i < size; i++) {
        cin >> array[i];
        sum += array[i];
    }

    cout << "Sum = " << sum;
    return 0;
}
