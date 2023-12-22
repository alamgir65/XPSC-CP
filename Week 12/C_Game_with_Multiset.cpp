#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main() {
    int m;
    cin >> m;

    multiset<int> elements;
    vector<int> prefixSums;

    while (m--) {
        int t, v;
        cin >> t >> v;

        if (t == 1) {
            elements.insert(2 * v);
        } else {
            // Process GET query
            bool possible = false;

            for (int i : elements) {
                if (i == v || (i < v && prefixSums[v - i])) {
                    possible = true;
                    break;
                }
            }

            cout << (possible ? "YES" : "NO") << endl;
        }

        // Calculate prefix sums
        prefixSums.clear();
        prefixSums.resize(v + 1, 0);

        int sum = 0;
        for (int i : elements) {
            sum += i;
            if (sum <= v) {
                prefixSums[sum] = 1;
            }
        }
    }

    return 0;
}
