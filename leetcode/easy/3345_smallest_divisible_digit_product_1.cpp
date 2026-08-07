#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n = 551;
    int t = 3;

while(true) {
    
    int temp = n;
    int product = 1;
    
    while(temp > 0) {
        int digit = temp % 10;
        product *= digit;
        temp /= 10;
    }

    if(product % t == 0) {
        cout << n;
        break;
    }

    else{
        n++;
    }

}

    return 0;
}