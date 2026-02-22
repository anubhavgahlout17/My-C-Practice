#include <stdio.h>
                                            // Reverse Star triangle pattern
int main() {
    for (int i = 1; i <= 8; i++)
    {
        for (int j = i; j <= 8  ; j++)
        {
            printf("* ");
        }
        printf("\n");
        
    }
    return 0;
    
}
