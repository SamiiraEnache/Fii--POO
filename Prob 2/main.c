#include <stdio.h>

int main() {
    FILE *file;
    char line[100];
    long long suma, numar;

    // Deschidem fisierul daca acesta exista, in caz contrar se returneaza 1
    file = fopen("in.txt", "r");
    if (file == NULL) {
        printf("Eroare la deschiderea fisierului\n");
        return -1;
    }

    // Se citeste fiecare linie si se calculeaza suma numerelor: numerele vor fi mari, deci folosim %lu (long unsigned)
    while (fgets(line, sizeof(line), file)) {
        suma = 0;
        char *token = strtok(line, " ");
        while (token != NULL) {
            sscanf(token, "%lu", &numar);
            suma += numar;
            token = strtok(NULL, " ");
        }
        printf("Suma de numere: %lu\n", suma);
    }

    // Inchidem fisierul
    fclose(file);

    return 0;
}
