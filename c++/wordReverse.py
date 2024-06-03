def reverse(string):
    for i in string :
        newString = string[::-1]
    return str(newString)

string = input("Enter the String : ")
s = string.split(' ')
full =' '
for i in s:
    full = full + reverse(i)+ " " 
print(full)