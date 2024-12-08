# BigInt Library and Reverse Polish Notation (RPN) Calculator

## Overview

This project implements a robust library for handling integers with unlimited magnitude (BigInt) and an accompanying Reverse Polish Notation (RPN) calculator program. The BigInt library focuses on precision arithmetic, while the calculator serves as a practical demonstration and testing ground for the library's functionality.

The RPN calculator supports standard mathematical operations, factorial calculations, and variable assignments using the BigInt library, making it suitable for computations requiring precision beyond the limits of typical data types.

## Features

### BigInt Library
- **Unlimited Magnitude**: Handles integers of arbitrary size, constrained only by system memory.
- **Comprehensive Arithmetic**: Supports addition, subtraction, multiplication, division, and modulo operations.
- **Comparison and Assignment**: Includes operators for equality, inequality, and assignment.
- **Factorial Functionality**: Efficient computation of factorials for large integers.
- **Optimized Digit Management**: Uses `unsigned char` for digit storage, ensuring efficient memory usage.
- **Robust Memory Handling**: Automatically resizes arrays, removes leading zeros, and manages digit access effectively.
- **Rich Operator Support**: Includes standard and compound assignment operators like `+=`, `-=`, `*=`, `/=`, `%=`, and pre/post-increment (`++`).
- **Custom Vector Implementation**: A specialized vector-like structure for digit storage, tailored for BigInt operations.

### Custom Vector Implementation

The BigInt library uses a custom vector-like class to store digits of large integers. This class provides:
- **Dynamic Array Management**: Ensures efficient resizing as digits are added or removed.
- **Memory Optimization**: Utilizes `unsigned char` for individual digits, minimizing memory usage.
- **Custom Access Methods**:
  - `get(int index)`: Returns the digit at the specified index or 0 if the index is out of bounds.
  - `set(int index, unsigned char value)`: Sets the digit at the specified index, resizing the array if needed. Intermediate positions are padded with zeros.
- **Automatic Growth**: Expands capacity when needed to handle larger numbers without manual intervention.

This tailored implementation avoids the overhead of general-purpose vector libraries and focuses specifically on the requirements of BigInt operations.

### RPN Calculator
- **Interactive Mode**: Continuously accepts and evaluates RPN equations until the user exits.
- **Seamless Integration**: Leverages the BigInt library for all computations, ensuring unlimited precision.
- **Enhanced Input Handling**: Parses equations using `getline` for clean input processing.
- **Error Resilience**: Gracefully handles invalid input and provides meaningful feedback to the user.
- **Variable Support**: Allows results to be stored in variables for reuse in further calculations.

## File Structure

### Key Files

- **`bigintheader.h`**: Defines the `BigInt` class and its methods.
- **`bigint.o`**: Precompiled object file for the `BigInt` library.
- **`bigintcalc.cpp`**: Implements the RPN calculator.

### Class Details (`BigInt`)

#### Members
- **`digit *array`**: Dynamic array storing the digits of the integer.
- **`int cap`**: Total capacity of the array.
- **`int num_dig`**: Number of significant digits.
- **`bool isNeg`**: Indicates whether the number is negative.

#### Key Methods
- **Constructors and Destructor**:
  - `BigInt()`: Initializes to zero.
  - `BigInt(const string &s)`: Constructs from a string representation.
  - `BigInt(const BigInt &other)`: Copy constructor.
  - `~BigInt()`: Destructor to free memory.

- **Arithmetic Operators**:
  - `BigInt operator+(BigInt &b)`
  - `BigInt operator-(BigInt &b)`
  - `BigInt operator*(BigInt &b)`
  - `BigInt operator/(BigInt &b)`
  - `BigInt operator%(BigInt &b)`

- **Utility Methods**:
  - `void RemZeros()`: Removes leading zeros for clean representation.
  - `int compare(BigInt &a, BigInt &b)`: Compares two BigInts.
  - `void uadd(BigInt a, BigInt b, BigInt &r)`: Performs unsigned addition.
  - `void usub(BigInt a, BigInt b, BigInt &r)`: Performs unsigned subtraction.

- **Stream Operators**:
  - `ostream &operator<<(ostream &out, BigInt &value)`
  - `istream &operator>>(istream &in, BigInt &b)`

- **Factorial Calculation**:
  - `BigInt factorial()`

- **Additional Operators**:
  - `+=`, `-=`, `*=`, `/=`, `%=`
  - `++`: Increment operator.

### RPN Calculator Implementation (`bigintcalc.cpp`)

- **Interactive Input**: Prompts the user to enter RPN equations or `exit` to quit.
- **Equation Parsing**: Processes input using `getline` and evaluates expressions with the BigInt library.
- **Variable Management**: Supports storing and reusing intermediate results.
- **Error Handling**: Catches and reports errors during input processing and computation.

## Usage

### Setup

1. **Compile the Library**:
   ```bash
   g++ -c bigint.o bigintcalc.cpp
   ```

2. **Link the Program**:
   ```bash
   g++ -o bigintcalc bigint.o bigintcalc.cpp
   ```

3. **Run the Calculator**:
   ```bash
   ./bigintcalc
   ```

### Practical Example Input/Output

#### Example 1: Basic Addition
Input:
```plaintext
10000000000000000001 9999999999999999999 +
```
Output:
```plaintext
20000000000000000000
```

#### Example 2: Factorial Calculation
Input:
```plaintext
20 !
```
Output:
```plaintext
2432902008176640000
```

#### Example 3: Complex Expression with Variables
Input:
```plaintext
123456789 987654321 * = x
x 2 /
```
Output:
```plaintext
121932631112635269
60966315556317634
```

## Contributions

Contributions are welcome! To contribute:

1. Fork the repository.
2. Create a new branch:
   ```bash
   git checkout -b feature-branch
   ```
3. Commit changes:
   ```bash
   git commit -m "Add new feature"
   ```
4. Push to the branch:
   ```bash
   git push origin feature-branch
   ```
5. Create a pull request.


---

Explore the library and calculator, suggest improvements, or create new features. Happy coding!

