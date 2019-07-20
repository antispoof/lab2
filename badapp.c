#include <stdio.h>
#include <string.h>

/* code contains a few vulnerability:
 * Buffer Overflow
 * Weak authentication (single factor authentication, password echoing, cleartext password) 
 * Vulnerable dependency (use of unsafe functions such as gets which do not perform boundary checking and are therefore vulnerable to buffer overflow) 
 */

int main(void)
{
    char username[10];
    char pass[10];

    printf("Enter your username :\n");
    gets(username);
    printf("Enter your password :\n");
    gets(pass);

    if(strcmp(username, "admin") == 0 && strcmp(pass, "password") == 0)
    {
        printf ("\n Login Successful!\n");
    }
    else
    {
        printf ("Login failed!\n");
    }

    return 0;
}
