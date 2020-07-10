#include <stdio.h>
#include <string.h>

void printPyramid(int height)
{
    //printf("height = %d\n", height);
    for (int i = 1; i <= height; i++)
    {
        char spaceString[] = "";
        int numberOfSpaces = height - 1;
        int count = 1;
        while(count <= numberOfSpaces)
        {
            strcat(spaceString, " ");
            count++;
        }
    }
}

int main(void)
{
    // Gets user input for height.
    int userInput;
    do
    {
        printf("Height: ");
        
        // reads and stores input
        scanf("%d", &userInput);
    }
    while(userInput < 1 || userInput > 8);

    printPyramid(userInput);
    
    return 0;
}