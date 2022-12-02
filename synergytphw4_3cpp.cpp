#include <stdio.h>

main()
{
    int n = 0;
    int mas[100];

    while ((n < 1) || (n > 100))
    {
        printf("Ведите олличество элементов массива от 1 до 100 включительно ");
        scanf("%i",&n);
    }
    
    printf("Вводите значения массива последоватенльно через Enter \n");

    for(int i=0;i<n;i++)
    {
        scanf("%i",&mas[i]);
    }

    for(int i = 0;i<n;i++)
    {
        printf("%4i",mas[i]);
    }

    printf("\n");

    bool fl = true;
    int ch = 0;

    while(fl)
    {
        fl = false;
        for(int i = 0;i<n-1;i++)
        {
            if(mas[i]>mas[i+1])
            {
                int z = mas[i];
                mas[i] = mas[i+1];
                mas[i+1] = z;
                fl = true;
            }        
        }
        ch++;
    }

    for(int i = 0;i<n;i++)
    {
        printf("%4i",mas[i]);
    }
    printf("\n%i",ch);
}