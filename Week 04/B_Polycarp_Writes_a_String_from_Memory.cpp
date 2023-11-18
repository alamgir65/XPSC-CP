// problem link: https://codeforces.com/problemset/problem/1702/B
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        set<char> st;
        int day = 0;
        for (int i = 0; i < s.size(); i++)
        {
            st.insert(s[i]);
            if (st.size() == 4)
            {
                st.clear();
                day++;
                st.insert(s[i]);
            }
        }
        if (st.size() > 0)
            day++;
        cout << day << endl;
    }
    return 0;
}