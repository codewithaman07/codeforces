#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

struct Cmt {
    string id;
    int time, listNum;

    Cmt(string i, int t, int l) : id(i), time(t), listNum(l) {}
};

bool cmp(const Cmt &a, const Cmt &b) {
    if (a.time == b.time) 
        return a.listNum < b.listNum;  // Priority to the first list
    return a.time < b.time;
}

int main() {
    int n1, n2;
    cin >> n1;

    vector<Cmt> cmts;

    for (int i = 0; i < n1; ++i) {
        string id;
        int t, s;
        cin >> id >> t >> s;
        if (s == 1) cmts.emplace_back(id, t, 1);
    }

    cin >> n2;

    for (int i = 0; i < n2; ++i) {
        string id;
        int t, s;
        cin >> id >> t >> s;
        if (s == 1) cmts.emplace_back(id, t, 2);
    }

    sort(cmts.begin(), cmts.end(), cmp);

    for (const auto &c : cmts) {
        cout << c.id << endl;
    }

    return 0;
}