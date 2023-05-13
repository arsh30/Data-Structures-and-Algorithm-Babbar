/*
1 2 3
4 5 6
7 8 9
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;

    int i = 1, count =1;
    while(i <= n) { //1st observation kitni rows ke liye kaam krna hai
        int j = 1;
        while(j <= n){ //2nd observ har 1 rows me kitne columns hai ,
            cout << count << " "; // 3rd observ and print har row ke col ki values
            count++;
            j++;
        }
        cout << endl;
        i++;
    }
}