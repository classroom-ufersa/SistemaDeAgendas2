#include "contato.h"

struct contatos{
    char nome[50];
    int idade;
    int telefone;
    char email[50];
};

Contatos* criar_contato (Contatos* contato,char nome, int idade, int telefone, char email){
    Contatos* contato = (Contatos*) malloc(sizeof(Contatos));
    if (contato==NULL){
        printf("Falha na alocacao de memoria!\n");
        exit(1);
    }
    contato->nome;
    contato->idade;
    contato->telefone;
    contato->email;

    return contato;    
}

