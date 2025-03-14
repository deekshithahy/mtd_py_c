
m=int(input('Enter the M value:'))
n=int(input('Enter the N value:'))
p=int(input('Enter the P value:'))

for i in range(m,n,p):
    print(i,end=" ")
    i+=2
print(i)