# Validate if a string is Numeric
str = input().strip()
try:
    if(float(str)):
        print("YES")
except:
    print("NO")
