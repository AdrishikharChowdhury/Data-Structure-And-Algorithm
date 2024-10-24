# Polynomial Addition using Linked Lists

A C program that implements polynomial addition using singly linked lists. The program allows users to input two polynomials and displays their sum.

## Features

- Dynamic memory allocation for polynomial terms
- Support for polynomials with multiple terms
- Terms are maintained in descending order of powers
- Handles addition of polynomials with different degrees
- Memory-efficient implementation using linked lists

## Data Structure

The program uses a custom structure `term` to represent each term of the polynomial:
```c
typedef struct term {
    int coeff;    // Coefficient of the term
    int pow;      // Power/exponent of the term
    struct term *next;  // Pointer to the next term
} trm;
```

## Functions

### 1. `trm *input(trm *head)`
- Takes user input for a polynomial
- Parameters:
  - `head`: Pointer to the start of polynomial
- Returns: Pointer to the first term of the polynomial
- User inputs:
  - Number of terms
  - Coefficient and power for each term

### 2. `void display(trm *head)`
- Displays a polynomial in readable format
- Parameters:
  - `head`: Pointer to the polynomial to display
- Format: ax^n + bx^m + ...

### 3. `trm *addPoly(trm *poly1, trm *poly2)`
- Adds two polynomials
- Parameters:
  - `poly1`: First polynomial
  - `poly2`: Second polynomial
- Returns: Pointer to the resultant polynomial
- Features:
  - Handles terms with equal powers
  - Preserves terms with different powers
  - Excludes terms with zero coefficients

## Usage Example

```c
trm *poly1 = NULL, *poly2 = NULL, *result;

// Input first polynomial
poly1 = input(poly1);

// Input second polynomial
poly2 = input(poly2);

// Add polynomials
result = addPoly(poly1, poly2);

// Display results
display(result);
```

## Sample Input/Output

```
Enter the first polynomial:
Enter the number of terms in the polynomial: 2
Enter the coefficient for term 1: 3
Enter the power for term 1: 2
Enter the coefficient for term 2: 2
Enter the power for term 2: 1

Enter the second polynomial:
Enter the number of terms in the polynomial: 2
Enter the coefficient for term 1: 4
Enter the power for term 1: 2
Enter the coefficient for term 2: -2
Enter the power for term 2: 1

First polynomial: 3x^2 + 2x^1
Second polynomial: 4x^2 + -2x^1
Resultant polynomial: 7x^2 + 0x^1
```

## Memory Management

- Uses dynamic memory allocation (`malloc`)
- Frees memory when terms with zero coefficients are generated
- Checks for memory allocation failures

## Time Complexity

- Input: O(n), where n is the number of terms
- Display: O(n), where n is the number of terms
- Addition: O(n + m), where n and m are the numbers of terms in the two polynomials

## Space Complexity

- O(max(n, m)), where n and m are the numbers of terms in the input polynomials

## Error Handling

- Checks for memory allocation failures
- Returns NULL if memory allocation fails
- Handles zero coefficient terms by excluding them from the result

## Limitations

- Only handles integer coefficients
- Does not sort terms by power (assumes input in descending order)
- No input validation for power values
- No memory deallocation functionality included

## Contributing

Feel free to contribute to this project by:
1. Adding input validation
2. Implementing polynomial subtraction/multiplication
3. Adding memory deallocation functionality
4. Implementing sorting of terms

## License

This code is available under the MIT License.
