my_string=input("enter a string")
digits=[]

for char in my_string:
    if char.isdigit():
        digits.append(char)

digiits=list(set(digits))
digits.sort(reverse=True)
digits=''.join(digits)        
biggest_number=int(digits)
print(f'the number is { biggest_number}')                                                                                                                                                                                                     