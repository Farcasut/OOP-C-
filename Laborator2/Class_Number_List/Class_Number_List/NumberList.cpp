#include <iostream>
#include "NumberList.h"



NumberList::NumberList()
{
    this->count = 0;
    for (int i = 0; i < 10; i++)
        this->numbers[i] = INT_MAX;


}
bool NumberList::Add(int x) {

    if (this->count == 100)
    {
        return 0;
    }
        numbers[count] = x;
        count++;
        return 0;
}
void NumberList::Sort()
{
    for (int i = 0; i<this->count; i++)
    {
        for (int j = 0;j < this->count-1; j++)
        {
            if (this->numbers[j] > this->numbers[j + 1])
                std::swap(this->numbers[j], this->numbers[j + 1]);
        }
    }
}
void NumberList::Print()
{
    for (int i = 0; i < this->count; i++)
    {
        std::cout << this->numbers[i] << " ";
    }
    std::cout << std::endl;
}
void NumberList::Remove(int index) 
{   
    
    if (this->count > 0 && index<=this->count)
    {
        for (int i = index; i < this->count - 1; i++)
        {
            this->numbers[i] = this->numbers[i + 1];
        }
        this->count--;
    }

}
void NumberList::Insert(int index, int x)
{
    if (this->count < 100)
    {
        for (int i = this->count - 1; index <= i; i--)
            this->numbers[i + 1] = this->numbers[i];

        this->numbers[index] = x;
        this->count++;
    }
}
void NumberList::InserList(int index, int x[], int n)
{
    int k = 0;
    if (this->count + n < 100)
    {

        for (int i = index; k < n; i++, k++)
            Insert(i, x[k]);
      /*  for (int j = 0; j < n; j++)
        {
            for (int i = this->count - 1; index <= i; i--)
            {
                this->numbers[i + 1] = this->numbers[i];
            }
            this->count += 1;
        }
        for (int i = index; i < n; i++)
        {
            numbers[k] = x[k];
            k++;
       }*/

        
    }

}
NumberList operator+(NumberList x, NumberList x2)
{
    NumberList temp;
    for (int i = 0; i < 101; i++)
        temp.numbers[i] = x2.numbers[i] + x.numbers[i];

    if (x2 .count<= x.count)
        temp.count = x.count;
    else
        temp.count = x2.count;
    return temp;
}
std::ostream& operator<<(std::ostream& o, NumberList& c)
{
    for (int i = 0; i < c.count; i++)

    {
        o << c.numbers[i] << " ";
    }
    o << c.count;
    o << '\n';

    return o;
}
std::istream& operator>>(std::istream& in, NumberList& c)
{
    std::cout << "How many elements do you want to introduce(MAX 100) ";  in >> c.count;
   if(c.count<=100)
    for (int i = 0; i <c.count; i++)
        in >> c.numbers[i];
   else {
       std::cout << "Too many elements";
       
   }
    return in;
}