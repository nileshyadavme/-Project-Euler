#include <iostream>
int main() {
    int sumOfSquare = 0;
    int sum = 0;
    int n = 0;
    while (n<=100) {
        sumOfSquare += n*n;
        sum +=n;
        n++;
    }
    std::cout<<(sum*sum)-sumOfSquare<<std::endl;
    return 0;
}
