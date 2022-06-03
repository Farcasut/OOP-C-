#pragma once

#include <string>
#include <initializer_list>
#define _CRT_SECURE_NO_WARNINGS
class Sort

{
    std::string ConstructorType;
    int count;
    int v[100];

public:

    // add constuctors
    Sort(int n, int min, int max);
    Sort(std::initializer_list<int> list);
    Sort(int vec[], int n);
    Sort(int n, ...);
    Sort(const char* lista);

    void InsertSort(bool ascendent = false);

    void QuickSort(bool ascendent = false);

    void BubbleSort(bool ascendent = false);

    void Print();

    int  GetElementsCount();

    int  GetElementFromIndex(int index);

};