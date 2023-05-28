#include <stdio.h>

struct Person { //оюъявляем структуру в котой у нас будут хранится имя и возраст
    int age; //возраст
    char name[30]; //имя
};

float averageage(struct Person arr[], int n) {  //эта функция вычисляет ср возраст массива структур персон
//она принимает массив структур персон arr zи кол-во эл в массиве n
    int sum = 0;
    
    for (int i = 0; i < n; i++) { //эта функция проходит по массиву, суммируя возраст каждого человека.
        sum += arr[i].age;
    }
    
    return (float)sum / n; //затем она возвращает средний возраст, разделив сумму на количество людей в массиве
}

int main() {
    int numpeople;
    printf("введи кол-во человек: "); 
    scanf("%d", &numpeople); //считываем значение, и оно сохраняется в переменную numpeople 
    
    struct Person people[numpeople]; // объявляем массив структур Person с именем people
     //размер которого равен значению, введенному в numpeople
    
    //далее входим в цикл и у нас запрашивают возраст и имя чел-а
    for (int i = 0; i < numpeople; i++) {
        printf("ввести возраст и имя человека %d: ", i + 1);
        scanf("%d %s", &people[i].age , people[i].name); 
    }
    
    float avg = averageage(people, numpeople);//вызываем функция averageфge, которой передаются
    // массив people и numpeople в качестве аргументов,возвращаемое ср знач возраста сохраняется в переменную avg
    
    printf("средний возраст людей: %.2f\n", avg); //выводим
    
    return 0;
}
