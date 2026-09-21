# Answer Key to FlowChartConversion.md
---

```C++
int x;
cin >> x;
if (x < 50){
    cout << x << endl;
}
if (x > 30){
    cout << x << endl;
}
if (x < 25){
    cout << x << endl;
}
```
---

```C++
int x;
cin >> x;
while (x > 0){
    if (x > 4){
        if (x < 16){
            cout << x << endl;
        }
    }
    cin >> x;
}
```

---

```C++
int x;
int sum;
cin >> x;
while (x > 0){
    cout << x << endl;
    sum += x;
    cin >> x;
}
cout << sum << endl;
```

---

```C++
int x;
cin >> x;
if (x > 16){
    while (x > 20){
        x--;
    }
    cout << x << endl;
} else{
    for (int i = 0; i < 5; i++){ //could also be x+=5;
        x++;
    }
    cout << x;
}
```