def solve():
    try:
        n, m = map(int, input().split())
    except: return

    total_sum = 0
    # 10^19 soni 64 bitdan kichik, shuning uchun 64 ta qadam yetarli
    for k in range(64):
        # 0 dan X-1 gacha bo'lgan sonlar orasida k-biti 1 bo'lganlar sonini topish formulasi
        def count_ones(x, bit):
            full_periods = x // (2**(bit + 1))
            ones = full_periods * (2**bit)
            remainder = x % (2**(bit + 1))
            return ones + max(0, remainder - (2**bit))

        c1_n = count_ones(n, k)
        c1_m = count_ones(m, k)
        
        # XOR natijasida k-bit 1 bo'lishi uchun (0,1) yoki (1,0) juftligi kerak
        # Bu mantiqan: (n_nol * m_bir) + (n_bir * m_nol)
        pairs = (n - c1_n) * c1_m + c1_n * (m - c1_m)
        
        total_sum += pairs * (2**k)

    print(total_sum)

solve()
