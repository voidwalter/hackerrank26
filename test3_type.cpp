#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a;
    long num;
    char chare;
    float float_num;
    double double_num;
    
    scanf("%d %ld %c %f %lf", &a , &num, &chare, &float_num, &double_num);
    printf("%d\n%ld\n%c\n%f\n%lf", a , num, chare, float_num, double_num);
    return 0;
}
