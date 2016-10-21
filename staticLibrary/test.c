#include <stdio.h>
#include <encrypt.h>
#include <checksum.h>

int main()
{
     char s[] = "Speak friend and enter";
     encrypt(s);
     printf("Encrypt to '%s'\n", s);
     printf("checksum is %i\n", checksum(s));
     encrypt(s);
     printf("Decrypt to '%s'\n", s);
     printf("checksum is %i\n", checksum(s));
     return 0;
}