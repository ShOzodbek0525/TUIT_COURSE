def count_elements_up_to_n(start_val, N):
    current = start_val
    count = 1
    
    while True:
        length_n = len(str(current))
        next_val = current * length_n
        
        if next_val > N:
            break
            
        current = next_val
        count += 1
        
    return count

# Misol uchun N = 100,000 gacha
N_limit = 100000
print(f"{N_limit} gacha {count_elements_up_to_n(5, N_limit)} ta son bor.")
