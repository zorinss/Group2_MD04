#include <iostream>
using namespace std;

bool areDigitsUnique(int A, int B, int C) {
    return (A != B && A != C && B != C);
}

int calculateABABA(int A, int B) {
    return A * 10000 + B * 1000 + A * 100 + B * 10 + A;
}

int calculateCBCBC(int C, int B) {
    return C * 10000 + B * 1000 + C * 100 + B * 10 + C;
}

int calculateCBCBCB(int C, int B) {
    return C * 100000 + B * 10000 + C * 1000 + B * 100 + C * 10 + B;
}

void findSolution() {
    for (int A = 0; A <= 9; ++A) {
        for (int B = 0; B <= 9; ++B) {
            for (int C = 0; C <= 9; ++C) {
                if (areDigitsUnique(A, B, C)) {
                    int ABABA = calculateABABA(A, B);
                    int CBCBC = calculateCBCBC(C, B);
                    int CBCBCB = calculateCBCBCB(C, B);

                    if (ABABA + CBCBC == CBCBCB) {
                        cout << "Solution found:" << endl;
                        cout << "A = " << A << ", B = " << B << ", C = " << C << endl;
                        cout << "ABABA = " << ABABA << ", CBCBC = " << CBCBC << ", CBCBCB = " << CBCBCB << endl;
                        cout << ABABA << " + " << CBCBC << " = " << CBCBCB << endl;
                        return;
                    }
                }
            }
        }
    }
}

int main() {
    findSolution();
    return 0;
}
