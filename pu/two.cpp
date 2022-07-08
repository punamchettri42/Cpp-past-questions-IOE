/*write a program with class fibo to realize following code snoippet*/
/* fibo f=1
for(i=1;i<=10,i++)
f++;
f.display();
} */
/*2020 fall*/
#include <iostream>
using namespace std;

int main() {
    int n, t1 = 0, t2 = 1, nextTerm = 0;

    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "Fibonacci Series: ";

    for (int f = 1; f <= n; ++f) {
        // Prints the first two terms.
        if(f == 1) {
            cout << t1 << ", ";
            continue;
        }
        if(f == 2) {
            cout << t2 << ", ";
            continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        
        cout << nextTerm << ", ";
    }
    return 0;
}