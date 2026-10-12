#include <iostream>
using namespace std;

int main() {
    int array[100], size;

    cout << "Enter size: ";
    cin >> size;

    cout << "Enter elements in sorted order: ";
    for (int i = 0; i < size; i++)
        cin >> array[i];

    // Binary search approach to reach the last (largest) element
    int low = 0, high = size - 1;

    while (low < high) {
        int middle = low + (high - low) / 2;

        if (middle < size - 1)
            low = middle + 1;
        else
            high = middle;
    }

    cout << "Largest element = " << array[low];

    return 0;
}
