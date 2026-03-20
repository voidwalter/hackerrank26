#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    
    // Note:: [a,b] = {x E Z| a <= x <= b} = {a, a+1,........,b}
    
    int a, b;
    scanf("%d %d", &a, &b);
    string arr[9] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    
    for (int n = a; n <= b; n++) {
        if (n >= 1 && n <=9) {
            cout << arr[n-1] << endl;
        } else {
            if (n%2 == 0) {
                printf("even\n");
            } else {
                printf("odd\n");
            }
        }
    }
    return 0;
}
