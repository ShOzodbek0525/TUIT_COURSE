#include <iostream>
#include <vector>
#include <set>

using namespace std;

// MEX ni topish funksiyasi
int get_mex(const set<int>& excluded) {
    int mex = 0;
    while (excluded.count(mex)) {
        mex++;
    }
    return mex;
}

int main() {
    int n, m;
    cout << "N va M ni kiriting: ";
    cin >> n >> m;

    vector<vector<int>> table(n, vector<int>(m));
    long long total_sum = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            set<int> excluded;

            // Tepadagi elementlar
            for (int i0 = 0; i0 < i; i0++) {
                excluded.insert(table[i0][j]);
            }
            // Chapdagi elementlar
            for (int j0 = 0; j0 < j; j0++) {
                excluded.insert(table[i][j0]);
            }

            table[i][j] = get_mex(excluded);
            total_sum += table[i][j];
        }
    }

    // Jadvalni chop etish
    cout << "\nJadval:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << table[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nJami yig'indi: " << total_sum << endl;

    return 0;
}
