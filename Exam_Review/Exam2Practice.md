# Exam 2 Review - CSCI 240

---

## Part One: Arrays

1. Create an array that can hold 40 characters, initialized to spaces. Fill in your first name in the first 20 characters, and your last name in the second 20 characters. Output the array on one line. 

2. Create an array of 20 numbers, and fill in the places in the array using the formula `A[i] = A[i-1] + A[i-2]`. Output every odd index of the array on its own line. Then, output the entire array in reverse order. 

3. Create an array of 30 random numbers, and sort them with Selection Sort. Output the original array and the array after sorting on separate lines, with each value separated by a comma. 


## Part Two: Functions with Arrays

1. Convert all of the above code into separate functions. The functions should only return `void`. 

2. Create a function that returns the ASCII value of input characters. 

## Part Three: Characters

Convert all the characters below into their ASCII value.

```
A, B, 0, t, T, M, n, o, q, 1, 2
```

Convert all the ASCII values below to characters.
```
32, 50, 70, 80, 65, 90, 100, 110
```

1. Which C++ function converts a character to an uppercase character? 

2. Which C++ function checks if a character is a number or not?

3. Which C++ function converts a character to its lowercase version? 

## Part Four: Switch statements

1. Create a switch statement that uses a character to check cases. If the character is a `Y` or `y`, output "OKAY". If the character is a `N` or `n`, output "NOT OKAY". Otherwise output "INVALID". 

## Part Five: Functions with References

1. Write a function named `Func1`, which takes in two integers, and a reference to an integer, and returns nothing. It should add the two non-reference integers, and store the result in the referenced integer. 
