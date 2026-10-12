#include <iostream>
using namespace std;

int main() {
    int array[100], size;
    cout << "Enter size: ";
    cin >> size;

    cout << "Enter elements: ";
    for (int i = 0; i < size; i++)
        cin >> array[i];

    cout << "Array elements: ";
    for (int i = 0; i < size; i++)
        cout << array[i] << " ";

    return 0;
}
