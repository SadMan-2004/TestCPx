// Problem: Attribute Parser
// Platform: hackerrank
// Language: cpp
// Verdict: Accepted
// URL: https://www.hackerrank.com/challenges/attribute-parser/problem?isFullScreen=true
// Solved on: 2026-07-22T20:42:36.388Z

#include <iostream>
#include <sstream>
#include <stack>
#include <unordered_map>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    cin.ignore();

    stack<string> st;
    unordered_map<string, string> mp;

    for (int i = 0; i < n; i++) {
        string line;
        getline(cin, line);

        if (line.substr(0, 2) == "</") {
            st.pop();
        } else {
           
            line = line.substr(1, line.size() - 2);

            stringstream ss(line);
            string tag;
            ss >> tag;

            string path;
            if (st.empty())
                path = tag;
            else
                path = st.top() + "." + tag;

            st.push(path);

            string attr, eq, value;
            while (ss >> attr) {
                ss >> eq >> value;

        
                value = value.substr(1, value.size() - 2);

                mp[path + "~" + attr] = value;
            }
        }
    }

    while (q--) {
        string query;
        getline(cin, query);
        if (mp.find(query) != mp.end())
            cout << mp[query] << endl;
        else
            cout << "Not Found!" << endl;
    }

    return 0;
}
