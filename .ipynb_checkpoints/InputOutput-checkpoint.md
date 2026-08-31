# CSCI 240 - Supplemental Instruction

### Input and Output 

---

Given the below example programs, write out what is output onto the terminal, and answer the questions below. Assume the program runs with no issues. 

---

```c++
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int A;
    cout << "Enter your first number!\n\n";
    cin >> A;
    cout << "Enter your second number!\n\n";
    cin >> B;

    cout << "The sum of A and B is " << (A + B) << endl
        << "The product of A and B is " << (A * B) << endl;
    
    return 0;
}
```

1. How many lines are output to the terminal?
2. Is this program missing anything?

---

```c++
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    string firstname, lastname, middlename;
    cout << "What is your first name? ";
    cin >> firstname;
    cout << "What is your last name? ";
    cin >> lastname;
    cout << "What is your middle name? ";
    cin >> middlename;
    cout << "I think your name is: " 
        << middlename << endl << lastname << firstname << endl;
    cout << "Or maybe your name is: " 
        << firstname << middlename << lastname;
    cout << "I hope I was right...";
    return 0;
}
```

1. How many lines are output?
2. Does the output look nice?
3. Is this program missing anything?
