#include <iostream>
using namespace std;

int main() {
    int array[100], size;
    cout << "Enter size: ";
    cin >> size;

    for (int i = 0; i < size; i++)
        cin >> array[i];

    int maximum = array[0];
    int minimum = array[0];

    for (int i = 1; i < size; i++) {
        if (array[i] > maximum)
            maximum = array[i];
        if (array[i] < minimum)
            minimum = array[i];
    }

    cout << "Maximum = " << maximum << endl;
    cout << "Minimum = " << minimum;

    return 0;
}
