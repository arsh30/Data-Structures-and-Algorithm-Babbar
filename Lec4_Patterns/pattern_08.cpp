/*

1
2 3 
4 5 6
7 8 9 10 

*/
#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int i = 1, count = 1;
    while(i <= n){ //1st observtion - kitni rows hai kitni baar kaam krna h
        int j = 1;
        while(j <= i){  //2nd obs- kitne col hai har row m, 1st row - 1 col, 2nd row =2 col, so jitna row number h utna loop chlega
            cout << count << " "; // 3rd observation har row me print kya krna hai
            count++;
            j++;
        }
        cout << endl;
        i++;
    }
}