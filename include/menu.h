#ifndef MENU_H
#define MENU_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../include/uteis.h"
#include "../include/pesquisas.h"

// Mostra o menu principal e retorna a opção escolhida
int menu_principal();

// Mostra o menu para adicionar nova coluna e retorna a opção escolhida
int menu_addcoluna();

// Mostra o menu para escolha do tipo da coluna e retorna a opção escolhida
int menu_tipo();

// Mostra o menu da chave primária e retorna 1 para sim e 0 para não
int menu_chaveprimaria();

// Mostra o menu de continuar operação
int menu_continuar();

// Mostra o menu de tipos de pesquisa;
int menu_pesquisa1();

// Mostra o menu de tipos de pesquisa para strings;
int menu_pesquisa2();

// menu com "aperte ENTER para voltar"
void menu_voltar();

#endif