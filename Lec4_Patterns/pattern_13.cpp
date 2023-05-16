/* 
A B C // Observation -> 1st row me col change hore hai and har columns ki value bhi change hori hai , so col include krne ke chance h
A B C
A B C 
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;

    int row = 1;
    while(row <= n){
        int col = 1;
        while(col <= n) {
            cout << char('A' + col - 1) << " ";
            col++;
        }
        cout << endl;
        row++;
    }
}