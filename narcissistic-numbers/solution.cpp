#include <bits/stdc++.h>

using namespace std;

bool narcissist (const unsigned int& value);

int main(int argc, char** argv) {

    assert(narcissist(7) == true);
    assert(narcissist(371) == true);
    assert(narcissist(122) == false);
    assert(narcissist(4887) == false);

    return 0;

}

bool narcissist (const unsigned int& value) {

    const string _value = to_string(value);

    const unsigned long LENGTH { _value.length() };

    unsigned int sum { 0 };

    for (const char& c: _value) {
        sum += pow(c - '0', LENGTH);
    }

    return sum == value;

}