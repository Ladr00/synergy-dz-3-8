#include <stdio.h>

main()
{
    int a, max = 0, min = 0, s = 0;
    float b = 0;
    printf("skilo simsiliv gotovi vvesti?: ");
    scanf("%i", &s);
  

    printf("vvedite %i simvolov\n", s);
    for (int i = 0; i < s; i++)
    {
        scanf("%i", &a);
        if (i == 0) 
        {
            min = a;
            max = a;
        }
        if (a > max)
        {
            max = a;
        }
        if (a < min)
        {
            min = a;
        }
        b = b + a;
    }

    printf("Max znachenie = %i\n", max);
    printf("Min znachenie = %i\n", min);
    printf("Sredne arifmiticheckoe znachenie elementov = %f\n", b/s);
}
