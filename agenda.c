#include "agenda.h"
#include "contato.c"

struct agenda{
    char nome[50];
    int cod;
    int numContato;
    Contatos* contatos;
};