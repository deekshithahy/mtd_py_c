#program to print the numbers from m to n with an increment of of p
m=int(input('Enter the M value:'))
n=int(input('Enter the N value:'))
p=int(input('Enter the P value:'))

i=m
while i<=n: 
    print(i,end=' ')
    i=i+p
else:
    print("m is bigger number")
