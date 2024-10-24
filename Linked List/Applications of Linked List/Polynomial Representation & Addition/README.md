# Polynomial Operations using Linked Lists

A comprehensive guide to implementing polynomial representation and arithmetic operations using linked lists data structure.

## Table of Contents
1. [Introduction](#introduction)
2. [Implementation](#implementation)
3. [Operations](#operations)
4. [Time Complexity](#time-complexity)
5. [Usage](#usage)
6. [Examples](#examples)

## Introduction

This project implements polynomial representation and operations using linked lists, where each node represents a term in the polynomial. Each term contains:
- Coefficient
- Power/Exponent
- Link to the next term

### Why Linked Lists for Polynomials?
- Dynamic memory allocation
- Easy insertion and deletion of terms
- Efficient memory usage
- Simple representation of sparse polynomials

## Implementation

### Data Structure
```c
typedef struct term {
    int coefficient;    // Stores the coefficient
    int exponent;      // Stores the power/exponent
    struct term *next; // Points to the next term
} Term;
```

### Key Functions

#### 1. Creation
```c
Term* createTerm(int coeff, int exp) {
    Term* newTerm = (Term*)malloc(sizeof(Term));
    newTerm->coefficient = coeff;
    newTerm->exponent = exp;
    newTerm->next = NULL;
    return newTerm;
}
```

#### 2. Insertion
```c
Term* insertTerm(Term* head, int coeff, int exp) {
    Term* newTerm = createTerm(coeff, exp);
    if (head == NULL) return newTerm;
    Term* current = head;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = newTerm;
    return head;
}
```

## Operations

### 1. Addition
- Compare exponents of terms from both polynomials
- If exponents are equal, add coefficients
- If exponents are different, include the term with higher exponent
- Continue until all terms are processed

```c
Term* addPolynomials(Term* poly1, Term* poly2) {
    if (poly1 == NULL) return poly2;
    if (poly2 == NULL) return poly1;
    
    Term* result = NULL;
    while (poly1 && poly2) {
        if (poly1->exponent > poly2->exponent) {
            result = insertTerm(result, poly1->coefficient, poly1->exponent);
            poly1 = poly1->next;
        } else if (poly1->exponent < poly2->exponent) {
            result = insertTerm(result, poly2->coefficient, poly2->exponent);
            poly2 = poly2->next;
        } else {
            int sum = poly1->coefficient + poly2->coefficient;
            if (sum != 0) {
                result = insertTerm(result, sum, poly1->exponent);
            }
            poly1 = poly1->next;
            poly2 = poly2->next;
        }
    }
    // Process remaining terms
    while (poly1) {
        result = insertTerm(result, poly1->coefficient, poly1->exponent);
        poly1 = poly1->next;
    }
    while (poly2) {
        result = insertTerm(result, poly2->coefficient, poly2->exponent);
        poly2 = poly2->next;
    }
    return result;
}
```

### 2. Display
```c
void displayPolynomial(Term* poly) {
    while (poly != NULL) {
        printf("%dx^%d", poly->coefficient, poly->exponent);
        if (poly->next != NULL) {
            printf(" + ");
        }
        poly = poly->next;
    }
    printf("\n");
}
```

## Time Complexity

| Operation | Time Complexity |
|-----------|----------------|
| Creation | O(1) |
| Insertion | O(n) |
| Addition | O(n + m) |
| Display | O(n) |

Where:
- n is the number of terms in first polynomial
- m is the number of terms in second polynomial

## Usage

### 1. Input Format
```c
// Number of terms
n
// For each term:
coefficient exponent
```

### 2. Example Usage
```c
// Create polynomials
Term* poly1 = NULL;
Term* poly2 = NULL;

// Insert terms
poly1 = insertTerm(poly1, 3, 2);  // 3x^2
poly1 = insertTerm(poly1, 4, 1);  // + 4x

poly2 = insertTerm(poly2, 5, 2);  // 5x^2
poly2 = insertTerm(poly2, 2, 0);  // + 2

// Add polynomials
Term* result = addPolynomials(poly1, poly2);

// Display result
displayPolynomial(result);
```

## Examples

### Input:
```
Polynomial 1: 3x^2 + 4x
Polynomial 2: 5x^2 + 2
```

### Output:
```
Result: 8x^2 + 4x + 2
```

## Best Practices

1. Memory Management
   - Always free allocated memory
   - Check for NULL after malloc
   - Handle memory leaks

2. Error Handling
   - Validate input values
   - Handle edge cases
   - Check for overflow

3. Code Organization
   - Maintain terms in descending order of exponents
   - Remove terms with zero coefficients
   - Keep the linked list well-organized

## Common Pitfalls

1. Memory Leaks
   - Not freeing memory after operations
   - Lost references to nodes

2. Edge Cases
   - Empty polynomials
   - Single term polynomials
   - Zero coefficients

3. Arithmetic Errors
   - Integer overflow in coefficient addition
   - Incorrect exponent handling

## Contributing

Contributions are welcome! Here are some ways to contribute:
1. Add more polynomial operations (multiplication, division)
2. Implement polynomial simplification
3. Add support for floating-point coefficients
4. Improve error handling
5. Add test cases

## License

This project is licensed under the MIT License - see the LICENSE file for details.
