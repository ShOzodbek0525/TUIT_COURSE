#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    long long n, m;
    long long mod = 1e9 + 7; // Masalada berilgan modul qiymati

    if (!(cin >> n >> m)) return 0;

    long long jami_yigindi = 0;

    for (int k = 0; k < 63; k++) {
        long long period = 1LL << (k + 1);
        long long yarim_period = 1LL << k;

        // n gacha k-biti 1 bo'lganlar soni
        long long n_bir = (n / period) % mod * (yarim_period % mod) % mod;
        long long qoldiq_n = n % period;
        if (qoldiq_n > yarim_period) {
            n_bir = (n_bir + (qoldiq_n - yarim_period)) % mod;
        }
        long long n_nol = (n % mod - n_bir + mod) % mod;

        // m gacha k-biti 1 bo'lganlar soni
        long long m_bir = (m / period) % mod * (yarim_period % mod) % mod;
        long long qoldiq_m = m % period;
        if (qoldiq_m > yarim_period) {
            m_bir = (m_bir + (qoldiq_m - yarim_period)) % mod;
        }
        long long m_nol = (m % mod - m_bir + mod) % mod;

        // XOR natijasida k-bit 1 bo'ladigan juftliklar (modul bilan)
        long long juftliklar = (n_nol * m_bir % mod + n_bir * m_nol % mod) % mod;
        
        // k-bitning qiymatini (2^k) yig'indiga qo'shish
        long long bit_qiymati = (1LL << k) % mod;
        jami_yigindi = (jami_yigindi + juftliklar * bit_qiymati) % mod;
    }

    cout << jami_yigindi << endl;

    return 0;
}
