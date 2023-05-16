/*
A B C  Observation for printing: It print simple counting
D E F
G H I
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int row = 1;
    char count = 'A'; // initial char count 1 liya
    while (row <= n) {
      int col = 1;
        while (col <= n) {
            cout << count << " ";
            count++;
            col++;
        }
        cout << endl;
        row++;
    }   
}