#include <bits/stdc++.h>

using namespace std;

struct node {
    string s;
    int count;
    struct node *next;
};
int hash1(string s) {
    int sum = 0;
    for(int i = 0;i<s.size();i++)
        sum += (int)s[i];

    cout<<"Sum "<<sum;
    return sum%1000;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    unsigned int n,q;
    string a;
    int h;
    struct node *temp;
    struct node **table = (struct node**)calloc(1000,sizeof(struct node *));
  //  fill (table,table + 1000, nullptr);
    cin >> n;
    for(int i = 0;i<n;i++) {
        cin >> a;
        h = hash1(a);
        if(table[h] != nullptr) {
            if(table[h]->s == a) {
                table[h]->count++;
            }
            else {
                temp = new struct node;
                temp->count = 1;
                temp->s = a;
                temp->next = nullptr;
                table[h]->next = temp;
            }
        }
        else {
            temp = new struct node;
            temp->count = 1;
            temp->s = a;
            temp->next = nullptr;
            table[h] = temp;
        }

    }

    for(int i = 0;i<1;i++) {
        cout<<table[i]->s<<"\n";
    }





    return 0;
}