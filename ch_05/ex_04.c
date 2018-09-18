// printing calculator

#include <stdio.h>

int main (void)
{
	float accumulator, value2;
	char operator;

    printf ("Begin Calculations.\n");
    printf ("Type number [space] operator\n");
    printf ("Allowed operators:\n");
    printf ("+ sum\n- difference\n* multiplication\n/ division\nS set new number\nE end program\n");

	while ( operator != 'E' )
	{
        scanf ("%f %c", &value2, &operator);
		switch (operator)
		{
			case '+':
                accumulator = accumulator + value2;
                break;
            case '-':
                accumulator = accumulator - value2;
                break;
            case '*':
                accumulator = accumulator * value2;
                break;
            case '/':
                if ( value2 != 0)
                    accumulator = accumulator / value2;
                else
                    printf ("Division by zero not allowed.\n");
                break;
            case 'S':
                // set accumulator to input number
                accumulator = value2;
                break;
            case 'E':
                break;
            default:
                printf ("Unknown operator.\n");
                break;
        }
        printf ("= %.6f\n", accumulator);
    }

    printf ("End Calculations.\n");

	return 0;
}
