#include <bits/stdc++.h>

using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    unsigned long n,d,i,*array;
    cin >> n >> d;
    array = new unsigned long[n];
    for(i = 0;i<n;i++) {
        cin >> array[i];
    }
    for(i = d;i<n;i++)
        cout<<array[i]<<" ";
    for(i = 0;i<d;i++)
        cout<<array[i]<<" ";

    return 0;
}