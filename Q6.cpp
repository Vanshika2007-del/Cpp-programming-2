#include <iostream>
using namespace std;

int main() {
    int array[100], size, searchElement;
    bool found = false;

    cout << "Enter size: ";
    cin >> size;

    for (int i = 0; i < size; i++)
        cin >> array[i];

    cout << "Enter element to search: ";
    cin >> searchElement;

    for (int i = 0; i < size; i++) {
        if (array[i] == searchElement) {
            found = true;
            break;
        }
    }

    if (found)
        cout << "Element found";
    else
        cout << "Element not found";

    return 0;
}
