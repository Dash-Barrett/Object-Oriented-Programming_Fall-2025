#include <iostream>

void test(int n);

int main(void){
    test(100);

    return 0;
}

// Recursive Function if the function calls itself.
void test(int n){

    if(n>0){
        std::cout << n << std::endl;
        test(n-1);
    }
}