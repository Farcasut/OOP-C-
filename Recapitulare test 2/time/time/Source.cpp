#define _CRT_SECURE_NO_WARNINGS

#include <chrono>
#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    double diff = 0;
    FILE* output;
    output = fopen("time.txt", "w");
   
    for (int i = 0; i<1000; i++) {
    auto start = std::chrono::high_resolution_clock::now();
    int x = 0;
    for (int i = 0; i <= 100000; i++)
    {
        for (int j = 0; j <= 100000; j++)
        {
            x = 0;
        }
    }
    auto stop = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed = stop - start;
    double a = elapsed.count();
    fprintf(output, "%lf ", elapsed.count());
    start = std::chrono::high_resolution_clock::now();
    for (int i = 0; i <= 100000; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            x = 0;
        }
    }
    stop = std::chrono::high_resolution_clock::now();
    elapsed = stop - start;
    fprintf(output, "%lf ", elapsed.count());
    double b = elapsed.count();
    diff = a - b;
    fprintf(output, "%lf \n", diff);
    cout << diff<<"\n";
    }
    fclose(output);
 
}