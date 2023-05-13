/*
    1
    2 3
    3 4 5
    4 5 6 7

*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int row = 1;
    while(row <= n){ // kitni rows ke liey kaam krna hai n = 4 toh 4 rows
        int col = 1, val = row;
        while(col <= row) { //2nd obs - har row me kitne col, hai, jitne row number hai, 1st row 1 col, 2nd row 2 col
            cout << val << " ";
            val++;
            col++;
        }
        cout << endl;
        row++;
    }
}