#include <iostream>

// isPalindrome()
bool isPalindrome(int n) {
    int temp = 0;
    int temp2 = n;
    while (n>0) {
        int rem = n%10;
        temp = (10*temp) + rem;
        n/=10;
    }
    return (temp == temp2);
}

// lpProduct
void lpPorduct() {
    int lPalindrome = 0;
    for (int i = 999;i>=100;i--) {
        for (int j = 999; j>=100;j--) {
            int product = i*j;
            if (product < lPalindrome) break;
            else if (isPalindrome(product)) {
                lPalindrome = std::ranges::max(lPalindrome, product);
            }
        }
    }
    std::cout<<"lPalindrome :"<<lPalindrome<<std::endl;
}
int main() {
    lpPorduct();
    return 0;
}
