#include<iostream>
#include"StivaStatica.h"
using namespace std;
int main() {
    Array_Stack stivaS;
    try {
        for (int i = 0; i < 101; i++)
            stivaS.push(i);
    }
    catch (Array_Stack::Stack_Overflow e) {
        cout << "Stiva este plina => supradepasire\n";
    }
    cout << "Elementele stivei sunt: ";
    try {
        for (int i = 0; i < 101; i++) {
            int element = stivaS.pop();
            cout << element << " ";
        }
    }
    catch (Array_Stack::Stack_Underflow e) {
        cout << "Stiva este gola => subdepasire\n";
    }
    fflush(stdin);
    cin.ignore();
    return 0;
}
