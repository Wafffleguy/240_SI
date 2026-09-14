# CSCI 240 - Supplemental Instruction
### Compound Conditionals
---

For the following prompts, create a single if statement that has the desired effect.

## Example:

I want an integer between $30$ and $40$ (inclusive), and is not $30$.

Method 1:
```C++
if (x <= 40 && x > 30){
    //do stuff
}
```

Method 2:
```C++
if (x <= 40 && x >= 30 && x != 30){
    //do stuff
}
```

---

1. I want an integer between $30$ and $50,000$ (inclusive), and it must be odd.

2. I want an integer less than $40$ or greater than $50$.

3. I want a string containing either "cat" or "dog".

4. I want an integer that is either exactly $47$ or not $47$.

5. I want a character containing either an uppercase or lowercase 'Y'.