#include <bits/stdc++.h>
int main() { int n; std::cin >> n; std::cout << ((1 + (n & 1)) * ((n + 2) >> 1) * (((n + 2) >> 1) + (n & 1))) << "\n"; }
