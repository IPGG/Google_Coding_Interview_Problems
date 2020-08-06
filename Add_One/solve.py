n = int(input("Enter the number of elements : ")) 

a = list(map(int,input("\nEnter the numbers : ").strip().split()))[:n] 

strings = [str(integer) for integer in a]
a_string = "".join(strings)
a_integer = int(a_string)

a_integer =  a_integer + 1

res = list(map(int, str(a_integer)))
print (res)