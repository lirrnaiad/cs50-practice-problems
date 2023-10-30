#include <cs50.h>
#include <stdio.h>
#include <string.h>

string replace(string word);

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./no-vowels word\n");
        return 1;
    }

    string word = argv[1];
    printf("%s\n", replace(word));
}

string replace(string word)
{
    int length = strlen(word);
    string replaced_word = word;

    for (int i = 0; i < length; i++)
    {
        if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o')
        {
            switch (word[i])
            {
                case 'a':
                    replaced_word[i] = '6';
                    break;

                case 'e':
                    replaced_word[i] = '3';
                    break;

                case 'i':
                    replaced_word[i] = '1';
                    break;

                case 'o':
                    replaced_word[i] = '0';
                    break;
            }
        }

        else
        {
            replaced_word[i] = word[i];
        }
    }

    return replaced_word;
}
