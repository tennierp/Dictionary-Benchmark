#include "SortedVectorDict.hpp"
#include <iostream>

void SortedVectorDict::insert(int key) {
    for (auto i = 0; i < data.size(); i++) {
        if (data[i] < key) {
            data.push_back(key);
        }
    }
}

bool SortedVectorDict::lookup(int) const { return false; }
void SortedVectorDict::remove(int) {}

void SortedVectorDict::printVec() {
    for (int i = 0; i < data.size(); i++) {
        std::cout << data[i] << "\n";
    }
}