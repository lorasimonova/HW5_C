#include <stdio.h>

void reduce_fraction(int *a, int *b) { 
    int chislit = *a;//объявляем и инициал. переменную chislit со значением, на которое указывает указатель a
    int znamin = *b;//объявляем и иниц переменную znamin со значением, на которое указывает указатель b
    int nod; //объявляем переменную nod для хранения наибольшего общего делителя

    // Находим наибольший общий делитель
    while (znamin != 0) {
        int temp = znamin; //создаем переменная для хранения значения znamin
        znamin = chislit % znamin;///вычисление остаток от деления chislit на znamin
        chislit = temp;
    }

    nod = chislit;

    // Сокращаем дробь
    *a /= nod;
    *b /= nod;
}

int main() {
    int chislit, znamin;//объявляем переменные chislit и znamin

    scanf("%d %d", &chislit, &znamin); //считываем знач

    reduce_fraction(&chislit, &znamin);//вызываем функц и передаем адреса перменн

    printf("%d %d\n", chislit, znamin);//выводим

    return 0;
}

