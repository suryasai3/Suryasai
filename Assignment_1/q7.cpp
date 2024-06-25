#include <iostream>
using namespace std;

int countZeroBits(int n) {
    int count = 0;
    while (n > 0) {
        if ((n & 1) == 0) { 
            count++;
        }
        n >>= 1; 
    }
    return count;
}

int main() {
    int t; // Number of test cases
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
   	int zeroBits = countZeroBits(n);
        int result = 1 << zeroBits;
        cout << result << endl;
    }
    return 0;
}

