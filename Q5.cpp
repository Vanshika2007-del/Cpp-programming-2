#include <iostream>
using namespace std;

int main() {
    int array[10], evenCount = 0, oddCount = 0;

    cout << "Enter 10 numbers: ";
    for (int i = 0; i < 10; i++) {
        cin >> array[i];

        if (array[i] % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }

    cout << "Even = " << evenCount << endl;
    cout << "Odd = " << oddCount;

    return 0;
}
