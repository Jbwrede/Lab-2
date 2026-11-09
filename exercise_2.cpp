
#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> A;

    for (int x = 0; x < 100; x++) {
        if (x % 2 == 0) {
            A.insert(x);
        }
    }

    cout << "A = {";
    bool first = true;

    for (int x : A) {
        if (!first) {
            cout << ", ";
        }
        cout << x;
        first = false;
    }

    cout << "}" << endl;

    return 0;
}
