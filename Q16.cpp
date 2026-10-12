#include <iostream>
using namespace std;

int main() {
    int array[100], size, searchElement, count = 0;

    cout << "Enter size: ";
    cin >> size;

    for (int i = 0; i < size; i++)
        cin >> array[i];

    cout << "Enter element: ";
    cin >> searchElement;

    for (int i = 0; i < size; i++) {
        if (array[i] == searchElement)
            count++;
    }

    cout << "Occurrences = " << count;
    return 0;
}
