
#include <vector> // Definim clasa vector ca sa stocam datele intr-un array dinamic
#include <initializer_list> //definește clasa "initializer_list" pt a inițializa obiecte cu o listă de valori
#include <string>
#include <cstdarg>

class Sort
{
private:
    std::vector<int> mda; //un vector de intregi pt a stoca datele

public:
    Sort(); //facem constructor care initializeaza un obiect sort cu un vector gol golut 
    Sort(int numElements, int minValue, int maxValue);
    Sort(std::initializer_list<int> elements);
    Sort(std::vector<int> elements, int numElements);
    Sort(const char* elements); //este un constructor care initializează un obiect Sort cu un șir de caractere și extrage din acesta elemente numerice pentru a le sort
    Sort(int numElements, ...);

    void InsertSort(bool ascendent = false);
    void QuickSort(bool ascendent = false);
    void BubbleSort(bool ascendent = false);
    void Print() const;
    int GetElementsCount() const;
    int GetElementFromIndex(int index) const;
};

