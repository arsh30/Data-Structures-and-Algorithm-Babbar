/*
1
2 1
3 2 1
4 3 2 1

*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int row = 1;
    while(row <= n){ // obs 1 - number of rows hai
    int col = 1;
     while(col <= row) { // obs 2 - har row me kitne col hai, 1st row -1 col, 2nd row - 2 col, it depends jitne number on rows h
         cout << row - col + 1 << " "; // obs 3 - print kya krna hai
         col++;
    }
    cout << endl;
    row++;
    }
}