#include <stdio.h>
#include <stdlib.h>
//Estructura de lista simple de nodos enteros con apuntador a siguiente
typedef struct nodoi{
  int elem;
  struct nodoi *next;
}nodoi;

nodoi *CreateSLNi(int item);
int InsertxBack(nodoi *H,int elem);
int DelListxBack(nodoi **H);
void PrintList(nodoi *H);

int main(){
 nodoi *head=0;
 int item,ban;
 scanf("%d",&item);
 //Se crea la lista simplemente enlazada con el dato que el usuario proporciona
 head=CreateSLNi(item);
 //Imprime un 1 si se pudo agregar un nuevo elemento a la lista
 printf("%d\n",InsertxBack(head,15));
 //Imprime todos los elementos de la lista
 PrintList(head);
 //Elimina un dato de la lista por detras (el ultimo agregado) y como puede eliminar devuelve un 1
 printf("%d\n",DelListxBack(&head));
 PrintList(head);
 printf("%d\n",DelListxBack(&head));
 //En este caso imprime 0 porque ya no hay datos en la lista
 printf("%d\n",DelListxBack(&head));
 return 0;
}

//Funcion que crea la lista simplemente enlazada de enteros
nodoi *CreateSLNi(int item){
 nodoi *newn=0;
if((newn=malloc(sizeof(nodoi)))==0){
 return 0;
}
 newn->elem=item;
 newn->next=0;
 return newn;
}

//Funcion eliminar por detras
int DelListxBack(nodoi **H){
    nodoi *apn=*H;
    nodoi *apnaux=0;
    if((apn==0)){
        return 0;
    }
    if(apn->next==0){
        free(apn);
        *(H)=0;
    }
    else{
        while(apn->next->next!=0){
            apn=apn->next;
        }
        apnaux=apn->next;
        apn->next=0;
        free(apnaux);
    }
    return 1;
}
//Funcion insertar por detras
int InsertxBack(nodoi *H,int elem){
 nodoi *apn=H;
 nodoi *newn=0;
 if((newn=CreateSLNi(elem))==0){
 return 0;
 }
 while(apn->next!=0){
    apn=apn->next;
 }
 apn->next=newn;
 return 1;
}
//Funcion que imprime todos los valores que se encuentran en la lista
void PrintList(nodoi *H){
    nodoi *apn=H;
    while(apn!=0){
    printf("'%d' ",apn->elem);
    apn=apn->next;
 }
 printf("\n");
 return;
}
