#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <crypt.h>
#include <unistd.h>

int main(int argc, char* argv[])
  {
    if (argc != 2) 
	  {
        printf("Usage: ./crack hash\n");
        return 1;
	  }
    printf("%s\n", crypt("abcdefg", "50"));
    return 0;
    
    char generated_password[9] = {};
    
    char test[9] = {};     // test array to store passwords of all lengths

    char salt[3];          // extract salt from encrypted password
    
    salt[0] = argv[1][0];
    salt[1] = argv[1][1];

    char arr[95];         // store all ASCII characters in an array
    for(int i = 0; i < 95; i++) 
	arr[i] = (char) (i + 32);
    
    // printf("Trying to hack entered hash, please wait an hour, a day or months,\nyou will stay here a long long (long)^(inf) time :D\n");
    
    // try all possible passwords of length 8 or less
    for(int i = 0; i < 95; i++)
    
        for(int j = 0; j < 95; j++)
        
            for(int k = 0; k < 95; k++)
            
                for(int l = 0; l < 95; l++)
                
                    for(int m = 0; m < 95; m++)
                    
                        for(int n = 0; n < 95; n++)
                        
                            for(int o = 0; o < 95; o++)
                            
                                for(int p = 0; p < 95; p++)
								 {
                                    generated_password[0] = arr[i];
                                    generated_password[1] = arr[j];
                                    generated_password[2] = arr[k];
                                    generated_password[3] = arr[l];
                                    generated_password[4] = arr[m];
                                    generated_password[5] = arr[n];
                                    generated_password[6] = arr[o];
                                    generated_password[7] = arr[p];

                                    for(int q = 0, r = 8; q <= 7; q++, r--)   // try all subpasswords of all lengths from generated password
                                        for(int s = 0; s < q + 1; s++)
										   {
                                              strncpy(test, generated_password+s, r);
                                              test[r] = '\0';
                                            
                                              if(strcmp(crypt(test, salt), argv[1]) == 0)   // try password of length r 
											  {
                                                printf("Password found!\n%s\n", test);
                                                return 0;   
                                              }
                                            }
                                  }
    printf("Nothing found :(\n");
    
    return 0;
}
