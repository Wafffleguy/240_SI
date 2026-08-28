# CSCI 240 - SI
### Loops and Conditionals
---

Given these loops and conditions in `C++`, please discuss where/if they terminate within the loop, and how many passes there are before termination. For bonus points, what is the final value of `i`?

```C++
for (int i = 0; i < 30; i++){
    if (i == 25){
        i = 30;
    }
}
```

```C++
while (i != 15){
    i = 0;
    i++;
}
```

```C++
i = 0;
while (i != 50){
    i++;
}
```

```C++
i = 1;
do{
    i++;
} while (i < 1);
```

```C++
for (int j = 0; j < 5; j++){
    for (int i = 0; i < 5; i++){
        if (i == 10){
            j = 10;
        }
    }
}
```

---

For the following conditions, discuss which instructions get executed, and why. 

```C++
int i = 12, j = 25;
if ((i + j) > 30){
    cout << "These are pretty big numbers";
}
else{
    cout << "oh, nevermind.";
}
```

```C++
int i = 1;
if (i){
    cout << "Yay!";
}
else{
    cout << "Nay!";
}
```

```C++
int i = 5; 
i--;
i--;
i--;
i--;
i--;
if (i){
    cout << "It disappeared!";
}
else{
    cout << "It's still there!";
}
```
