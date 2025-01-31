# **Linear Queue Implementation in C**

## **Overview**
A **Linear Queue** is a **FIFO (First In, First Out)** data structure where elements are inserted at the **rear** and removed from the **front**. This implementation in **C** provides basic queue operations such as **enqueue (insertion), dequeue (deletion), display**, and **checking if the queue is full or empty**.

---

## **Features**
- **Enqueue**: Inserts an element at the rear of the queue.
- **Dequeue**: Removes an element from the front of the queue.
- **Display**: Prints all elements in the queue.
- **Front & Rear Tracking**: Keeps track of the first and last elements.
- **Efficient Operations**: Runs in **O(1)** time complexity for enqueue and dequeue.

---

## **How It Works**
1. **Insertion (Enqueue)**  
   - Check if the queue is **full** (i.e., rear reaches the maximum size).
   - If not full, insert an element at the **rear** and increment the rear pointer.

2. **Deletion (Dequeue)**  
   - Check if the queue is **empty**.
   - If not empty, remove the **front** element and move the front pointer forward.

3. **Display**  
   - Traverse the queue and print all elements from `front` to `rear`.

---

## **Example Operations**
| Operation  | Input  | Output |
|------------|--------|--------|
| **Enqueue** | `10` | Queue: `[10]` |
| **Enqueue** | `20` | Queue: `[10, 20]` |
| **Dequeue** | - | Queue: `[20]` |
| **Enqueue** | `30` | Queue: `[20, 30]` |
| **Display** | - | Output: `20 30` |

---

## **Complexity Analysis**
| Operation  | Time Complexity | Space Complexity |
|------------|----------------|------------------|
| Enqueue   | **O(1)** | **O(n)** |
| Dequeue   | **O(1)** | **O(n)** |
| Display   | **O(n)** | **O(1)** |

---

## **How to Run**
1. **Compile the code** using GCC:
   ```sh
   gcc linear_queue.c -o queue
   ```
2. **Run the program**:
   ```sh
   ./queue
   ```
3. **Follow on-screen instructions** to perform queue operations.

---

## **Possible Enhancements**
- Implement **Circular Queue** to improve space efficiency.
- Use **Dynamic Memory Allocation** to allow flexible queue sizes.

---

## **License**
This project is open-source and can be used for **educational purposes**.
