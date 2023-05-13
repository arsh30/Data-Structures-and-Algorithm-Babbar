 
 /*
    *
    * *
    * * * 
    * * * * 
 */

#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int i = 1;
    while(i <=n) { //1st obs - kitni rows ke liye kaam krna ie 4
        int j = 1;
        while(j <= i) { // 2nd obs - har rows me kitne column h, 1st row = 1col, 2nd row = 2 col, means jitni rw ki value h utni values h
            cout << " * ";
            j++;
        }
        cout << endl;
        i++;
    }
}