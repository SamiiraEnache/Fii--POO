﻿#include "header.h"


int Sum(int a, int b) { return a + b; }
int Dif(int a, int b) { return a - b; }
int Mul(int a, int b) { return a * b; }
int Div(int a, int b) { return b != 0 ? a / b : 0; } 

int main(int argc, char* argv[])
{
    char input[38] = "---H***E+++L+++L///O---P+++O/+-**O---";
    func Operatori[4] = { Sum, Dif, Mul, Div };
    int S = 0, i;
    Content x;
    double idx;

    for (i = 0; i < strlen(input); i++) {
        switch (input[i] - 42) {
        case INMULTIRE:
            idx = 2;
            x.p1 = 3;
            x.p2 = 3;
            break; 
        case SUMA:
            idx = 0;
            x.p1 = 7;
            x.p2 = 5;
            break;
        case DIFERENTA:
            idx = 1;
            x.p1 = 10;
            x.p2 = 1;
            break;
        case IMPARTIRE:
            idx = 3;
            x.p1 = 8;
            x.p2 = 4;
            break;
        }

        S = S + Operatori[(int)idx](x.p1, x.p2);
    }

    printf("S = %d\n", S); 

    return 0;
}
