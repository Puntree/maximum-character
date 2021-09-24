#include <stdio.h>

int main()
{
    char str[100];
    int freq[256];
    int i = 0, max;
    int ch;

    printf("Enter string: ");
    gets(str);

    for(i=0; i<256; i++)
    {
        freq[i] = 0;
    }

    i=0;
    while(str[i] != '\0')
    {
        ch = (int)str[i];
        freq[ch] += 1;

        i++;
    }

    max = 0;
    for(i=0; i<256; i++)
    {
        if(freq[i] > freq[max])
            max = i;
    }

    printf("Maximum character is %c", max);

    return 0;
}
