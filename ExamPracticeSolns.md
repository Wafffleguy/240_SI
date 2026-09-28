# Answer Key

### 1.1


For loop:
```C++
int sum = 0;
for (int i = 1; i <= 25; i++){
    std::cout << i << std::endl;
    sum += i;
}
std::cout << sum << endl;
```
While loop:
```C++
int sum = 0;
int i = 1;
while (i <= 25){
    std::cout << i << std::endl;
    sum += i;
    i++;
}
std::cout << sum << std::endl;
```

Do While loop:
```C++
int sum = 0;
int i = 1;
do {
    std::cout << i << std::endl;
    sum += i;
    i++;
} while (i < 25) //note the difference here
```

### 1.2
For loop:
```C++
for (int i = 1; i < 100; i++){
    if (i < 50){
        if (i % 3 == 0){
            std::cout << i << std::endl;
        }
    } else {
        if (i % 7 == 0){
            std::cout << i << std::endl;
        }
    }
}
```

While loop:
```C++
int i = 1;
while (i <= 100){
    if (i < 50){
        if (i % 3 == 0){
            std::cout << i << std::endl;
        }
    } else {
        if (i % 7 == 0){
            std::cout << i << std::endl;
        }
    }
    i++;
}
```

Do-While loop:
```C++
int i = 1;
do{
    if (i < 50){
        if (i % 3 == 0){
            std::cout << i << std::endl;
        }
    } else {
        if (i % 7 == 0){
            std::cout << i << std::endl;
        }
    }
    i++;
}while (i < 100)
```

### 1.3
For loop:
```C++
char entry;
for (int i = 0; i != 1; i++){
    std::cin >> entry;
    if (entry != 'Q'){
        std::cout << entry << std::endl;
        i--;
    }
}
```

While Loop:
```C++
char entry;
std::cin >> entry;
while (entry != 'Q'){
    std::cout << entry << std::endl;
    std::cin >> entry;
}
```

Do-While Loop:
```C++
char entry;
do{
    std::cin >> entry;
    std::cout << entry << std::endl;
}while (entry != 'Q')
```

---


### 2.1
```C++
int x;
std::cin >> x;
if (x > 25){
    x -= 10;
    std::cout << x << endl;
} else{
    x += 10;
    std::cout << x << endl;
}
```

### 2.2
```C++
char input;
std::cin >> input;
if (input == 'y'){
    std::cout << "Congratulations!" << std::endl;
} else if (input == 'Y'){
    std::cout << "Congratulations!" << std::endl;
} else if (input == 'n'){
    std::cout << "Oh no!" << std::endl;
} else if (input == 'N'){
    std::cout << "Oh no!" << std::endl;
} else {
    std::cout << "Dang." << std::endl;
}
```

### 2.3
```C++
char input;
std::cin >> input;
if (input != 'A'){
    std::cout << 987654321 << std::endl;
} else{
    std::cout << "The Character is A!" << std::endl;
}

//run one of the loops from section 1
```


### 3.1
```C++
char input;
int total = 0;
int integer = 0;
int count = 0;
std::cin >> input;
while (input != 'Q'){
    cin >> integer;
    if (integer < 0){
        total *= integer;
    } else{
        total += integer;
    }
    count++;
}
std::cout << "The total is " << total 
    << ". The number of integers was " << count << std::endl;
```