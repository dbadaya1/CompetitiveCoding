
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
    int v,a;
    cin >> v>>a;
    vector<int> m(v);
    for(int i = 0;i<v;i++)
        cin >> m[i];

    sort(m.begin(),m.end());
    cout<<"\n\n";
    double avg = 0;
    for(int i = a;i < v - a;i++) {
        //cout<<m[i]<<"\n";
        avg += m[i];
    }
    avg /= (v - 2*a);
    cout<<avg<<"\n";

    //for(auto i: m)
       // cout<<i<<"\n";
}
