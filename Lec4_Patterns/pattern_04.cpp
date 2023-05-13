/*
3 2 1
3 2 1
3 2 1

*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n; // no of row kitne rows ke liye kaam krna hai

    int row = 1;
 
    while(row <= n) { // 1st obs -> kitne rows ke liye kaam krna h
        int col = 1;
        while(col <= n) { //2nd obs -> har rows me kitne columns hai kitni bar print krna
            cout << n - col + 1 << " "; // 3rd obs -> formula to print
            col++;
        }
        cout << endl;
        row++;
    }
}