#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int key;
char a;
char c;
char m;

int main (int argc, string argv[])
{
    if(argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    else
    {
        string p = get_string("plaintext: ");
        printf("ciphertext: ");
        key = atoi(argv[1]);
        for (int i = 0, n = strlen(p); i < n; i++ )
          {
             if(p[i] <'A' || (p[i] >'Z' && p[i] <'a') || p[i] >'z')
              {
                  printf("%c", p[i]);
              }
             else
              {
                 if(islower(p[i]))
                  {
                      p[i] = p[i] - 32;
                      a = p[i] - 65;
                      c =(a + key) % 26;
                      m = c + 65 + 32;
                      printf("%c", m);
                  }
                 else
                  {
                      a = p[i] - 65;
                      c = (a + key) % 26;
                      m =c + 65;
                      printf("%c", m);
                  }
            }
        }
        printf("\n");
    }
}
