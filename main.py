# Online Python compiler (interpreter) to run Python online.
# Write Python 3 code in this online editor and run it.
n1 = 0
n2 = 0
while n1 != 999:
    n1 = int(input('Digite um valor! '))
    if n1 != 999:
        n2 = int(input('Digite o segundo valor! '))
        print('a soma de {} + {} e '.format(n1, n2))
        print(n1 + n2)
        print('a subtração de {} - {} e '.format(n1, n2))
        print(n1 - n2)
        print('a multiplicação de {} * {} e '.format(n1, n2))
        print(n1 * n2)
        print('a divisão de {} / {} e '.format(n1, n2))
        print(n1 / n2)
        
    else:
        break