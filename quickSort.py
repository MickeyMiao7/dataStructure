def quickSort(arr):
    if len(arr) <= 1:
        return arr
    mid = arr[len(arr) / 2]
    left = [x for x in arr if x < mid]
    middle = [x for x in arr if x == mid]
    right = [x for x in arr if x > mid]
    return quickSort(left) + middle + quickSort(right)

print quickSort([5,3,4,1,2,8,6,6,9])
