/*
A B C  // observation to print: har row me value change hori hai and har row me har column ki value change hori hai
B C D  // means dono row or col ko include krne ke chances hai
C D E 

Agr ye aisa hota
 1 2 3  ------ i + j - 1; => 1 + 1 - 1 = 1 [now ye jo 1 aaya h isko kisi trh A se map krwadege]
 2 3 4  ------  1 + 2 - 1 = 2 [ 2 ko kisi trh B se map krwa dege]
 3 4 5  ------  1 + 3 - 1 = 3 [3 ko kisi trh C se map krwana hai]

i + j - 1 = 1 [isko 1 se map krwana h]
Taking 'A - 1' on both sides
i + j - 1 + 'A' - 1 = 1 + 'A' - 1
'A' + i  + j - 2 =  formula
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int row = 1;
    while(row <= n){
        int col = 1;
        while (col <= n) {
            cout << char('A' + row + col - 2) << " ";
            col++;
        }
        cout << endl;
        row++;
    }
}