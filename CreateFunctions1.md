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


### Function 1

Your function should take in a string containing a question, and $4$ acceptable answers as characters. It should return the answer to that question in the form of a character. 


### Function 2

Your function should use function 2 to create a calculator menu with Addition, Subtraction, Multiplication, and Division (not modulus division). Your function should output the results of the calculation, but return nothing. It should also take in nothing.

### Function 3

Your function should take in five numbers, and return the `minimum` value. Create a second function that returns the `maximum` value. 

### Function 4

Your function should take in a string with a question, and two integers containing the upper and lower bound. It should return a response that is within those bounds, or keep asking the question. 

### Function 5

Your function should take in $5$ floats, and use function 1 to ask if it should take the Mean, Median, Mode, or do nothing. It should return the appropriate value, or $0$ if nothing was done. 