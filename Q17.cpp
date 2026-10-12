#include <iostream>
using namespace std;

int main() {
    int array[100], size, searchElement;
    bool present = false;

    cout << "Enter size: ";
    cin >> size;

    for (int i = 0; i < size; i++)
        cin >> array[i];

    cout << "Enter number to search: ";
    cin >> searchElement;

    for (int i = 0; i < size; i++) {
        if (array[i] == searchElement) {
            present = true;
            break;
        }
    }

    if (present)
        cout << "Number is present";
    else
        cout << "Number is not present";

    return 0;
}
