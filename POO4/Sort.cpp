#include "Sort.h"
#include <iostream>
#include <algorithm>
#include <sstream>

Sort::Sort() {}

Sort::Sort(int numElements, int minValue, int maxValue) //constructorul primește numărul de elemente, valoarea minimă  pentru a genera o listă de nr random
{
    for (int i = 0; i < numElements; i++)
    {
        int element = rand() % (maxValue - minValue + 1) + minValue;
        mda.push_back(element);
    }
}

Sort::Sort(std::initializer_list<int> elements)
{
    for (int element : elements) //parcurgem fiecare element din lista si il adaugam in mda
    {
        mda.push_back(element);
    }
}

Sort::Sort(std::vector<int> elements, int numElements)
{
    for (int i = 0; i < numElements; i++)  //adaugă primele numElements elemente din vectorul elements în vectorul mda 
    {
        mda.push_back(elements[i]);
    }
}

Sort::Sort(const char* elements)
{
    std::stringstream ss(elements); //se creeaza un obiect stringstream cu argumentul elements (un sir de caractere)
    int num;
    char delimiter;
    while (ss >> num) //extrage fiecare nr intreg din secventa
    {
        mda.push_back(num);
        ss >> delimiter; //se extrage separatorul dupa numar 
    }
}

Sort::Sort(int numElements, ...) 
{
    va_list args; //stocam lista de argumente 
    va_start(args, numElements);
    for (int i = 0; i < numElements; i++) //parcurgem fiecare argument
    {
        int element = va_arg(args, int); //luam urmatorul arg din lista sis il stocam in element
        mda.push_back(element);
    }
    va_end(args); //eliberam memoria alocata pt lista de arg variabile
}

void Sort::InsertSort(bool ascendent)
{
    int n = mda.size(); //stocheaza nr de elem din mda in variabila n 
    for (int i = 1; i < n; i++)
    {
        int okey = mda[i];
        int j = i - 1; //stocheaza indexul elem anterior in j 
        while (j >= 0 && (ascendent ? mda[j] > okey : mda[j] < okey)) //merge pana un elem e mai mare sau mai mic decat key in functie de (ascendent)
        {
            mda[j + 1] = mda[j]; //muta elementul spre dreapta 
            j--; //verifica daca mai trebuie mutate si alte elemente 
        }
        mda[j + 1] = okey; //punem key in pozitia corecta in vector
    }
}

void Sort::QuickSort(bool ascendent)
{
    std::sort(mda.begin(), mda.end(), [ascendent](int a, int b) {
        return ascendent ? a < b : a > b;
        });
}

void Sort::BubbleSort(bool ascendent)
{
    int n = mda.size(); //punem in n nr de elem 
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (ascendent ? mda[j] > mda[j + 1] : mda[j] < mda[j + 1]) //verifica daca mda[j] este mai mare sau mai mic decat mda[j+1]
            {
                int okk = mda[j];
                mda[j] = mda[j + 1];
                mda[j + 1] = okk;
            }
        }
    }
}

void Sort::Print() const
{
    for (int element : mda)
    {
        std::cout << element << " ";
    }
    std::cout << std::endl;
}

int Sort::GetElementsCount() const
{
    return mda.size();
}

int Sort::GetElementFromIndex(int index) const
{
    if (index < 0 || index >= mda.size())
    {
        return -1;
    }
    return mda[index];
}
