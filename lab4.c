#include <stdio.h>

int main()
{
    int i=0, n, m;  //i - кількість рівних дільників, n - натуральне число,m - рівний дільник
    printf("Введіть число n:\n");
    scanf("%d",&n);
    for(m=1;m<=n;m++){
        if(n % m == n / m) i++; // цикл перевіряє число, якщо умова виконується, то i - збільшується
        else continue;
    }
    printf("Кількість рівних дільників числа %d: %d\n", n,i);

    return 0;
}