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
        
        for (int k = (n - i); k > 0; k--) { // Or, k = 0; k < (n - i); k++, (if condition k > 1, or k = 1. then, the extra line of spaces will not be printed.)
            cout << "  ";
        }
        
        cout << endl;
    }
    
    return 0;
}

/* ------------------------------------------------------------------------------------------------------------------------------------------------------------------- */


/* Reverse Right Half Pyramid */

#include <iostream>
using namespace std;
    
int main() {
    int n;
    cout << "Enter the no. of rows: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        
        for (int j = (n - i); j > 0; j--) { // Or, j = 0; j < (n - i); j++
            cout << "* ";
        }

        for (int k = 0; k <= i; k++) { // if condition k < i, ya k = 1; k <= i. then, the extra line of spaces will not be printed.
            cout << "  ";
        }
        
        cout << endl;
    }

    return 0;
}

/* ------------------------------------------------------------------------------------------------------------------------------------------------------------------- */


/* Left Half Pyramid */

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the no. of rows: ";
    cin >> n;

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < (n - i); j++) { // Or, j = (n - i); j > 0; j--, (if j = 1, or condition j > 1. then, the extra line of spaces will not be printed.)
            cout << "  ";
        }

        for (int k = 0; k <= i; k++) {
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}

/* ------------------------------------------------------------------------------------------------------------------------------------------------------------------- */


/* Reverse Left Half Pyramid */

#include <iostream>
using namespace std;
    
int main() {
    int n;
    cout << "Enter the no. of rows: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        
        for (int j = 0; j <= i; j++) { // if j = 1, or condition j < i. then, the extra line of spaces will not be printed.
            cout << "  ";
        }

        for (int k = (n - i); k > 0; k--) { // Or, k = 0; k < (n - i); k++
            cout << "* ";
        }
        
        cout << endl;
    }
    
    return 0;
}

/* ------------------------------------------------------------------------------------------------------------------------------------------------------------------- */