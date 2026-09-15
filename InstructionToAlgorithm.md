# CSCI 240 - Supplemental Instruction
### Instructions To Algorithms

---

Given the set of instructions below, convert them into steps. Then, convert these steps into `C++` code. 

### Example:

If an input integer is greater than $50$, I would like to output that integer. If an input is less than $50$, I would like to output the remainder of the input divided by $12$. 

### Step One: Convert to Steps

1. Declare variables
2. Get input information into some integer variable
3. Check if the integer is greater than, or less than $50$. 
   1. If it is greater than $50$, output it
   2. If it is less than $50$, find the remainder of it divided by 12, and then output that


### Step Two: Convert to Code

```C++
int x; //declare my variables
cin >> x; //input information into the variable
if (x > 50){ 
    cout << x; //output x
} else {
    cout << (x % 12); //output the remainder of x/12
}
```



---

### Problem 1:

Convert the following to instructions, and then `C++` code. 

If an input character is a 'y' or 'Y', I want the program to output "good job!". If an input character is 'n' or 'N', I want the program to output "Oh No!"

---

### Problem 2:

Convert the following to instructions, and then `C++` code.

If an input integer is even, I want the program to output "This is even!". If the input integer is ALSO divisible by three, I want it to output "This is a multiple of 3!". Otherwise, output "This is neither!"


