# Heap Sort

## **Introduction**
Heap Sort is a popular comparison-based sorting algorithm that uses the **heap data structure** to organize and sort data. The algorithm works by:
1. **Building a Max Heap**: Rearranging elements to satisfy the heap property (parent nodes are greater than their child nodes).
2. **Sorting**: Repeatedly extracting the largest element (root of the heap) and rebuilding the heap until all elements are sorted.

Heap Sort is efficient and performs consistently with a time complexity of **O(n log n)**, making it suitable for large datasets.

---

## **Key Features**
1. **Efficient**: Performs well in worst-case scenarios with predictable time complexity.
2. **In-Place**: Requires no additional memory aside from the input array.
3. **Non-Stable**: The relative order of equal elements may not be preserved.

---

## **How Heap Sort Works**
### Step-by-Step Process:
1. **Heapify the Array**: Convert the input array into a max heap.
2. **Extract Elements**: Remove the largest element (heap root) and place it at the end of the array.
3. **Rebuild the Heap**: Restore the heap property for the remaining elements.
4. **Repeat**: Continue extracting and rebuilding until the array is sorted.

### Example:
Given an array `[4, 10, 3, 5, 1]`:
1. Build a max heap: `[10, 5, 3, 4, 1]`
2. Extract the largest element `10` and rebuild: `[5, 4, 3, 1]`
3. Continue until the array is sorted: `[1, 3, 4, 5, 10]`.

---

## **Algorithm**
1. **Heapify the Array**:
   - Start from the last non-leaf node and move upwards to ensure the heap property is satisfied.
2. **Sort by Extracting Elements**:
   - Swap the root (largest element) with the last unsorted element.
   - Reduce the heap size and heapify again.
   - Repeat until only one element remains.

---

## **Applications**
- **Data Processing**: Heap Sort is used in applications where sorting large datasets is needed.
- **Priority Queues**: Forms the basis of priority queue operations.
- **Real-Time Systems**: Its predictable performance is valuable for time-critical applications.

---

## **Advantages**
- **Efficient for Large Datasets**: Handles large arrays with consistent time complexity.
- **Memory Efficient**: Operates in-place, requiring no extra memory.
  
---

## **Disadvantages**
- **Non-Stable**: Equal elements may not retain their relative order.
- **Heap Construction Overhead**: Building and maintaining the heap may add some overhead compared to other algorithms like quicksort.

---

## **Pseudocode for Heap Sort**
### Heapify
```plaintext
Heapify(array, size, index):
    largest = index
    left = 2 * index + 1
    right = 2 * index + 2

    if left < size and array[left] > array[largest]:
        largest = left

    if right < size and array[right] > array[largest]:
        largest = right

    if largest != index:
        Swap(array[index], array[largest])
        Heapify(array, size, largest)
```

### Heap Sort
```plaintext
HeapSort(array):
    n = size of array

    # Build the max heap
    for i = n/2 - 1 to 0:
        Heapify(array, n, i)

    # Extract elements from the heap
    for i = n-1 to 1:
        Swap(array[0], array[i])  # Move largest to the end
        Heapify(array, i, 0)      # Rebuild the heap
```

---

## **Conclusion**
Heap Sort is a robust sorting algorithm suitable for a wide range of applications. Its **predictable time complexity** and **in-place operation** make it highly efficient for sorting large datasets. While it is not stable, it remains an essential tool for developers seeking reliable performance.