#include <iostream>
#include <bits/stdc++.h>


/*
 * 321133
903418
726939
 */

using namespace std;



int main() {
    vector<unsigned int> output;
    unsigned int t,n,id,prevId,temp;
    char pass;
    cin >>t;
for(int j = 0;j<t;j++) {
    cin>>n>>id;
    for (int i = 0; i < n; i++) {
        cin >> pass;
        if (pass == 'P') {
            prevId = id;
            cin >> id;
        } else {
            temp = id;
            id = prevId;
            prevId = temp;
        }
    }
    output.push_back(id);
}

    for(auto i: output)
        cout<<i<<"\n";

}