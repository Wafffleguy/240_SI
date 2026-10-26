# CSCI 240 - Supplemental Instruction 

This supplemental instruction will focus on characters, strings, and functions. 

Here are some useful ASCII values (You should memorize some of these):

```
space = 32
digit '0' = 48
digit '9' = 57
'A' = 65
'Z' = 90
'a' = 97
'z' = 122
```

We will be writing a function that 
1. Given an alphabetic character, it shifts each letter $5$ places to the left
2. Given a space, it leaves it alone
3. Given a digit, it multiplies that digit by $5$ and returns the last digit

---


### Part One


Create a function that, when given a character, will shift it alphabetically $5$ places. 

#### Example:

```
A -> F      (65 + 5)
Z -> E      (90 - 21)
```

Big Idea: What makes us add $5$, and what makes us subtract $21$?


---

### Part Two

Create a function that, when given a character representing a digit, shifts the digit into another one in the same way the character function above does. 

#### Example:

```
'0' -> '5'
'9' -> '4'
```

How many different ways can we do this? 

---

### Part Three

Create a function that calls `Part 1` and `Part 2`, and sorts characters to where they should be. 

#### Example:
```C++
char Var1 = Cypher('A')   //returns 'F'
char Var2 = Cypher('4')   //return '9'
```

Is this approach easier, or harder than creating the full function all at once? What was easier, or harder? 


---

### Part Four

Create a function that takes in a `char` array, and prints out the encoded version of the array. For example:


```C++
char array [10] = "Hello World!"
Encode(array);
```

Output:
```
Mjqqt Btwqi!
```

---

### Part Five

Now add in the following code to main: 
```C++
    cout << "What is the size of the message you want to encode? (MAX 100) ";
    cin >> size;
    cout << "What is the message you want to encode? (Size: " << size << ") ";
    cin >> array;
```
What happens when we try the same phrase? Why do you think that happens?
