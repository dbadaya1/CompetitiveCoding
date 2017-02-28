
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {

    int m, w, r, min;
    vector<vector<int>> subjects;
    subjects.resize(m);
    vector<int> friends(w);
    cin >> m >> w >> r;
    for (int i = 0; i < r; i++) {
        cin >> temp;
        subjects[i].push_back(temp);
    }
    for (int i = 0; i < w; i++) {
        cin >> friends[i];
    }

    for (int i = 0; i < w; i++) {
        for(auto item:subjects) {
            if(item.size() == 0)
                temp = 0;
            else if(item.size() == 1)
                temp = item[0];
            else {
                temp = item.size() * (item[item.size() - 1] + item[item.size() - 2);
            }
        }
        break;

    }

}