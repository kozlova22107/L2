#include <stdio.h>
#include <math.h>



int quEx(float a, float b, float c, float *root1, float *root2) {

    // Проверка на ненулевые коэффициенты
    if (a == 0){
        printf("The coefficient 'a' must be non-zero.\n");
        return -1;} // Возвращаем код ошибки
    // Вычисляем дискриминант
    float discriminant = b * b - 4 * a * c;

    // Проверяем количество корней
    if (discriminant > 0) {
        // Два действительных корня
        *root1 = (-b + sqrt(discriminant)) / (2 * a);
        *root2 = (-b - sqrt(discriminant)) / (2 * a);
        return 2;
    } else if (discriminant == 0) {
        // Один действительный корень
        *root1 = *root2 = -b / (2 * a);
        return 1;
    } else {
        // Комплексные корни
        return 0;
    }
}
