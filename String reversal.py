#String reversal: Given an string with words separated by empty spaces, commas or fullstops, write a program to return the string after removing the commas and fullstops and reversing the words in the string

def reverse_words(input_string):
    cleaned_string = input_string.replace(',', '').replace('.', '')
    words = cleaned_string.split()
    reversed_words = words[::-1]
    result = ' '.join(reversed_words)
    return result

input_string = input("Enter a string: ")

result = reverse_words(input_string)
print("Reversed words string:", result)
