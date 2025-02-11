#include <iostream>

// isPrime()
bool isPrime(long long num) {
    // check for 2 and 3
    if (num<=1) return false;
    if (num <=3) return true;
    if (num%2==0 || num%3==0) return false;

    // now check from i=5 to nums
    for (int i = 5;i*i<=num;i+=6) {
        if (num%i ==0 || num%(i+2)==0) {
            return false;
        }
    }
    return true;
}
void primFactor(long long n) {
    // handling 2
    int sum = 0;
    while (n%2==0) {
        std::cout<<2<<" ";
        n/=2;
    }

    for (int i = 3;i<=sqrt(n);i+=2) {
        while (n%i==0) {
            if (isPrime(i)) {
                sum+=i;
            }
            n/=i;
        }
    }
    if (n>2) {
        std::cout<< n;
    }
}
int main() {
    long long n = 600851475143;
    primFactor(n);
    return 0;
}
