tablica = [4, 6, 2, 1, 3]
max_val = tablica[0]

for i in range(1, len(tablica)):
    print(f"\nKrok {i}:")
    print(f"  Porównuję: tablica[{i}] = {tablica[i]} z max_val = {max_val}")
    
    if tablica[i] > max_val:
        print(f"  {tablica[i]} > {max_val} - ZNALEZIONO NOWE MAKSIMUM!")
        max_val = tablica[i]
    else:
        print(f"  {tablica[i]} <= {max_val} - brak zmian")

print(f"\nKoniec pętli. Maksymalna wartość: {max_val}")