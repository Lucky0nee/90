#include <iostream>
#include <string>
#include <set>

int main() {
    std::multiset<char> temp;
    std::string str;

    std::cout << "Enter sentence: ";
    getline(std::cin, str);

    for (char ch : str) temp.insert(ch);
    std::set<char> Chars(temp.begin(), temp.end());

    std::cout << "Result: \n";
    for (char ch : Chars) std::cout << ch << ": " << temp.count(ch) << "\n";

    return 0;
}
