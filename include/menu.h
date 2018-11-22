#ifndef MENU_H
#define MENU_H

#include <stdio.h>
#include <stdlib.h>
#include "../include/geral.h"

// Mostra o menu principal e retorna a opção escolhida
int menu_principal();

// Mostra o menu para adicionar nova coluna e retorna a opção escolhida
int menu_addcoluna();

// Mostra o menu para escolha do tipo da coluna e retorna a opção escolhida
int menu_tipo();

// Mostra o menu da chave primária e retorna 1 para sim e 0 para não
int menu_chaveprimaria();

#endif