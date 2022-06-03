#pragma once
class NumberList

{

    int numbers[100];

    int count;

public:


    NumberList();
    bool Add(int x);      // adds X to the numbers list and increase the data member count.

                          // if count is bigger or equal to 10, the function will return false
    void Remove(int index);// elimini elementul de la pozitiei index
    void Insert(int index, int x);//adauga pe x in interiorul listei
    void InserList(int index, int x[], int n); //adauga cele n elemente din vectorul x; la pozzitia index;
    void Sort ();          // will sort the numbers vector
    void Print();         // will print the current vector
    friend NumberList operator+(NumberList x, NumberList x2);
    friend std::ostream& operator<<(std::ostream &o, NumberList &c );
    friend std::istream& operator>>(std::istream& i, NumberList& c);
};