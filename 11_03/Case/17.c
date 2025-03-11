/**Дано целое число в диапазоне 10–40, определяющее количество учебных заданий по некоторой теме. 
Вывести строку-описание указанного количества заданий, обеспечив правильное согласование числа со 
словами «учебное задание», например: 18 — «восемнадцать учебных заданий», 23 — «двадцать три учебных задания», 
31 — «тридцать одно учебное задание»..**/

#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);

    switch(n) {
        default:
            printf("Число должно быть в диапазоне 10-40");
            break;
        case 10: case 11: case 12: case 13: case 14: case 15: case 16: case 17: case 18: case 19:
        case 20: case 25: case 26: case 27: case 28: case 29: case 30: case 35: case 36: case 37: 
        case 38: case 39: case 40:
            printf("%d учебных заданий", n);
            break;
        case 21: case 31:
            printf("%d учебное задание", n);
            break;
        case 22: case 23: case 24: case 32: case 33: case 34: 
            printf("%d учебных задания", n);
            break;    
    }

    return 0;
}
