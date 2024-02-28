#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> numbers;

    cout << "Enter numbers (enter 0 to stop):" << endl;

    int num;
    do {
        cout << "Enter a number: ";
        cin >> num;
        if (num != 0) {
            numbers.push_back(num);
        }
    } while (num != 0);

    cout << "Previous elements entered:" << endl;
    for (int i = 0; i < numbers.size(); ++i) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}