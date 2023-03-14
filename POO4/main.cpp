#include "Sort.h"
#include <iostream>

int main()
{
    // Initializarea unui obiect Sort cu 5 elemente aleatoare între 1 și 10
    Sort sort1(5, 1, 10);
    
    // Initializarea unui obiect Sort cu o listă de inițializare
    Sort sort2{4, 6, 1, 3, 8};
    
    // Initializarea unui vector cu elemente și apoi crearea unui obiect Sort din vector
    std::vector<int> vec = {9, 2, 5, 4, 1};
    Sort sort3(vec, 5);
    
    // Initializarea unui obiect Sort folosind argumente variadice
    Sort sort4(7, 3, 10, 2, 5, 8, 1, 4);
    
    // Initializarea unui obiect Sort dintr-un șir de caractere formatat astfel: "10,40,100,5,70"
    Sort sort5("10,40,100,5,70");
    
    // Afisarea tuturor obiectelor Sort
    std::cout << "Sort 1: ";
    sort1.Print();
    
    std::cout << "Sort 2: ";
    sort2.Print();
    
    std::cout << "Sort 3: ";
    sort3.Print();
    
    std::cout << "Sort 4: ";
    sort4.Print();
    
    std::cout << "Sort 5: ";
    sort5.Print();
    
    // Sortarea obiectelor folosind diferite metode
    sort1.InsertSort(true);
    sort2.QuickSort(false);
    sort3.BubbleSort(true);
    sort4.QuickSort();
    sort5.BubbleSort();
    
    // Afisarea obiectelor sortate
    std::cout << "Sort 1 sorted in ascending order: ";
    sort1.Print();
    
    std::cout << "Sort 2 sorted in descending order: ";
    sort2.Print();
    
    std::cout << "Sort 3 sorted in ascending order: ";
    sort3.Print();
    
    std::cout << "Sort 4 sorted in ascending order: ";
    sort4.Print();
    
    std::cout << "Sort 5 sorted in descending order: ";
    sort5.Print();
    
    // Afisarea numarului de elemente si a elementului de pe o anumita pozitie
    std::cout << "Number of elements in Sort 1: " << sort1.GetElementsCount() << std::endl;
    std::cout << "Element at index 2 in Sort 1: " << sort1.GetElementFromIndex(2) << std::endl;
    
    return 0;
}
