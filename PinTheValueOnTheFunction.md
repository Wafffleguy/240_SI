# CSCI 240 - Supplemental Instruction

For this activity, we will be filling in the blanks for the example functions based on the functions 
- Description
- Local Variables
- Header


### Example:

```C++
//This function should take in a number, divide it by 3, add 4, and return the new number

___ example(int ___){
    int return_variable = num;
    return_variable = return_variable / ___;
    return_variable = return_variable + ___;

    return ___;
}
```

Solution:

```C++
int example(int num){
    int return_variable = num;
    return_variable = return_variable / 3;
    return_variable = return_variable + 4;

    return return_variable;
}
```

---


### Function 1

For this function, we are going to output some lines. We will take in three things, a character to make the lines with, the number of lines to output, and the size of each line. For example, the call 
```C++
function1('%', 2, 10);
```
outputs
```
%%%%%%%%%%
%%%%%%%%%%
```
In other words, $2$ lines of $10$ % signs. 

Your starter function is:

```C++
void function1(___ sign, ___ line_num, int ____){
    for (int i = 0; i < line_num; i++){

        for (int j = 0; j < line_size; j++){
            ___ << sign;
        }

    }
    cout << endl;
}

```


### Function 2

For our second function, we want to make a menu. We want to keep asking the same question until we get a good response, and then return the answer to that question. We will be inputting the question, and the selection of answers, as parameters. There will only be 4 possible answers to any question for simplicity. The call 
```C++
char ans = function2("Do you like A: apples, B: bananas, O: oranges, or L: limes?", 'B', 'A', 'O', 'L');
```
outputs
```
Do you like A: apples, B: bananas, O: oranges, or L: limes? ___
```
And will return either A, B, O, or L. 

Your starter function is:

```C++
____ function2(___ question, ___ opt1, ___ opt2, ___ opt3, char ___){
    ___ answer;

    cout << question;
    cin >> answer;
    while (answer != opt1 __ answer != opt2 __ answer != opt3 __ answer != opt4){
        cout << ___;
        cin >> __;
    }

    return ___;
    
}

```


---

### Function 3

For the third (and final) function, we will be using the menu function above to make a small calculator. It will take in input from the user and use that to perform a calculation. For example, the function call
```C++
function3();
```
will output 
```
Which operation? (+, -, /, *): ___
First number: ___
Second number: ___
Result: ___
```
Here is our function. 
```C++
___ function3(){
    char operation;
    ___ num1, num2;
    int result;
    operation = function2("______", '___', '___', '___', '___');
    cout << "First number: ";
    cin >> ___;
    cout << "_____";
    cin >> ___;

    if (operation == '__'){
        result = num1 + num2;
    }
    else if (operation == '__'){
        result = num1 - num2;
    } 
    else if (operation == '__'){
        result = num1 * num2;
    }
    else if (operation == '__'){
        result = num1 / num2;
    }
    cout << "Result: " << result << endl;

}

```