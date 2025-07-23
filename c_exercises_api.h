#ifndef C_EXERCISES_API_H
#define C_EXERCISES_API_H

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include <stdarg.h>

/*
 * C Programming Exercises API Header
 * 
 * This header file consolidates all public APIs, functions, and components
 * from the C programming exercises codebase.
 * 
 * For detailed documentation, see API_DOCUMENTATION.md
 * For quick reference, see QUICK_REFERENCE.md
 */

// =============================================================================
// CONSTANTS AND MACROS
// =============================================================================

// Size constants
#define SIZE 100
#define MAX_SIZE 1024
#define CSIZE 4

// Utility macros from chapter16_macroses.c
#define MAX(X,Y) ((X) > (Y) ? (X) : (Y))
#define EVEN_GT(X,Y) (((X) % 2 == 0) && ((X) > (Y)) ? 1 : 0)
#define MACROS(X,Y) (printf(#X "=%d и "#Y "=%d", X, Y))
#define CONSTANTA 25
#define SPACE ' '
#define PS() printf(" ")
#define BIG(X) (3 + (X))
#define SUMSQ(X,Y) (((X) * (X)) + ((Y) * (Y)))
#define PRINTINT(X) printf("NAME: " #X "; VALUE: %d ; ADDRESS: %p ", X, &X)
#define TYPEOF(X) _Generic((X), _Bool : "boolean", default : "not boolean")
#define SRGARMN(X,Y) ((2.0) / ((1.0/(X)) + (1.0/(Y))))

// =============================================================================
// DATA STRUCTURES
// =============================================================================

// Student management structures (chapter14_ex5_verygood.c)
struct name {
    char first_name[40];
    char last_name[40];
};

struct student {
    struct name n;
    float grade[3];
    float average_grade;
};

// Medical records structures (chapter14_ex4.c)
struct person {
    char firstname[20];
    char surname[20];
    char lastname[20];
};

struct medicine {
    struct person persona;
    int card_number;
};

// Literary character structures (diff.c)
struct fullname {
    char fname[20];
    char lname[20];
};

struct bard {
    struct fullname name;
    int born;
    int died;
};

// =============================================================================
// MATRIX OPERATIONS (chapter10_ex14.c)
// =============================================================================

/**
 * @brief Find the maximum value in a 2D matrix
 * @param N Number of rows
 * @param M Number of columns
 * @param arr 2D matrix array
 * @return Maximum value in the matrix
 */
double max_in_matrix(int N, int M, double arr[N][M]);

/**
 * @brief Calculate the average of all elements in a 2D matrix
 * @param N Number of rows
 * @param M Number of columns
 * @param arr 2D matrix array
 * @return Average of all matrix elements
 */
double average_for_all(int N, int M, double arr[N][M]);

/**
 * @brief Calculate the average of elements in a 1D array
 * @param arr Array of double values
 * @param M Number of elements
 * @return Average of array elements
 */
double average(double arr[], int M);

/**
 * @brief Print row averages, overall average, and maximum value of a matrix
 * @param N Number of rows
 * @param M Number of columns
 * @param arr 2D matrix array
 */
void printresults(int N, int M, double arr[N][M]);

// =============================================================================
// STRING PROCESSING (chapter11_ex11.c)
// =============================================================================

/**
 * @brief Print all strings in a 2D character array
 * @param arr Array of strings
 * @param rows Number of strings
 */
void print_strings(char arr[][100], int rows);

/**
 * @brief Calculate the length of the first word in a string
 * @param arr Pointer to the string
 * @return Length of the first word
 */
int length_of_first_word(char *arr);

/**
 * @brief Sort and print strings by total length in ascending order
 * @param arr Array of strings to sort
 * @param rows Number of strings
 */
void print_by_whole_lenght(char arr[][100], int rows);

/**
 * @brief Sort and print strings by first word length in ascending order
 * @param arr Array of strings to sort
 * @param rows Number of strings
 */
void print_by_first(char arr[][100], int rows);

/**
 * @brief Compare two strings lexicographically
 * @param str1 First string
 * @param str2 Second string
 * @return Length of the lexicographically larger string
 */
int ascii_compare(char *str1, char *str2);

/**
 * @brief Sort and print strings in ASCII lexicographical order
 * @param arr Array of strings to sort
 * @param rows Number of strings
 */
void print_by_ascii_compare(char arr[][100], int rows);

// =============================================================================
// MATHEMATICAL FUNCTIONS
// =============================================================================

/**
 * @brief Check if a number is prime (chapter7_ex9.c)
 * @param num Number to check
 * @return true if prime, false otherwise
 */
