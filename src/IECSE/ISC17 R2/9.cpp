#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;
int main() {
    int n,current = 0;
    cin >>n;
    char *s = (char*)malloc(sizeof(char)*n);
    char *b = (char*)malloc(sizeof(char)*n);
    cin >>s;
    strcpy(b,s);

    int count = 0;

    for(int j = 0;j<n;j++) {
        strcpy(s,b);
        current = j;
        count = 0;
        while (1) {
            if (s[current] == 'U') {
                s[current] = 'D';
                current++;
                count++;
            }
            if (s[current] == 'D') {
                s[current] = 'U';
                current--;
                count++;
            }
            if (current >= n || current < 0)
                break;

        }
        cout << count<<"\n";
    }


    return 0;

}