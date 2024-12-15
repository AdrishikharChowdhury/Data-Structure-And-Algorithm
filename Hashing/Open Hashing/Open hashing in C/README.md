# Open Hashing Implementation

## Overview
This project implements a basic **Open Hashing (Chaining)** technique in C to handle collisions in a hash table. The hash table contains 10 slots, and collisions are resolved by storing multiple entries in a linked list at the same index.

## Features
1. **Hash Table Initialization**: A hash table with 10 slots.
2. **Custom Hash Function**: A recursive hash function (`findKey`) is used to reduce data to a single-digit hash index.
3. **Collision Resolution**: Handles collisions using chaining (linked lists).
4. **Dynamic Entry Creation**: Allows users to input and dynamically allocate entries.
5. **Display Functionality**: Prints the entire hash table with chains.

## How It Works
1. **Hash Function**: The `findKey` function calculates a hash index by summing the digits of a number recursively until a single-digit value is obtained.
2. **Entry Creation**: The `createntry` function allows the user to input multiple data entries and creates a linked list.
3. **Hash Table Construction**: The `createtable` function distributes the entries across the hash table using the hash function.
4. **Display**: The `display` function prints each index of the hash table along with its chain of entries.

## Code Breakdown
### Key Functions
1. **`findKey(int data)`**:
   - Computes the hash index by recursively summing the digits of the input data until a single digit is obtained.
2. **`createntry(entry *head, int n)`**:
   - Creates a linked list of `n` entries based on user input.
3. **`createtable(entry **table, entry *head)`**:
   - Allocates entries to the hash table based on their hash index.
4. **`display(entry *head)`**:
   - Prints the chain at each hash table index.

### Hash Function Example
Given the data `123`, the hash function:
1. Calculates `1 + 2 + 3 = 6`.
2. Maps `123` to index `6` in the hash table.

## Sample Output
```
Enter the no. of entries you want to enter: 3
Enter the 1st entry data: 123
Enter the next entry data: 456
Enter the next entry data: 789

Table [0]:	
Table [1]:	
Table [2]:	
Table [3]:	
Table [4]:	
Table [5]:	
Table [6]:	123	
Table [7]:	456	
Table [8]:	789	
Table [9]:	
```

## Usage
### Compilation and Execution
1. Compile the code using a C compiler:
   ```bash
   gcc -o open_hashing open_hashing.c
   ```
2. Run the executable:
   ```bash
   ./open_hashing
   ```

### Input
- Enter the number of entries.
- Provide the data for each entry.

### Output
- Displays the hash table with chains at each index.

## Key Concepts Illustrated
1. **Linked Lists**: Used for chaining entries at the same hash index.
2. **Recursive Hash Function**: Demonstrates a modular arithmetic-based approach to calculating hash indices.
3. **Dynamic Memory Allocation**: Allocates memory for entries and chains dynamically.

## Limitations
- Fixed hash table size (10 slots).
- No resizing or load factor handling.

## Extensions
- Implement dynamic resizing of the hash table.
- Use a more sophisticated hash function to minimize collisions.
- Add support for deletion of entries from the hash table.

## Conclusion
This implementation demonstrates a basic approach to Open Hashing using chaining in C. It is a foundational example that can be expanded with advanced techniques like dynamic resizing or more efficient hash functions.
