n = input('Digite um numero:\n')
n = int(n)

fibo = [0, 1]

i=2
while i<=n:
    soma=fibo[i-1]+fibo[i-2]
    fibo.append(soma)
    i=i+1

print (f'O numero de Fibonacci na posição {n} e {fibo[n]}')