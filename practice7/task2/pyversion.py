def cool_intersection(A, B):
    C = A.intersection(B)
    C2 = set()
    for i in C:
        if i > 0:
            C2.add(i)
    return C2

A = set()
for i in range(5):
    A.add(int(input(f'input A element {i}: ')))
B = set()
for i in range(5):
    B.add(int(input(f'input A element {i}: ')))
    
C = cool_intersection(A, B)
print('result C: ', end = '')
for i in C:
    print(i, end=' ')
