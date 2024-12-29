def move_zeros_to_end(arr):
    non_zero_index = 0
    for i in range(len(arr)):
        if arr[i] != 0:
            arr[non_zero_index], arr[i] = arr[i], arr[non_zero_index]
            non_zero_index += 1

    return arr
input_str = input("Enter integers separated by spaces: ")
arr = list(map(int, input_str.split())) 
result = move_zeros_to_end(arr)
print("Array after moving zeros to the end:", result)
