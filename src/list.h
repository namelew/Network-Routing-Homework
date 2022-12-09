#ifndef LIST
#define LIST

#include "control.h"

typedef struct list List;

// contrutor: type recebe 1(lista normal) e 0(lista de listas)
List *buildList(int type);
// adiciona um valor qualquer e atrela um int id à ele
void addList(List *l, int id, void *data);
// retorna o valor armazenado no nodo de id escolhido
void *getList(List *l, int id);
// remove nodo de identificador id e retorna 0 caso bem sucedido
int removeList(List *l, int id);
// libera espaço utilizado pela lista
void freeList(List *l);

#endif /*LIST*/
