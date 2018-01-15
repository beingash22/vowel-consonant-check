#include <stdio.h>

void main ()
{
char c;
scanf ("%c",&c);

if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
printf ("vowel");

else
printf ("consonant");
  
if(c < 65 && c > 90 || c < 97 && c > 122 ) 
  printf ("0");

}
