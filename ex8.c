#include <stdio.h>

int main(int argc, char *argv[])
{
    int i = 0;

    if(argc == 1)
    {
        printf("You only have one argument\n");
    }
    else if(argc > 1 && argc < 4)
    {
        printf("Here's your argument:\n");

        for(i = 0; i < argc; i++)
        {
            printf("%s \t", argv[i]);
        }
        printf("\n");
    }
    else
    {
        printf("You have too many arguments. You Suck. \n");
    }

    return 0;
}
