#include <stdio.h>
#include <stdlib.h>

int main() {
    char input;
    printf("Enter the first letter: ");
    scanf(" %c", &input);

    // Task 1: Name 5 Asian countries
    switch (input) {
        case 'C':
            printf("China\n");
            break;
        case 'J':
            printf("Japan\n");
            break;
        case 'I':
            printf("India\n");
            break;
        case 'T':
            printf("Thailand\n");
            break;
        case 'V':
            printf("Vietnam\n");
            break;
        default:
            printf("The entered letter does not match any Asian countries\n");
            break;
    }

    // Task 2: Name 6 rivers
    switch (input) {
        case 'D':
            printf("Dnipro\n");
            break;
        case 'V':
            printf("Volga\n");
            break;
        case 'M':
            printf("Mississippi\n");
            break;
        case 'A':
            printf("Amazon\n");
            break;
        case 'G':
            printf("Ganges\n");
            break;
        case 'R':
            printf("Rhine\n");
            break;
        default:
            printf("The entered letter does not match any rivers\n");
            break;
    }

    // Task 3: Name 7 European capitals
    switch (input) {
        case 'P':
            printf("Paris\n");
            break;
        case 'L':
            printf("London\n");
            break;
        case 'B':
            printf("Berlin\n");
            break;
        case 'R':
            printf("Rome\n");
            break;
        case 'M':
            printf("Madrid\n");
            break;
        case 'V':
            printf("Vienna\n");
            break;
        default:
            printf("The entered letter does not match any European capitals\n");
            break;
    }

    // Task 4: Name 5 flowers
    switch (input) {
        case 'R':
            printf("Rose\n");
            break;
        case 'L':
            printf("Lily\n");
            break;
        case 'S':
            printf("Sunflower\n");
            break;
        case 'N':
            printf("Narcissus\n");
            break;
        case 'M':
            printf("Poppy\n");
            break;
        default:
            printf("The entered letter does not match any flowers\n");
            break;
    }

    // Task 5: Name 6 trees
    switch (input) {
        case 'O':
            printf("Oak\n");
            break;
        case 'B':
            printf("Birch\n");
            break;
        case 'M':
            printf("Maple\n");
            break;
        case 'P':
            printf("Pine\n");
            break;
        case 'S':
            printf("Spruce\n");
            break;
        case 'W':
            printf("Willow\n");
            break;
        default:
            printf("The entered letter does not match any trees\n");
            break;
    }


    system("pause");
    return 0;}
