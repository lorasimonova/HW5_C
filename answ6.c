#include <stdio.h>
#include <stdlib.h>

int abs_arr(int *arr, int n) { //опред функции abs_arr, которая принимает указатель на массив arr и его размер n
    int zam = 0;
    int *end = arr + n;

    for (; arr < end; arr++) {
        if (*arr < 0) {
            *arr = -*arr;
            zam++;
        }
    }

    return zam;
} //функция заменяет отрицательные элементы массива на их абсолютное значение и
// возвращает количество замен, произведенных в массиве.

int main() {
    int n;
    scanf("%d", &n); //считываем n

    int *arr[n];//объявлям массив указателей arr размера n

    for (int *ptr = arr, *end = arr + n; ptr < end; ptr++) { 
        //запускаем цикл, который проходит по каждому указателю в массиве arr
        scanf("%d", ptr); //счит цел знач
    }

    int numzam = abs_arr(arr, n);//вызываем функцию abs_arr, которая изменяет массив arr
    // и возвращает количество замен, произведенных в массиве.

    printf("%d", numzam);
    for (int *ptr = arr, *end = arr + n; ptr < end; ptr++) { //цикл, который выводит на экран каждый элемент массива arr
        printf(" %d", *ptr);
    }
    printf("\n");

    return 0;
}
