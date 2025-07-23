# Quick Reference Guide

## Function Index

### Matrix Operations
| Function | File | Purpose |
|----------|------|---------|
| `max_in_matrix(N, M, arr)` | chapter10_ex14.c | Find maximum value in 2D matrix |
| `average_for_all(N, M, arr)` | chapter10_ex14.c | Calculate average of all matrix elements |
| `average(arr, M)` | chapter10_ex14.c | Calculate average of 1D array |
| `printresults(N, M, arr)` | chapter10_ex14.c | Print row averages, total average, and max |

### String Processing
| Function | File | Purpose |
|----------|------|---------|
| `print_strings(arr, rows)` | chapter11_ex11.c | Print all strings in array |
| `length_of_first_word(arr)` | chapter11_ex11.c | Get length of first word |
| `print_by_whole_lenght(arr, rows)` | chapter11_ex11.c | Sort and print by total length |
| `print_by_first(arr, rows)` | chapter11_ex11.c | Sort and print by first word length |
| `ascii_compare(str1, str2)` | chapter11_ex11.c | Compare strings lexicographically |
| `print_by_ascii_compare(arr, rows)` | chapter11_ex11.c | Sort and print by ASCII order |

### Mathematical Functions
| Function | File | Purpose |
|----------|------|---------|
| `isPrime(num)` | chapter7_ex9.c | Check if number is prime |
| `comp(p1, p2)` | chapter16_macroses.c | Comparison function for qsort (descending) |
| `sum(num, ...)` | chapter16_macroses.c | Sum variable number of integers |

### Utility Functions
| Function | File | Purpose |
|----------|------|---------|
| `print_array(ptr, size)` | chapter16_macroses.c | Print integer array elements |
| `input_student_grades(ptr)` | chapter14_ex5_verygood.c | Input grades for students |
| `input_average_grade(ptr)` | chapter14_ex5_verygood.c | Calculate student averages |
| `print_struct(ptr)` | chapter14_ex5_verygood.c | Print student information |
| `print_struct(human)` | chapter14_ex4.c | Print medical record |

## Data Structures

### Student Management
```c
struct name {
    char first_name[40];
    char last_name[40];
};

struct student {
    struct name n;
    float grade[3];
    float average_grade;
};
```

### Medical Records
```c
struct person {
    char firstname[20];
    char surname[20];
    char lastname[20];
};

struct medicine {
    struct person persona;
    int card_number;
};
```

### Literary Characters
```c
struct fullname {
    char fname[20];
    char lname[20];
};

struct bard {
    struct fullname name;
    int born;
    int died;
};
```

## Macros Quick Reference

| Macro | Purpose | Example |
|-------|---------|---------|
| `MAX(X,Y)` | Return maximum of two values | `MAX(5, 10)` → 10 |
| `EVEN_GT(X,Y)` | Check if X is even and > Y | `EVEN_GT(6, 3)` → 1 |
| `SUMSQ(X,Y)` | Sum of squares | `SUMSQ(3, 4)` → 25 |
| `SRGARMN(X,Y)` | Harmonic mean | `SRGARMN(4, 5)` → 4.444 |
| `BIG(X)` | Add 3 to value | `BIG(5)` → 8 |
| `PRINTINT(X)` | Print variable info | Shows name, value, address |
| `TYPEOF(X)` | Get type string | "boolean" or "not boolean" |
| `PS()` | Print space | Outputs a space character |

## Constants

| Constant | Value | Usage |
|----------|-------|-------|
| `CONSTANTA` | 25 | General constant |
| `SPACE` | ' ' | Space character |
| `SIZE` | 100 | Array sizing (various files) |
| `MAX_SIZE` | 1024 | Buffer size |
| `CSIZE` | 4 | Class size |

## Common Usage Patterns

### Matrix Processing
```c
double matrix[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
double max = max_in_matrix(3, 3, matrix);
double avg = average_for_all(3, 3, matrix);
printresults(3, 3, matrix);
```

### String Sorting
```c
char strings[3][100] = {"Hello", "Hi", "Programming"};
print_by_whole_lenght(strings, 3);  // Sort by length
print_by_ascii_compare(strings, 3); // Sort alphabetically
```

### Prime Number Check
```c
for (int i = 1; i <= 100; i++) {
    if (isPrime(i)) {
        printf("%d is prime\n", i);
    }
}
```

### Student Management
```c
struct student students[4];
input_student_grades(students);
input_average_grade(students);
print_struct(students);
```

## Compilation Commands

```bash
# Basic compilation
gcc -o program file.c

# With math library
gcc -o program file.c -lm

# With C99 standard
gcc -std=c99 -o program file.c
```

## File Organization

- **Chapter 6-7**: Basic functions and prime numbers
- **Chapter 8**: Calculator with input validation
- **Chapter 10**: Matrix operations
- **Chapter 11**: String processing and sorting
- **Chapter 12-13**: Advanced string operations
- **Chapter 14**: Structures and data management
- **Chapter 16**: Macros and advanced features
- **diff.c**: Pointer demonstrations and structures