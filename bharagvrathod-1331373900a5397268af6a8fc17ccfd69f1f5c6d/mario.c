#include <cs50.h>
#include <stdio.h>
int main(void)
{    
    int n;
    // taking user input and repetation
    do
    {
        n = get_int("height: "); 
    } 
    while (n < 1 || n > 8);
       
    for (int i = 0; i < n; i++)
    {
        // spaces
        for (int k = n - 1; k > i; k--)
        {
            printf(" ");     
        }  
      
        // hashes\n 
        for (int k = 0; k <= i; k++)
        {
            printf("#");
        }
        printf("\n");
    }

}
