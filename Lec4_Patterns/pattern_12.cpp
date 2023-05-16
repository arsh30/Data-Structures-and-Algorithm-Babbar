/*
A A A  // observ to print 1st row, me c1, c2, c3 [columns change hore hai] but row ni hori, so relation to print me row ko include krke hi
B B B  // kuch bnega
C C C

*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n; // taking input, kitne lines ke liye kaam krna hai

    int row = 1;
    while(row <= n){ // obs 1: kitni rows ke liye kaam krna hai
        int col = 1; // obs 2: har rows me kitne column, 3 rows hai, and har row me 3 col
        while(col <= n) {
            // obs 3: Formula to print : 'A' + row - 1, [Mapping krdege], 
            // alphabet me convert krna hai toh 'A' toh add krege hi
            // Note: In Java type casting is automatically but in Cpp it is not
            cout << char('A' + row - 1) << " ";
            col++;
        }
        cout << endl;
        row++;
    }
}