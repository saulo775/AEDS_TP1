#include <stdio.h>

typedef  struct  {
    char string[100];
    int linhas[100];
}Tpalavra;


void CriaPalavra (Tpalavra *palavra);
void SetPalavra(Tpalavra *palavra, char string);
void GetPalavra (Tpalavra *palavra);