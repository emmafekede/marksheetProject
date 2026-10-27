#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

int main() {
    char names[5][20];
    int marks[5][3];
    int total[5];
    float average[5];
    for (int i = 0; i < 5; i++) {
        cout << "\nEnter name of student " << i + 1 << ": ";
        cin.getline(names[i], 20);

        total[i] = 0;

        for (int j = 0; j < 3; j++) {
            cout << "Enter mark " << j + 1 << ": ";
            cin >> marks[i][j];

            total[i] += marks[i][j];
        }

        average[i] = total[i] / 3.0;

       cin.ignore(1000, '\n');
    }
    int top = 0;

    for (int i = 1; i < 5; i++) {
        if (total[i] > total[top]) {
            top = i;
        }
    }
    cout << "\n\n========= STUDENT MARK SHEET =========\n\n";

    cout << left
         << setw(20) << "Name"
         << setw(8) << "M1"
         << setw(8) << "M2"
         << setw(8) << "M3"
         << setw(10) << "Total"
         << setw(10) << "Average" << endl;

    for (int i = 0; i < 5; i++) {
        cout << left
             << setw(20) << names[i]
             << setw(8) << marks[i][0]
             << setw(8) << marks[i][1]
             << setw(8) << marks[i][2]
             << setw(10) << total[i]
             << average[i] << endl;
    }

    cout << "\nTop student: " << names[top] << endl;
    cout << "Highest total: " << total[top] << endl;

    return 0;
}