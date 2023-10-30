#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

bool valid(string password);

int main(void)
{
    string password = get_string("Enter your password: ");
    if (valid(password))
    {
        printf("Your password is valid!\n");
    }
    else
    {
        printf("Your password needs at least one uppercase letter, lowercase letter, number and symbol\n");
    }
}

// TODO: Complete the Boolean function below
bool valid(string password)
{
    int length = strlen(password);
    bool hasUpperCaseLetter = false;
    bool hasLowerCaseLetter = false;
    bool hasNumber = false;
    bool hasSymbol = false;

    for (int i = 0; i < length; i++)
    {
        if (isupper(password[i]))
        {
            hasUpperCaseLetter = true;
        }

        else if (islower(password[i]))
        {
            hasLowerCaseLetter = true;
        }

        else if (isdigit(password[i]))
        {
            hasNumber = true;
        }

        else if (!isalnum(password[i]))
        {
            hasSymbol = true;
        }
    }

    if (hasUpperCaseLetter && hasLowerCaseLetter && hasNumber && hasSymbol)
    {
        return true;
    }

    else
    {
        return false;
    }
}
