#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define STR1 "Petro Petrovich"              // Ім'я та по батькові студента
#define STR2 "Demchenko Petro"                // Прізвище та ім'я студента
#define STR3 "Mathematic Nytrebych" // Назва предмету та прізвище викладача
#define STR4 "Tolkien theLordoftheRings"     // Прізвище автора та назва книги
#define STR5 "Lviv Lazarenka"           // Назва міста та вулиці

void print_full_with_borders(const char* str) {
    printf("|%-60s|\n", str);  // Вивести повний рядок з межами
}

void print_first_word_with_borders(const char* str) {
    char first_word[30];
    int i = 0;

    // Виділяємо перше слово до пробілу
    while (str[i] != ' ' && str[i] != '\0') {
        first_word[i] = str[i];
        i++;
    }
    first_word[i] = '\0';  // Додаємо нуль-термінатор в кінець

    printf("|%-60s|\n", first_word);  // Вивести перше слово з вирівнюванням по лівому краю
    printf("|%60s|\n", first_word);   // Вивести перше слово з вирівнюванням по правому краю
}

int main() {
    // Виведення для STR1
    print_full_with_borders(STR1);
    print_first_word_with_borders(STR1);
    printf("\n");

    // Виведення для STR2
    print_full_with_borders(STR2);
    print_first_word_with_borders(STR2);
    printf("\n");

    // Виведення для STR3
    print_full_with_borders(STR3);
    print_first_word_with_borders(STR3);
    printf("\n");

    // Виведення для STR4
    print_full_with_borders(STR4);
    print_first_word_with_borders(STR4);
    printf("\n");

    // Виведення для STR5
    print_full_with_borders(STR5);
    print_first_word_with_borders(STR5);
    printf("\n");

    system("pause");
    return 0;
}
