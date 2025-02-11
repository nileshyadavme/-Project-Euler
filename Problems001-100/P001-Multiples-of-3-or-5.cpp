#include <iostream>

int main() {
    int s = 0;
    int n = 0;
    while (n<1000) {
        if (n%3==0 || n%5==0) {
            s+=n;
        }
        n++;
    }
    std::cout<<"sum will be :"<<s<<std::endl;
    return 0;
}
