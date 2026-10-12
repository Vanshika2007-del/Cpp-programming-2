#include <iostream>
using namespace std;

int main() {
    int array[100], size;
    cout << "Enter size: ";
    cin >> size;

    for (int i = 0; i < size; i++)
        cin >> array[i];

    cout << "Reversed array: ";
    for (int i = size - 1; i >= 0; i--)
        cout << array[i] << " ";

    return 0;
}
