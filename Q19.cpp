#include <iostream>
using namespace std;

int main() {
    float array[100], key;
    int size;

    cout << "Enter size: ";
    cin >> size;

    cout << "Enter sorted floating-point numbers: ";
    for (int i = 0; i < size; i++)
        cin >> array[i];

    cout << "Enter number to search: ";
    cin >> key;

    int low = 0, high = size - 1;

    while (low <= high) {
        int middle = low + (high - low) / 2;

        if (array[middle] == key) {
            cout << "Element found at position " << middle + 1;
            return 0;
        }

        if (array[middle] < key)
            low = middle + 1;
        else
            high = middle - 1;
    }

    cout << "Element not found";
    return 0;
}
