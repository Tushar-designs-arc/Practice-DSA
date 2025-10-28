/* Square Fill Pattern */

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the no. of rows: ";
    cin >> n;

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < n; j++) {
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}

/* ------------------------------------------------------------------------------------------------------------------------------------------------------------------- */


/* Right Half Pyramid */

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the no. of rows: ";
    cin >> n;

    for (int i = 0; i < n; i++) {

        for (int j = 0; j <= i; j++) {
            cout << "* ";
        }
        
        for (int k = (n - i); k > 0; k--) { // k = 0; k < (n - i); k++, (if we set k = 1, or give condition k > 1 the extra line of spaces will not be printed.)
            cout << "  ";
        }
        
        cout << endl;
    }
    
    return 0;
}

/* ------------------------------------------------------------------------------------------------------------------------------------------------------------------- */