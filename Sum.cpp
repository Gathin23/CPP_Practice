#include<iostream>
int main() {
    
    int a,b;
    std::cout << "Input any two values: \n";
    std::cin >> a >> b;

    int sum = a + b;

    std::cout << "Sum of " << a << " and " << b << " is " << sum << std::endl;
    return 0;
}