# CSCI 240 - Supplemental Instruction

---


Given a set of values, use `Selection Sort` to order the sets. You must order them in both **Ascending** and **Descending** order, and you must write out every step. You may stop when you have a sorted array, although it is important to note that the implementation of selection sort does not stop when sorted. 


### Example (Ascending Order):

```
Array -> [6, 7, 3, 5, 2, 6, 8, 2, 1]       size is 9 elements
Pass 1 (A) -> [1, 7, 3, 5, 2, 6, 8, 2, 6]  Min is at 9
Pass 2 (A) -> [1, 2, 3, 5, 2, 6, 8, 7, 6]  Min is at 8
Pass 3 (A) -> [1, 2, 2, 5, 3, 6, 8, 7, 6]  Min is at 5
Pass 4 (A) -> [1, 2, 2, 3, 5, 6, 8, 7, 6]  Min is at 5
Pass 5 (A) -> [1, 2, 2, 3, 5, 6, 8, 7, 6]  Min is at 9
Pass 6 (A) -> [1, 2, 2, 3, 5, 6, 6, 7, 8]  Min is at 9
```

### Array One

```
A1 -> [12, 3, 4, 1, 52, 6, 100, 24, 3, 1] 
```

### Array Two

```
A2 -> [43, 1, 4, 1, 45, 6, 2, 4, 6, 25, 424]
```

### Array Three 

```
A3 -> [121, 4, 9, 16, 81, 49, 64, 256, 1000000]
```

### Array Four

```
A4 -> [1024, 16, 2, 4, 1, 32, 64, 256, 128, 512, 8]
```