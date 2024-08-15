#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i = 1;
    while(i <= 10){
        printf("%d \n", i);
        printf("---\n");
        i++;
            if(i == 8){
                int i2 = 8;
                printf("comecamos o loop 2\n");
                while(i2 > 0){
                    printf("%d \n", i2);
                    i2--;
                }
                printf("Voltamos ao loop 1\n");
            }
        }

            return 0;
    }



