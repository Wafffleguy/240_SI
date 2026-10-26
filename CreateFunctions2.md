# CSCI 240 - Supplemental Instruction


Often times in Computer Science you are not given explicit definitions or instructions on how to create functions. This will be an exercise related to that phenomenon. You will be given 

1. Function Parameters
2. Function Return Type
3. Function Description

and you must create the body of your function. Your function should work in a normal `C++` program, and you should have some test cases.  


### Example: 

Your function should take in $2$ integers, and return the distance between both numbers. 

```C++
int Distance(int, int);

int main(){
    cout << Distance(5, 10); //should spit out "5".
    return 0;
}

int Distance(int x, int y){
    int Distance = x - y; //Find the distance
    if (Distance < 0){
        Distance *= -1; //If negative, make it positive
    }
    return Distance;
}
```


---

### Function 1:

Your function should take in $2$ integers, $A$ and $B$, and return $A^B$.

Example:

```
Parameters: 
       A -> 2
       B -> 3

Returns: 8
```

---

### Function 2:

Your function should take in an array of `floats`, as well as the length of the array, and return the average. 

```
Parameters: 
       array -> [1, 2.5, 3.5, 2.1]
       size  -> 4

Returns: 3.033333....
```

---

### Function 3:

Your function should take in a string containing a question, as well as $2$ characters. As long as the response is between those two characters, return the response. Otherwise ask the question again. 

```
Parameters: 
      question   -> "What is a letter between A and Z?"
      characters -> A, Z

Returns: char between A and Z
```

---

### Function 4:

Your function should take in an array, and a value to search for. It should return true if the value exists, and false if it does not. 

```
Parameters:
      array -> [1, 2, 3, 4]
      item  -> [2]

Returns: True
```

---

### Function 5:

Your function should take in two arrays, and return true if they contain the same values **IN THE SAME ORDER**, and false if they are different. 

```
Parameters:
      array_1 -> [3, 4, 5, 6]
      array_2 -> [3, 4, 6, 5]

Returns: True
```