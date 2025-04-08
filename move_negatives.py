def move_negatives_optimal(arr):
    j = 0  
    for i in range(len(arr)):
        if arr[i] < 0:
            arr[i], arr[j] = arr[j], arr[i]
            j += 1

input_str = input("Enter array elements separated by space: ")
arr = list(map(int, input_str.strip().split()))

move_negatives_optimal(arr)
print("Array after moving negatives to the left:", arr)
