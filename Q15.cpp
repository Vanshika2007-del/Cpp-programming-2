#include <iostream>
using namespace std;

int main() {
    int array[100], size, searchElement;

    cout << "Enter size: ";
    cin >> size;

    cout << "Enter elements in sorted order: ";
    for (int i = 0; i < size; i++)
        cin >> array[i];

    cout << "Enter element to search: ";
    cin >> searchElement;

    int low = 0, high = size - 1;
    int position = -1;

    while (low <= high) {
        int middle = (low + high) / 2;

        if (array[middle] == searchElement) {
            position = middle;
            break;
        } else if (array[middle] < searchElement)
            low = middle + 1;
        else
            high = middle - 1;
    }

    if (position != -1)
        cout << "Element found at position " << position + 1;
    else
        cout << "Element not found";

    return 0;
}
