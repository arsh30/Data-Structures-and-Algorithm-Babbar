/*
        1 1 1
        2 2 2
        3 3 3
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n; // input liya kitne row ke liye print krwana h in our case 3

    int row = 1;
    while(row <= n) {  // kitne rows ke liye work krna h ie 3
        int col = 1;  
        while(col <= n) { // har row me kitne column hai ie 3
            cout << row << " "; // 3rd obs -> print kya krna hai uske liye formula
            col++;
        }
        cout << endl;
        row++;
    }
}