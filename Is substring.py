#Is substring: Given two strings str1 and str2, write a program to return true if str2 is a substring of str1 and false otherwise.

def is_substring(str1, str2):
    # Check if str2 is in str1
    return str2 in str1

# Take input from the user
str1 = input("Enter the first string (str1): ")
str2 = input("Enter the second string (str2): ")

# Check if str2 is a substring of str1
result = is_substring(str1, str2)
print(f"Is '{str2}' a substring of '{str1}'? {result}")
