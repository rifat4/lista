#include <stdlib.h>
#include "lista.h"

void insertnod(Nod ** padr, Nod * tobeaddded){
    tobeaddded->next = padr;
    *(*padr)->prev = &tobeaddded;
}

void removenod(Nod ** padr, Nod * toberemoved){
    Nod temp = *(*padr);
    Nod prev = temp;
    while(temp.next != NULL){
        if(temp.tel == toberemoved.tel){
            prev->next = temp->next;
            if(temp->next != NULL) temp->next->prev = prev;
            free(temp);
            break;
        }
    }
}

void printnod(Nod * p){
    printf("Name: %s, Tel: %d", p->name, p->tel);
}

void printlist(Nod * p){
    while(p != NULL){
        printnod(p);
        p = p->next;
    }
}

Nod * search(Nod * p, int tel){
    while(p != NULL){
        if(p.tel == tel)return p;
        else{p = p->next}
    }
}