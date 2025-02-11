#include <iostream>

/*
 * The Fibonacci sequence is: 1,2,3,5,8,13,21,34,55,89,144 .....
 * Even Fibonacci numbers are: 2,8,34,144......
 * every third Fibonacci number is even.
 * E2=2, E5=8,E8=34,E11=144
 * We will use formula En = 4*E(n-1)th term + E(n-2)th term
 */

int main() {
    int sumEven = 0;
    int En = 2;
    int En2 = 8;
    while (En<=4000000) {
        sumEven += En;
        int nextevenfib = 4*En2 + En;
        En = En2;
        En2 = nextevenfib;
    }
    std::cout<<"sum will be :"<<sumEven<<std::endl;
    return 0;
}
