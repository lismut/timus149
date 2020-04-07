#include<iostream>
#include<algorithm>
#include <set>
#include <string>


int main() {
    std::set<std::string> pushers;
    std::set<std::string> spamers;
    size_t cnt;
    std::cin >> cnt;
    for (size_t i = 0; i < cnt; ++i) {
        std::string name;
        std::cin >> name;
        if(pushers.find(name) == pushers.end()) {
            pushers.insert(name);
        } else if (spamers.find(name) == spamers.end()) {
            spamers.insert(name);
        }
    }
    for (auto i : spamers) {
        std::cout << i << std::endl;
    }
}
