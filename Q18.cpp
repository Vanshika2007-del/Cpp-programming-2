#include <iostream>
using namespace std;

int main() {
    int array[100], size, key;

    cout << "Enter size: ";
    cin >> size;

    cout << "Enter sorted integers: ";
    for (int i = 0; i < size; i++)
        cin >> array[i];

    cout << "Enter key: ";
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
