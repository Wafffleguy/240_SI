#include <iomanip>
#include <iostream>
#define ARRAY_SIZE 100

using namespace std;




char ShiftAlpha(char a);
char ShiftNum(char a);

char Cypher(char a);
void Encode(char a[], int num);


int main(){
    char array [ARRAY_SIZE] = {' '};
    int size;

    cout << "What is the size of the message you want to encode? (MAX 100) ";
    cin >> size;
    cout << "What is the message you want to encode? (Size: " << size << ")";
    cin >> array;

    Encode(array, size);
}

char ShiftAlpha(char a){
    if (a <= 90 && a >= 65){ //Capital Letters
        if ((a + 5) > 90){
            a -= 21;
        } else{
            a += 5;
        }
    } 
    else if (a <= 122 && a >= 97){ //Lowercase
        if ((a + 5) > 122){
            a -= 21;
        } else{
            a += 5;
        }
    } 
    return a;
}

char ShiftNum(char a){
    if ((a + 5) > 57){
        a -= 21;
    } else{
        a += 5;
    }
    return a;
}


char Cypher(char a){
    if ((a <= 90 && a >= 65) || (a <= 122 && a >= 97)){
        return ShiftAlpha(a);
    }
    else if (a <= 57 && a >= 48){ //Numbers
        return ShiftNum(a);
    } 
    return a;
}


void Encode(char a[], int num){
    cout << endl << "----------------" << endl;
    cout << "Encoded Message: " << endl;
    for(int i = 0; i < num; i++){
        cout << Cypher(a[i]);
    }
    cout << endl;

}