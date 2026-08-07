#include <iostream>

using namespace std;

class Solution {
public:

    int value(char c) {
        switch(c) {

            case 'I':
            return 1;

            case 'V':
            return 5;

            case 'X':
            return 10;

            case 'L':
            return 50;

            case 'C':
            return 100;

            case 'D':
            return 500;

            case 'M':
            return 1000;

            default:
            return 0;
        }

    }

    int romanToInt(string s) {
        int number = 0;
        for(int i = 0; i < s.size(); i++) {
            int currentRomanNumber = value(s[i]);

            if(i + 1 < s.size() && currentRomanNumber < value(s[i + 1])) {
                number -= currentRomanNumber;
            }
            else{
                number += currentRomanNumber;
            }
        }
        return number;
    }
};

int main() {

    Solution s1;
    cout << s1.romanToInt("VIII");

    return 0;
}