#include <stdio.h>

struct Move { //объяыляем структуру где у нас хранятся х и у 
    int x;
    int y;
};

struct Move FinishPoint(struct Move arr[], int n) { ///объявляем функцию FinishPoint, которая принимает массив структур Move и его размер
    struct Move finalpoint = {0, 0};  // создаем структуру и задаем начальную точку 0,0
    for (int i = 0; i < n; i++) {
        finalpoint.x += arr[i].x;  // cдвиг по оси x
        finalpoint.y += arr[i].y;  // cдвиг по оси y
    }

    return finalpoint; //возвращаем нашу структуру
}

int main() {
    struct Move moves[] = {{4, 2}, {2, -3}};  // пример массива перемещений
    int nummoves = sizeof(moves) / sizeof(moves[0]);//вычисляем количество элементов в массив

    struct Move finalpoint = FinishPoint(moves, nummoves);//вызываем FinishPoint, передавая ей массив moves и количество элементов

    printf("финальная точка (%d, %d)\n", finalpoint.x, finalpoint.y); //выводим нашу финальную точску 

    return 0;
}
