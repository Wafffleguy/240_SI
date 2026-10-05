# CSCI 240 - Supplemental Instruction


For the following `if-else` statements, convert them to `switch` statements.



### Problem 1
```C++
int x;
cin >> x;
if (x == 100){
    cout << "X is 100";
} else {
    cout << "X is not 100";
}
```
### Problem 2
```C++
int x,y;
cin >> x;
cin >> y;
if (x - y == 100){
    cout << "X and Y are exactly 100 units away from each other.";
} else if (x == 50){
    cout << "X is 50";
} else if (y == 100){
    cout << "Y is 100";
}
```
### Problem 3
```C++
char Ans;
cin >> Ans;
if (Ans == 'a'){
    cout << Ans;
} else if (Ans == 'b'){
    cout << Ans;
} else if (Ans == 'c'){
    cout << Ans;
} else{
    cout << "Ans was not a, b, or c";
}
```

---

For the following `switch` statements, convert the code to `if-else` statements.

### Problem 1
```C++
char Grade;
switch(Grade){
    case: 'A'
        cout << "You Pass!";
        break;
    case: 'B'
        cout << "You Pass!";
        break;
    case: 'C'
        cout << "You Pass!";
        break;
    default:
        cout << "You Fail!";
        break;
}
```

### Problem 2
```C++
char Grade;
switch(Grade){
    case: 'A'
    case: 'B'
    case: 'C'
        cout << "You Pass!";
        break;
    default:
        cout << "You Fail!";
        break;
}
```


---

### Deep Question: Why would you want to use a switch statement over an if-else statement, and vice verse?
