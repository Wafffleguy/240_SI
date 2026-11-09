# Exam 2 Review - CSCI 240

---

The following will be multiple choice questions regarding Exam 2 content for CSCI 240. 

## Part One: Arrays

Use the array declaration below to answer questions `1-3`. 
```C++
int a [10] = {1};
```

### Question One:

Which of the following is an invalid index for the array `a`? Mark all that apply. 

- Index $0$
- Index $5$
- Index $10$
- Index $1 + 2$

### Question Two:
Which of the following is an invalid assignment for the array `a`? Mark all that apply. 


```C++
a[0] = 12;
```

```C++
int g = 4;
a[g] = 200000;
```

```C++
a[1.5] = 15;
```

```C++
a[9] = 1.01;
```

### Question Three:
Which data type could `a` store? Mark all that apply.
- `char`
- `float`
- `double`
- `int`

### BONUS (short answer):
Could `a` contain character values? 


## Part Two: Functions

### Question One:
A function header must match the prototype in 
- Function name, return type, parameter type, parameter order
- Return type, parameter names, parameter types
- Function name, parameter names, parameter order, parameter type
- Function name, return type, parameter name, parameter type

### Question Two:

For the following function prototype, what is the matching function header? Choose all that apply. 

#### Prototype:
```C++
void function1(int a, int& b, char c);
```

#### Header One:
```C++
void function2(int a, int& b, char c);
```

#### Header Two:
```C++
void function1(int& a, int b, char c);
```

#### Header Three:
```C++
void function1(int apple, int& bananas, char citrus);
```

### Question Three:


Given the below function definition and function call, what are the values of `a`, `b`, `c`, and `d`?

#### Function Definition
```C++
int Function(int a, int b, int& c){
    for (int i = 0; i < b; i++){
        a *= a;
    }
    c = a + b;
    return c;
}
```

#### Function Call
```C++
int a = 10; 
int b = 3;
int c = 1;
int d = Function(a, b, c);
```

- `a = 10`, `b = 3`, `c = 1003`, `d = 1003`
- `a = 1000`, `b = 3`, `c = 1003`, `d = 1003`
- `a = 10`, `b = 3`, `c = 1`, `d = 1003`
- `a = 1000`, `b = 3`, `c = 1`, `d = 1003`


---

## Part Three: Sorting and Characters

### Question One:
Using selection sort on the below array `A` in **Ascending Order**, what is the output? (In other words, what is the order of the characters below from lowest ASCII value to greatest?)

```C++
char A = {a, b, A, c, Z, B, 0, 2, 9, K, p}
```

- `A = {0, 2, 9, A, B, K, Z, a, b, c, p}`
- `A = {A, a, B, b, c, K, p, Z, 0, 2, 9}`
- `A = {0, 2, 9, a, A, b, B, c, K, p, Z}`
- Selection sort does not work on characters.

---

## Part Four: Characters and Character Functions

### Question One:

Which of the following changes a `char` named `A` to its uppercase counterpart? 

- `toUpper(A)`
- `toLower(A)`
- `toupper(A)`
- `toupper()`

### Question Two: 

Which of the following checks if a `char` called `A` is holding one of the digits $0 \to 9$? 

- `IsDigit(A)`
- `isdigit`
- `isdigit(A)`
- `isNUM(A)`

### Question Three:

The character array below is converted to its ASCII values by a function called `void ConvertASCII(char a[], int b[])`, which stores the ASCII values in `b`. Which of the following is the result of that function call?

```C++
char A [8] = {'A', 'B', 'c', 'd', '0', '9', '6', ' '};
int B [8] = {0} 
ConvertASCII(A, B);
```

- `B = {65, 66, 99, 100, 48, 57, 54, 32}`
- `B = {0, 0, 0, 0, 0, 0, 0, 0}`
- `B = {97, 98, 67, 68, 48, 57, 54, 32}`

---

