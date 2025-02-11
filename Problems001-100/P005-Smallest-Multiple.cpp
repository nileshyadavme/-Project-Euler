#include <iostream>
#include <numeric>
#define ll long long

// lcm
ll lcm(ll a, ll b) {
    return (a*b)/std::gcd(a,b);
}


int main() {
    ll smallestMultiple = 1;

    for (int i=2;i<=20;i++) {
        smallestMultiple = lcm(i, smallestMultiple);
    }
    std::cout << smallestMultiple;
    return 0;
}
