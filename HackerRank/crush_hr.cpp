#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    unsigned long int M, N, k, i, a, b, j, *array, *array2, p1, p2, max = 0;
    cin >> N >> M;

    array = new unsigned long[N]();
    array2 = new unsigned long[N];

    for (i = 0; i < M; i++) {
        cout<<i;
        cin >> a >> b >> k;
        a--;
        b--;
        for (j = a; j <= b; j++) {
            array[j] += k;
            if (array[j] > max)
                max = array[j];
        }
        /*
        p1 = 0;
        p2 = a;
        for(j = 0;j < N;j++) {

            if(p1 == N - (b-a)) {
                for(;j<N;j++)
                    array2[j] = array[p2++];

                break;
            }
            else if(p2 == b + 1) {
                for(;j<N;j++)
                    array2[j] = array[p1++];

                break;
            }
            if(j == a) {
                p1 = b + 1;
            }
            if(array[p1] < array[p2]) {
                array2[j] = array[p1];
                p1++;
            }
            else {
                array2[j] = array[p2];
                p2++;
            }
        }
         */

        //  for(j = 0;j < N;j++) {
        //   cout << array[j] << " ";
    }
    cout << max;

    return 0;
}