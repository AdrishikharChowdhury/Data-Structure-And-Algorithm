# Stack Data Structure

A **Stack** is a linear data structure that follows the **Last In, First Out (LIFO)** principle. It means the last element added to the stack will be the first one to be removed. Stacks are widely used in algorithms and problem-solving, particularly for managing function calls, parsing, expression evaluation, and more.

## Features

- **Push**: Add an element to the top of the stack.
- **Pop**: Remove the element from the top of the stack.
- **Peek**: View the top element without removing it.
- **isEmpty**: Check if the stack is empty.
- **Size**: Get the number of elements in the stack.

## Installation

Clone this repository to your local machine:
```bash
git clone https://github.com/yourusername/stack-implementation.git
```

## Usage

### Example in Python:
```python
class Stack:
    def __init__(self):
        self.items = []

    def push(self, item):
        self.items.append(item)

    def pop(self):
        if not self.is_empty():
            return self.items.pop()
        return None

    def peek(self):
        if not self.is_empty():
            return self.items[-1]
        return None

    def is_empty(self):
        return len(self.items) == 0

    def size(self):
        return len(self.items)

# Example usage
stack = Stack()
stack.push(1)
stack.push(2)
print(stack.peek())  # Output: 2
stack.pop()
print(stack.size())  # Output: 1
```

### Example in JavaScript:
```javascript
class Stack {
    constructor() {
        this.items = [];
    }

    push(item) {
        this.items.push(item);
    }

    pop() {
        if (!this.isEmpty()) {
            return this.items.pop();
        }
        return null;
    }

    peek() {
        if (!this.isEmpty()) {
            return this.items[this.items.length - 1];
        }
        return null;
    }

    isEmpty() {
        return this.items.length === 0;
    }

    size() {
        return this.items.length;
    }
}

// Example usage
const stack = new Stack();
stack.push(1);
stack.push(2);
console.log(stack.peek());  // Output: 2
stack.pop();
console.log(stack.size());  // Output: 1
```

## Applications of Stack
- Function call management (Recursion)
- Undo/Redo functionality in text editors
- Expression evaluation (Infix to Postfix conversion, etc.)
- Depth-First Search (DFS) algorithms

## Contributing

If you want to contribute to this project:
1. Fork the repository.
2. Create a new branch (`git checkout -b feature/feature-name`).
3. Commit your changes (`git commit -m 'Add feature'`).
4. Push to the branch (`git push origin feature/feature-name`).
5. Open a Pull Request.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.


### Explanation:
- **Installation**: Instructions for cloning the repo.
- **Usage**: Examples provided for Python and JavaScript implementations of the stack.
- **Applications**: Lists practical applications of the stack.
- **Contributing**: Guidelines for contributing to the project.
- **License**: Project licensing information (commonly MIT).
