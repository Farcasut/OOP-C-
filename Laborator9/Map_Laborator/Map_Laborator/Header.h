#pragma once
#pragma once
#include <iostream>
template<typename K, typename V>
struct Pereche {
    K key;
    V value;
    int index;
};

template<typename K, typename V>
class Map {
    Pereche<K, V> v[100];
    int count;
public:
    Map() {
        count = 0;
    }
    V& operator[](K key) {
        for (int i = 0; i < count; ++i) {
            if (v[i].key == key) {
                return v[i].value;
            }
        }
        v[count].key = key;
        v[count].index = count;
        return v[count++].value;
    }
    void Print() {
        for (int i = 0; i < count; ++i) {
            std::cout << v[i].key << ": " << v[i].value << std::endl;
        }
    }
    void add(Map<K, V> m) {}
};