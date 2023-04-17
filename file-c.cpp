#include <iostream>
#include <cmath>

using namespace std;

int main() {

    //start, wypisuje kilka pierwszych wywolan plus ostatnie
    cout << "2 to the power of 0 is 1"<<endl;
    cout << "2 to the power of 1 is 2"<<endl;
    cout << "2 to the power of 2 is 4"<<endl;
    cout << "2 to the power of 3 is 8"<<endl;
    // ...
    cout << "2 to the power of 16 is 65536"<<endl;

cout << endl;
// petla for
for (int i=0; i<=16; i++) {
    cout << "2 to the power of " << i << "is" <<pow (2, i) <<endl;
    }

    cout << endl;
    // petla while
    int j=0;
    while (j<=16) {
    cout << "2 to the power of " << j << "is" <<pow (2, j) <<endl;
    j++;
    }

    return 0;
}
