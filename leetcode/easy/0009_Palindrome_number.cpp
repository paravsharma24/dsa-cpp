#include <iostream>

using namespace std;

bool isPalindrome(int& x) {

    int temp = x;
    long long reverse = 0;
    
    if(x < 0) {
        return false;
    }
    
    while(temp > 0) {
        reverse = reverse * 10 + temp % 10;
        temp /= 10; 
    }
    
    return reverse == x;
}

int main() {

    int x = 121;

    cout << isPalindrome(x);

    return 0;
}