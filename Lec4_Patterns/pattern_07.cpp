/*
        1
        2 2
        3 3 3
        4 4 4 4
*/


#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int row = 1;
    while(row <= n) { // 1st obser - kitni rows hai
        int col = 1;
        while(col <= row) { // 2nd row- har row m kitne col hai, 1st row - 1 col, 2nd row = 2 col , means jitna row num hai utne colum h
            cout << row << " "; // 3rd observ - har row ke column me PRINT kya hora hai, n out case row 1 toh 1 print hora , row 2 toh 2 print hora
            col++;
        }
        cout << endl;
        row++;
    }
}