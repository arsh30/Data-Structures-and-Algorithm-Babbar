/*
    1 2 3 4
    1 2 3 4
    1 2 3 4
    1 2 3 4
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int row = 1;
    while(row <= n) { // kitni rows ke liye kaam krna hai
        int col = 1;
        while(col <= n){ // har row me kitne column hai, ie 4 input h toh 4 column h ie n
            cout << col << " ";
            col ++ ;
        }
        cout << endl;
        row++;
    }
}