bool isPrime(int num);

/**
 * @brief Comparison function for qsort (descending order) (chapter16_macroses.c)
 * @param p1 Pointer to first element
 * @param p2 Pointer to second element
 * @return -1 if first > second, 0 if equal, 1 if first < second
 */
int comp(const void *p1, const void *p2);

/**
 * @brief Sum a variable number of integers (chapter16_macroses.c)
 * @param num Number of arguments
 * @param ... Variable number of integers
 * @return Sum of all integers
 */
int sum(int num, ...);

// =============================================================================
// UTILITY FUNCTIONS
// =============================================================================

/**
 * @brief Print all elements of an integer array (chapter16_macroses.c)
 * @param ptr Pointer to the array
 * @param size Number of elements
 */
void print_array(const int *ptr, int size);

/**
 * @brief Input grades for students (chapter14_ex5_verygood.c)
 * @param ptr Pointer to array of student structures
 */
void input_student_grades(struct student *ptr);

/**
 * @brief Calculate and store average grades for students (chapter14_ex5_verygood.c)
 * @param ptr Pointer to array of student structures
 */
void input_average_grade(struct student *ptr);

/**
 * @brief Print student information (chapter14_ex5_verygood.c)
 * @param ptr Pointer to array of student structures
 */
void print_struct_student(struct student *ptr);

/**
 * @brief Print medical record information (chapter14_ex4.c)
 * @param human Medical record structure
 */
void print_struct_medicine(struct medicine human);

// =============================================================================
// FUNCTION POINTER DECLARATIONS (diff.c)
// =============================================================================

/**
 * @brief Function pointer type for mathematical operations
 * @param x First parameter
 * @param y Second parameter
 * @return Result of operation
 */
typedef double (*math_func_ptr)(double x, double y);

// Example function declarations for function pointer usage
double func1(double x, double y);
double func2(double x, double y);
double func3(double x, double y);
double func4(double x, double y);

// =============================================================================
// USAGE EXAMPLES (as inline functions for demonstration)
// =============================================================================

/**
 * @brief Example usage of matrix operations
 */
static inline void example_matrix_operations(void) {
    double matrix[3][3] = {{1.0, 2.0, 3.0}, {4.0, 5.0, 6.0}, {7.0, 8.0, 9.0}};
    
    double max = max_in_matrix(3, 3, matrix);
    double avg = average_for_all(3, 3, matrix);
    
    printf("Matrix maximum: %.2f\n", max);
    printf("Matrix average: %.2f\n", avg);
    
    printresults(3, 3, matrix);
}

/**
 * @brief Example usage of string processing
 */
static inline void example_string_processing(void) {
    char strings[3][100] = {"Hello world", "Hi", "Programming"};
    
    printf("Original strings:\n");
    print_strings(strings, 3);
    
    printf("Sorted by length:\n");
    print_by_whole_lenght(strings, 3);
    
    int first_word_len = length_of_first_word("Hello world");
    printf("First word length: %d\n", first_word_len);
}

/**
 * @brief Example usage of mathematical functions
 */
static inline void example_math_functions(void) {
    // Check prime numbers
    for (int i = 2; i <= 20; i++) {
        if (isPrime(i)) {
            printf("%d is prime\n", i);
        }
    }
    
    // Use macros
    int result = MAX(10, 20);
    printf("Maximum of 10 and 20: %d\n", result);
    
    int sum_squares = SUMSQ(3, 4);
    printf("Sum of squares of 3 and 4: %d\n", sum_squares);
    
    // Variable argument sum
    int total = sum(5, 1, 2, 3, 4, 5);
    printf("Sum of 1,2,3,4,5: %d\n", total);
}

/**
 * @brief Example usage of student management
 */
static inline void example_student_management(void) {
    struct student students[2] = {
        {{"John", "Doe"}, {85.0, 90.0, 87.5}, 0},
        {{"Jane", "Smith"}, {92.0, 88.0, 95.0}, 0}
    };
    
    // Calculate averages
    input_average_grade(students);
    
    // Print results
    print_struct_student(students);
}

// =============================================================================
// COMPILATION HELPERS
// =============================================================================

/*
 * Compilation instructions:
 * 
 * Basic compilation:
 *   gcc -o program file.c
 * 
 * With math library:
 *   gcc -o program file.c -lm
 * 
 * With C99 standard:
 *   gcc -std=c99 -o program file.c
 * 
 * All features:
 *   gcc -std=c99 -Wall -Wextra -o program file.c -lm
 */

#endif /* C_EXERCISES_API_H */