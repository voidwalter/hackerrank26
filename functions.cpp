#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(int a, int b, int c, int d) {
    int max = a;
    // if ( max < b ) {
    //     if (max < c) {
    //         if (max < d) {
    //             return d;
    //         } else {
    //             return c;
    //         }
    //     } else {
    //         return b;
    //     }
    // } else {
    //     return a;
    // }
    int maxie[] = {a,b,c,d};
    
    for (int i=0; i < 4; i++) {
        if (max < maxie[i]) {
            max = maxie[i];
        }
    }
    return max;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
