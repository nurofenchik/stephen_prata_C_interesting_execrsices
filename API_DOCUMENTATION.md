# C Programming Exercises - API Documentation

This document provides comprehensive documentation for all public APIs, functions, components, and data structures in the C programming exercises codebase.

## Table of Contents

1. [Matrix Operations](#matrix-operations)
2. [String Processing](#string-processing)
3. [Mathematical Functions](#mathematical-functions)
4. [Data Structures](#data-structures)
5. [Utility Functions](#utility-functions)
6. [Macros](#macros)
7. [File I/O Operations](#file-io-operations)
8. [Calculator Functions](#calculator-functions)

---

## Matrix Operations

### `max_in_matrix`

**File:** `chapter10_ex14.c`

**Signature:**
```c
double max_in_matrix(int N, int M, double arr[N][M])
```

**Description:**
Finds the maximum value in a 2D matrix.

**Parameters:**
- `N` (int): Number of rows in the matrix
- `M` (int): Number of columns in the matrix
- `arr` (double[][]): 2D array representing the matrix

**Returns:**
- `double`: The maximum value found in the matrix

**Example:**
```c
double matrix[3][3] = {{1.0, 2.0, 3.0}, {4.0, 5.0, 6.0}, {7.0, 8.0, 9.0}};
double max = max_in_matrix(3, 3, matrix);
// max = 9.0
```

### `average_for_all`

**File:** `chapter10_ex14.c`

**Signature:**
```c
double average_for_all(int N, int M, double arr[N][M])
```

**Description:**
Calculates the average of all elements in a 2D matrix.

**Parameters:**
- `N` (int): Number of rows in the matrix
- `M` (int): Number of columns in the matrix
- `arr` (double[][]): 2D array representing the matrix

**Returns:**
- `double`: The average value of all matrix elements

**Example:**
```c
double matrix[2][2] = {{2.0, 4.0}, {6.0, 8.0}};
double avg = average_for_all(2, 2, matrix);
// avg = 5.0
```

### `average`

**File:** `chapter10_ex14.c`

**Signature:**
```c
double average(double arr[], int M)
```

**Description:**
Calculates the average of elements in a 1D array.

**Parameters:**
- `arr` (double[]): Array of double values
- `M` (int): Number of elements in the array

**Returns:**
- `double`: The average value of array elements

**Example:**
```c
double values[] = {1.0, 2.0, 3.0, 4.0};
double avg = average(values, 4);
// avg = 2.5
```

### `printresults`

**File:** `chapter10_ex14.c`

**Signature:**
```c
void printresults(int N, int M, double arr[N][M])
```

**Description:**
Prints the average of each row, overall average, and maximum value of a matrix.

**Parameters:**
- `N` (int): Number of rows in the matrix
- `M` (int): Number of columns in the matrix
- `arr` (double[][]): 2D array representing the matrix

**Returns:**
- `void`: No return value

**Example:**
```c
double matrix[2][3] = {{1.0, 2.0, 3.0}, {4.0, 5.0, 6.0}};
printresults(2, 3, matrix);
// Output:
// 2.000000
// 5.000000
// 3.500000
// 6.000000
```

---

## String Processing

### `print_strings`

**File:** `chapter11_ex11.c`

**Signature:**
```c
void print_strings(char arr[][100], int rows)
```

**Description:**
Prints all strings in a 2D character array.

**Parameters:**
- `arr` (char[][]): Array of strings (each string max 100 characters)
- `rows` (int): Number of strings in the array

**Returns:**
- `void`: No return value

**Example:**
```c
char strings[3][100] = {"Hello", "World", "Test"};
print_strings(strings, 3);
// Output: Hello World Test
```

### `length_of_first_word`

**File:** `chapter11_ex11.c`

**Signature:**
```c
int length_of_first_word(char *arr)
```

**Description:**
Calculates the length of the first word in a string (up to the first whitespace).

**Parameters:**
- `arr` (char*): Pointer to the string

**Returns:**
- `int`: Length of the first word

**Example:**
```c
char text[] = "Hello World";
int length = length_of_first_word(text);
// length = 5
```

### `print_by_whole_lenght`

**File:** `chapter11_ex11.c`

**Signature:**
```c
void print_by_whole_lenght(char arr[][100], int rows)
```

**Description:**
Sorts and prints strings by their total length in ascending order using bubble sort.

**Parameters:**
- `arr` (char[][]): Array of strings to sort
- `rows` (int): Number of strings in the array

**Returns:**
- `void`: No return value

**Example:**
```c
char strings[3][100] = {"Hi", "Hello", "A"};
print_by_whole_lenght(strings, 3);
// Output: A Hi Hello
```

### `print_by_first`

**File:** `chapter11_ex11.c`

**Signature:**
```c
void print_by_first(char arr[][100], int rows)
```

**Description:**
Sorts and prints strings by the length of their first word in ascending order.

**Parameters:**
- `arr` (char[][]): Array of strings to sort
- `rows` (int): Number of strings in the array

**Returns:**
- `void`: No return value

**Example:**
```c
char strings[2][100] = {"Hi there", "Hello world"};
print_by_first(strings, 2);
// Output: Hi there Hello world
```

### `ascii_compare`

**File:** `chapter11_ex11.c`

**Signature:**
```c
int ascii_compare(char *str1, char *str2)
```

**Description:**
Compares two strings lexicographically and returns the length of the lexicographically larger string.

**Parameters:**
- `str1` (char*): First string to compare
- `str2` (char*): Second string to compare

**Returns:**
- `int`: Length of the lexicographically larger string

**Example:**
```c
char s1[] = "apple";
char s2[] = "banana";
int result = ascii_compare(s1, s2);
// result = 6 (length of "banana")
```

### `print_by_ascii_compare`

**File:** `chapter11_ex11.c`

**Signature:**
```c
void print_by_ascii_compare(char arr[][100], int rows)
```

**Description:**
Sorts and prints strings in ASCII lexicographical order.

**Parameters:**
- `arr` (char[][]): Array of strings to sort
- `rows` (int): Number of strings in the array

**Returns:**
- `void`: No return value

**Example:**
```c
char strings[3][100] = {"zebra", "apple", "banana"};
print_by_ascii_compare(strings, 3);
// Output: apple banana zebra
```

---

## Mathematical Functions

### `isPrime`

**File:** `chapter7_ex9.c`

**Signature:**
```c
bool isPrime(int num)
```

**Description:**
Determines whether a given integer is a prime number.

**Parameters:**
- `num` (int): The number to check for primality

**Returns:**
- `bool`: `true` if the number is prime, `false` otherwise

**Example:**
```c
bool result1 = isPrime(17);  // result1 = true
bool result2 = isPrime(15);  // result2 = false
```

### `comp`

**File:** `chapter16_macroses.c`

**Signature:**
```c
int comp(const void *p1, const void *p2)
```

**Description:**
Comparison function for qsort to sort integers in descending order.

**Parameters:**
- `p1` (const void*): Pointer to first element
- `p2` (const void*): Pointer to second element

**Returns:**
- `int`: -1 if first > second, 0 if equal, 1 if first < second

**Example:**
```c
int arr[] = {3, 1, 4, 1, 5};
qsort(arr, 5, sizeof(int), comp);
// arr becomes {5, 4, 3, 1, 1}
```

### `sum`

**File:** `chapter16_macroses.c`

**Signature:**
```c
int sum(int num, ...)
```

**Description:**
Calculates the sum of a variable number of integer arguments using variadic arguments.

**Parameters:**
- `num` (int): Number of arguments to sum
- `...` (variadic): The integers to sum

**Returns:**
- `int`: Sum of all provided integers

**Example:**
```c
int result = sum(5, 1, 2, 3, 4, 5);
// result = 15
```

---

## Data Structures

### `struct name`

**File:** `chapter14_ex5_verygood.c`

**Description:**
Structure to represent a person's name.

**Fields:**
- `first_name` (char[40]): Person's first name
- `last_name` (char[40]): Person's last name

**Example:**
```c
struct name person_name = {"John", "Doe"};
```

### `struct student`

**File:** `chapter14_ex5_verygood.c`

**Description:**
Structure to represent a student with grades.

**Fields:**
- `n` (struct name): Student's name
- `grade` (float[3]): Array of three grades
- `average_grade` (float): Calculated average grade

**Example:**
```c
struct student s = {{"Alice", "Smith"}, {85.0, 90.0, 87.5}, 87.5};
```

### `struct person`

**File:** `chapter14_ex4.c`

**Description:**
Structure to represent a person's full name.

**Fields:**
- `firstname` (char[20]): Person's first name
- `surname` (char[20]): Person's middle name/surname
- `lastname` (char[20]): Person's last name

**Example:**
```c
struct person p = {"John", "Michael", "Smith"};
```

### `struct medicine`

**File:** `chapter14_ex4.c`

**Description:**
Structure to represent medical record information.

**Fields:**
- `persona` (struct person): Person's name information
- `card_number` (int): Medical card number

**Example:**
```c
struct medicine record = {{"John", "M", "Smith"}, 12345};
```

### `struct fullname`

**File:** `diff.c`

**Description:**
Structure to represent a person's full name.

**Fields:**
- `fname` (char[20]): First name
- `lname` (char[20]): Last name

**Example:**
```c
struct fullname name = {"William", "Shakespeare"};
```

### `struct bard`

**File:** `diff.c`

**Description:**
Structure to represent a bard with biographical information.

**Fields:**
- `name` (struct fullname): Bard's name
- `born` (int): Birth year
- `died` (int): Death year

**Example:**
```c
struct bard shakespeare = {{"William", "Shakespeare"}, 1564, 1616};
```

---

## Utility Functions

### `print_array`

**File:** `chapter16_macroses.c`

**Signature:**
```c
void print_array(const int *ptr, int size)
```

**Description:**
Prints all elements of an integer array, one per line.

**Parameters:**
- `ptr` (const int*): Pointer to the array
- `size` (int): Number of elements in the array

**Returns:**
- `void`: No return value

**Example:**
```c
int numbers[] = {1, 2, 3, 4, 5};
print_array(numbers, 5);
// Output:
// 1
// 2
// 3
// 4
// 5
```

### `input_student_grades`

**File:** `chapter14_ex5_verygood.c`

**Signature:**
```c
void input_student_grades(struct student *ptr)
```

**Description:**
Prompts user to input grades for students and updates the student records.

**Parameters:**
- `ptr` (struct student*): Pointer to array of student structures

**Returns:**
- `void`: No return value

**Example:**
```c
struct student students[4];
input_student_grades(students);
// Prompts user for student names and grades
```

### `input_average_grade`

**File:** `chapter14_ex5_verygood.c`

**Signature:**
```c
void input_average_grade(struct student *ptr)
```

**Description:**
Calculates and stores the average grade for each student.

**Parameters:**
- `ptr` (struct student*): Pointer to array of student structures

**Returns:**
- `void`: No return value

**Example:**
```c
struct student students[4];
input_average_grade(students);
// Calculates average for each student
```

### `print_struct` (Student Version)

**File:** `chapter14_ex5_verygood.c`

**Signature:**
```c
void print_struct(struct student *ptr)
```

**Description:**
Prints detailed information for all students including names, grades, and averages.

**Parameters:**
- `ptr` (struct student*): Pointer to array of student structures

**Returns:**
- `void`: No return value

**Example:**
```c
struct student students[4];
print_struct(students);
// Prints: STUDENT : John Doe , GRADES : 85.0 90.0 87.5 , AVERAGE_GRADE: 87.50
```

### `print_struct` (Medicine Version)

**File:** `chapter14_ex4.c`

**Signature:**
```c
void print_struct(struct medicine human)
```

**Description:**
Prints formatted medical record information.

**Parameters:**
- `human` (struct medicine): Medical record structure

**Returns:**
- `void`: No return value

**Example:**
```c
struct medicine record = {{"John", "M", "Smith"}, 12345};
print_struct(record);
// Output: Smith , John M. -- 12345
```

---

## Macros

### `MAX(X,Y)`

**File:** `chapter16_macroses.c`

**Description:**
Returns the maximum of two values.

**Parameters:**
- `X`: First value
- `Y`: Second value

**Returns:**
The larger of the two values.

**Example:**
```c
int result = MAX(10, 20);  // result = 20
```

### `EVEN_GT(X,Y)`

**File:** `chapter16_macroses.c`

**Description:**
Checks if X is even and greater than Y.

**Parameters:**
- `X`: First value to check
- `Y`: Second value for comparison

**Returns:**
1 if X is even and greater than Y, 0 otherwise.

**Example:**
```c
int result = EVEN_GT(6, 3);  // result = 1
int result2 = EVEN_GT(5, 3); // result2 = 0
```

### `MACROS(X,Y)`

**File:** `chapter16_macroses.c`

**Description:**
Prints the names and values of two variables.

**Parameters:**
- `X`: First variable
- `Y`: Second variable

**Example:**
```c
int a = 5, b = 10;
MACROS(a, b);  // Output: a=5 и b=10
```

### `CONSTANTA`

**File:** `chapter16_macroses.c`

**Description:**
Defines a constant value of 25.

**Example:**
```c
int value = CONSTANTA;  // value = 25
```

### `SPACE`

**File:** `chapter16_macroses.c`

**Description:**
Defines a space character constant.

**Example:**
```c
char c = SPACE;  // c = ' '
```

### `PS()`

**File:** `chapter16_macroses.c`

**Description:**
Prints a space character.

**Example:**
```c
PS();  // Prints a space
```

### `BIG(X)`

**File:** `chapter16_macroses.c`

**Description:**
Adds 3 to the given value.

**Parameters:**
- `X`: Value to add 3 to

**Returns:**
X + 3

**Example:**
```c
int result = BIG(5);  // result = 8
```

### `SUMSQ(X,Y)`

**File:** `chapter16_macroses.c`

**Description:**
Calculates the sum of squares of two values.

**Parameters:**
- `X`: First value
- `Y`: Second value

**Returns:**
X² + Y²

**Example:**
```c
int result = SUMSQ(3, 4);  // result = 25
```

### `PRINTINT(X)`

**File:** `chapter16_macroses.c`

**Description:**
Prints the name, value, and address of an integer variable.

**Parameters:**
- `X`: Integer variable to print information about

**Example:**
```c
int num = 42;
PRINTINT(num);  // Output: NAME: num; VALUE: 42 ; ADDRESS: 0x7fff5fbff6ac
```

### `TYPEOF(X)`

**File:** `chapter16_macroses.c`

**Description:**
Returns a string describing the type of the variable (boolean or not boolean).

**Parameters:**
- `X`: Variable to check type of

**Returns:**
"boolean" if X is bool, "not boolean" otherwise.

**Example:**
```c
bool flag = true;
int num = 5;
printf("%s\n", TYPEOF(flag));  // Output: boolean
printf("%s\n", TYPEOF(num));   // Output: not boolean
```

### `SRGARMN(X,Y)`

**File:** `chapter16_macroses.c`

**Description:**
Calculates the harmonic mean of two values.

**Parameters:**
- `X`: First value
- `Y`: Second value

**Returns:**
Harmonic mean: 2 / (1/X + 1/Y)

**Example:**
```c
double result = SRGARMN(4, 5);  // result ≈ 4.444
```

---

## File I/O Operations

The codebase includes several programs that handle file I/O operations:

### Text File Comparison

**File:** `diff.c`

**Description:**
Contains utilities for comparing text files and working with file pointers.

**Usage:**
Used for demonstrating pointer operations with file structures and text processing.

---

## Calculator Functions

### Basic Calculator Operations

**File:** `chapter8_ex8.c`

**Description:**
Interactive calculator program with input validation.

**Operations:**
- Addition (`+`)
- Subtraction (`-`)
- Multiplication (`*`)
- Division (`/`)

**Features:**
- Input validation for numeric values
- Division by zero protection
- Interactive menu system
- Error handling for invalid inputs

**Example Usage:**
```
Choose operation:
a. addition    s. subtraction
m. multiplication    d. division
e. exit

Enter first number: 10.5
Enter second number: 2.5
10.50 + 2.50 = 13.00
```

---

## Constants and Configuration

### Size Constants

Various files define size constants for arrays and buffers:

- `SIZE 100` - Used in multiple files for array sizing
- `MAX_SIZE 1024` - Maximum buffer size for string operations
- `CSIZE 4` - Class size for student records

---

## Error Handling

The codebase includes several error handling patterns:

1. **Input Validation**: Functions validate numeric input and handle invalid data
2. **Division by Zero**: Calculator functions check for zero divisors
3. **Buffer Bounds**: String operations respect buffer limits
4. **Memory Safety**: Proper array bounds checking in matrix operations

---

## Usage Examples

### Complete Matrix Processing Example

```c
#include <stdio.h>

// Function declarations from chapter10_ex14.c
double max_in_matrix(int N, int M, double arr[N][M]);
double average_for_all(int N, int M, double arr[N][M]);
void printresults(int N, int M, double arr[N][M]);

int main() {
    double matrix[3][3] = {
        {1.0, 2.0, 3.0},
        {4.0, 5.0, 6.0},
        {7.0, 8.0, 9.0}
    };
    
    // Print comprehensive results
    printresults(3, 3, matrix);
    
    return 0;
}
```

### String Processing Example

```c
#include <stdio.h>

// Function declarations from chapter11_ex11.c
void print_by_whole_lenght(char arr[][100], int rows);
int length_of_first_word(char *arr);

int main() {
    char strings[3][100] = {"Hello world", "Hi", "Programming"};
    
    // Sort and print by length
    print_by_whole_lenght(strings, 3);
    
    // Get first word length
    int len = length_of_first_word("Hello world");
    printf("First word length: %d\n", len);
    
    return 0;
}
```

### Student Management Example

```c
#include <stdio.h>

// Structures and functions from chapter14_ex5_verygood.c
struct name {
    char first_name[40];
    char last_name[40];
};

struct student {
    struct name n;
    float grade[3];
    float average_grade;
};

void input_average_grade(struct student *ptr);
void print_struct(struct student *ptr);

int main() {
    struct student students[2] = {
        {{"John", "Doe"}, {85.0, 90.0, 87.5}, 0},
        {{"Jane", "Smith"}, {92.0, 88.0, 95.0}, 0}
    };
    
    // Calculate averages
    input_average_grade(students);
    
    // Print results
    print_struct(students);
    
    return 0;
}
```

---

## Compilation Instructions

To compile any of the individual programs:

```bash
gcc -o program_name source_file.c
```

For programs using mathematical functions:
```bash
gcc -o program_name source_file.c -lm
```

For programs with specific C standard requirements:
```bash
gcc -std=c99 -o program_name source_file.c
```

---

## Notes

1. **Memory Management**: Most functions assume properly allocated memory and valid array bounds.
2. **Input Validation**: User input functions include basic validation but may need additional error checking for production use.
3. **Localization**: Many programs include Russian text prompts and messages.
4. **Portability**: Code follows standard C conventions and should compile on most C99-compliant compilers.
5. **Thread Safety**: Functions are not thread-safe and should not be used in multi-threaded contexts without proper synchronization.

---

This documentation covers all public APIs, functions, and components found in the C programming exercises codebase. Each function includes complete signatures, parameter descriptions, return values, and practical examples for immediate use.