/*
    * * * * *
    * * * * * 
    * * * * * 
    * * * * *
    * * * * *
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n; // Kitni rows ke liye krna h eg: 5

    int row = 1;
    while(row <= n) { // 1st - kitni rows ke liye kaam krna hai
        int col = 1;
        while(col <= n) {  // 2nd observation - har row me kitne columns hai and kya print krwana h
            cout << " * ";
            col++;
        }
        cout << endl;
        row++;
    }
}
