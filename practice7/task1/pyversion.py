def array_treshold(array : list, t : float):
    return [i for i in array if i > t]

A = [float(input('input array element ' + str(i) + ': ')) for i in range(10)]
t = float(input())
print(array_treshold(A, t))
