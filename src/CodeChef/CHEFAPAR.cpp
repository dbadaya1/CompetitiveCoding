#include <bits/stdc++.h>

using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    short T;
    cin >> T;
    unsigned int N, monthRentPay = 0, fine = 0;
    unsigned int answers[25][2];
    short current;
    for (short i = 0; i < T; i++) {
        monthRentPay = fine = 0;
        cin >> N;
        for (unsigned int j = 0; j < N; j++) {
            cin >> current;
            if (current == 1) {
                if (monthRentPay < j) {
                    fine++;
                }
                monthRentPay++;
            }
        }
        monthRentPay = N - monthRentPay;
        answers[i][0] = fine;
        answers[i][1] = monthRentPay;
    }
    for (short i = 0; i < T; i++) {
        cout << (answers[i][0] + answers[i][1]) * 100 + answers[i][1] * 1000 << "\n";
    }
        return 0;
}