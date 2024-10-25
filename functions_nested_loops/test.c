#include "main.h"

void jack_bauer(void)
{
    int hora1, hora2, minuto1, minuto2;

    for (hora1 = 0; hora1 < 3; hora1++)
    {
        for (hora2 = 0; hora2 < 10; hora2++)
        {
            
            if (hora1 == 2 && hora2 > 3)
                break; 

            for (minuto1 = 0; minuto1 < 6; minuto1++)
            {
                for (minuto2 = 0; minuto2 < 10; minuto2++)
                {
                    
                    _putchar('0' + hora1);
                    _putchar('0' + hora2);
                    _putchar(':');
                    _putchar('0' + minuto1);
                    _putchar('0' + minuto2);
                    _putchar('\n');
                }
            }
        }
    }
}
