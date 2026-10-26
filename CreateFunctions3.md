# CSCI 240 - Supplemental Instruction


Often times in Computer Science you are not given explicit definitions or instructions on how to create functions. This will be an exercise related to that phenomenon. You will be given 

1. Function Parameters
2. Function Return Type
3. Function Description

and you must work together to create the body of your function. Your function should work in a normal `C++` program, and you should have some test cases.  


### Example: 

Your function should take in an array of integers, as well as the size of the array, and return the largest distance between any two integers. 

```C++
int Distance(int [], int);

int main(){
    cout << Distance(5, 10); //should spit out "5".
    return 0;
}

int Distance(int input [], int size){
    int max_distance = 0;
    int current_distance;
    for (int i = 0; i < size; i++){

        for (int j = i; j < size; j++){
//get the current distance
            current_distance = input[i] - input[j]
//if the distance is negative, make it positive
            if (current_distance < 0){ 
                current_distance *= -1;
            }
//If our current distance is the largest so far, 
//we will make it the new maximum distance
            if (current_distance > max_distance){
                max_distance = current_distance;
            }

        }
    }

    return max_distance;
}
```
---

### Function 1

This function must take in an array of doubles, an integer with the size of the array, and fill that array with input values, and then do two things:
1. At the last position of the array, insert the **average** of those values
2. Return the number of doubles inserted into the array

```
Parameters: 
      array -> [0, 0, 0, 0, ..., 0, 0]

Returns: 
      array -> [1, 2.3, ..., Avg]  //NOTE: This will not actually be returned
      size  -> # of doubles added
```

---

### Function 2

This function must take in two character arrays, as well as their size, and make sure they contain the same values. If they do, return $0$. Otherwise return the number of different values in the arrays. Once you have this part working, try outputting to terminal (through `cout`) an array containing the different letters separated by a space. 
```
Parameters:
      array_1 -> "Hello World!"
      array_2 -> "World World!"

Returns: 
      difference -> 5
      letters -> "WH oe rl ll do"
```


---

### Function 3

This function must take in two characters, and return the distance between them. It should output to the terminal (This is what `cout` does) two things:
1. The two characters, clearly labeled
2. The distance between them, clearly labeled
3. The distance from those characters to the letter 'A'

```
Parameters:
      char_1 -> 'M'
      char_2 -> 'P'

Returns:
      dist   -> 3

Outputs:

"The first character is: M"
"The second character is: P"
"The distance between them is: 3"
"The distance from M -> A is: 12"
"The distance from P -> A is: 15"
```



