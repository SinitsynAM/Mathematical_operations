#include <stdio.h>
#include <stdlib.h>

    main()
{
    int num1, num2, num3;

    printf("Input three different integer: \n");
    scanf("%d%d%d", &num1, &num2, &num3);
    printf("\nSum is:  %5d\n", num1+num2+num3);
    printf("Average is:  %d\n", (num1+num2+num3)/3);
    printf("Product is:  %d\n", num1*num2*num3);

    if (num1>num2 && num1>num3)
        printf("Largest is:  %d\n", num1);
    if (num2>num1 && num2>num3)
        printf("Largest is:  %d\n", num2);
    if (num3>num1 && num3>num2)
        printf("Largest is:  %d\n", num3);

    if (num1<num2 && num1<num3)
        printf("Smallest is: %d\n", num1);
    if (num2<num1 && num2<num3)
        printf("Smallest is: %d\n", num2);
    if (num3<num1 && num3<num2)
        printf("Smallest is: %d\n", num3);

    return 0;
}
