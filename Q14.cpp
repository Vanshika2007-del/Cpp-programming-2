#include <iostream>
using namespace std;

int main() {
    int array[100], size, searchElement, position = -1;

    cout << "Enter size: ";
    cin >> size;

    for (int i = 0; i < size; i++)
        cin >> array[i];

    cout << "Enter element to search: ";
    cin >> searchElement;

    for (int i = 0; i < size; i++) {
        if (array[i] == searchElement) {
            position = i;
            break;
        }
    }

    if (position != -1)
        cout << "Element found at position " << position + 1;
    else
        cout << "Element not found";

    return 0;
}
