#include <iostream>
using namespace std;
class NumberList {
private:
    int numbers[10] = { 0 };
    int count;

public:
    // Constructorul
    void init() {
        count = 0;
    }


    // Adaugam numere la lista
    bool Add(int x) {
        if (count >= 10) {
            return false;
        }
        numbers[count] = x;
        count++;
        return true;
    }

    // Sortare in vector
    void Sort() {
        for (int i = 0; i < count - 1; i++) {
            for (int j = i + 1; j < count; j++) {
                if (numbers[i] > numbers[j]) {
                    int ok = numbers[i];
                    numbers[i] = numbers[j];
                    numbers[j] = ok;
                }
            }
        }
    }

    // Prtintam vectorul curent
    void Print() {
        for (int i = 0; i < count; i++) {
            cout << numbers[i] << " ";
        }
        cout << endl;
    }
};