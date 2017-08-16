#include <stdio.h>
#include <stdlib.h>

int main()
{
   //defining array with length of string = n+1; where n is actual length of string including space in between.
    char nam[17] = "Angad Budhathoki";
    printf("My name is %s\n",nam);
   
    nam[0] = 'K';
    nam[1] = 'e';
    nam[2] = 'R';
    nam[3] = 'p';
    nam[4] = 'T';
    printf("My name is %s\n",nam);

    char food[] = "Choila";
    printf("My fav food is %s.\n",food);

    strcpy(food,"MoMos");
    printf("My fav food is %s.\n",food);
   
    return 0;
}
