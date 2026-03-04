#include <iostream>

using namespace std;

int main() {
    int n, m;
    if (!(cin >> n >> m)) return 0;

    long long total_sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            // MEX qidirib o'tirmasdan, to'g'ridan-to'g'ri XOR ishlatamiz
            total_sum += (i ^ j);
        }
    }

    cout << "Jami yig'indi: " << total_sum << endl;
    return 0;
}
