
#pragma once
#include <iostream>
template<typename K, typename V>
struct Pereche {
    K key;
    V value;
    int index;
};

template<typename K, typename V>
class MapIteraotr
{
public:
    Pereche<K, V> *p;


    MapIteraotr& operator++() { p ++; return *this; }
    bool operator != (MapIteraotr& m) { return p != m.p; }
    Pereche<K,V> operator*() { return *p; }
};

template<typename K, typename V>
class Map {
public:
    Pereche<K, V> v[100];
    int count;

    MapIteraotr <K, V> begin() {
        MapIteraotr<K,V> tmp;
        tmp.p = &v[0];
        return tmp;
    }
    MapIteraotr< K, V> end()
    {
        MapIteraotr<K,V> tmp;
        tmp.p = &v[count];    
        return tmp;
    }
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
    int getCount()
    {
        return count;
    }
    void Print() {
        for (int i = 0; i < count; ++i) {
            std::cout << v[i].key << ": " << v[i].value << std::endl;
        }
    }
    
    void add(Map<K, V> m) {
        bool match = false;
        for (int i = 0; i < m.count; i++)
        {
         
            for (int j = 0; j < this->count; j++)
            {
                if (m.v[i].key == this->v[j].key)
                {
                    this->v[j].value = m.v[i].value;
                    match = true;
                }

            }
            if (!match)
            {
                this->v[this->count].index = count;
                this->v[this->count].key = m.v[i].key;
                this->v[this->count].value = m.v[i].value;
                this->count++;
                match = !match;
                    
            }
        }
    
    }
};