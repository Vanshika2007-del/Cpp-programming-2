#include <iostream>
#include <string>
using namespace std;

int main() {
    string names[50], temp;
    int numberOfStudents;

    cout << "Enter number of students: ";
    cin >> numberOfStudents;

    cout << "Enter names:\n";
    for (int i = 0; i < numberOfStudents; i++)
        cin >> names[i];

    for (int i = 0; i < numberOfStudents - 1; i++) {
        for (int j = 0; j < numberOfStudents - i - 1; j++) {
            if (names[j] > names[j + 1]) {
                temp = names[j];
                names[j] = names[j + 1];
                names[j + 1] = temp;
            }
        }
    }

    cout << "Sorted names:\n";
    for (int i = 0; i < numberOfStudents; i++)
        cout << names[i] << endl;

    return 0;
}
