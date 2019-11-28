#include <stdio.h>
#include <string.h>
#include <conio.h>
typedef struct{
int Ident;
char cadena[20];
char instru[30];
int op1;
int op2;
}Prop;
typedef struct nodoi{
Prop Ejer;
struct nodoi *prev;
struct nodoi *next;
}nodoi;
nodoi *CreatiLD(nodoi **tail);
Prop Captura();
Prop Limpia();
int InsertiLD(nodoi *H,nodoi *T, Prop A);
nodoi *InsertxBack(nodoi *T, Prop A);
int DeleteLDi(nodoi *H,nodoi *T,int item);
int SilDis(nodoi *H, nodoi *T);
int Resol(nodoi *H, nodoi *T);
int IDemp(nodoi *H, nodoi *T);
nodoi *Meta(nodoi *H, nodoi *T);
void PrintiSLC2(nodoi *H,nodoi *T);
int main()
{
nodoi *H1, *H2, *H3, *H4, *H5;
nodoi *T1, *T2, *T3, *T4, *T5;
H1 = CreatiLD(&T1);
H2 = CreatiLD(&T2);
H3 = CreatiLD(&T3);
H4 = CreatiLD(&T4);
H5 = CreatiLD(&T5);
Prop A;
int item = 0;
int opcion = 0;

char cadena[21] = " ";
char *c = 0;
while(opcion != 5)
{ clrscr();
printf("Escoga el ejercicio a realizar:\n");
printf("1.- Ejercicio 2\n");
printf("2.- Ejercicio 3\n");
printf("3.- Ejercicio 4\n");
printf("4.- Ejercicio 5\n");
printf("5.- Ejercicio 6\n");
printf("\n");
printf("\tEjercicio 2\n");
PrintiSLC2(H1,T1);
printf("\n");
printf("\tEjercicio 3\n");
PrintiSLC2(H2,T2);
printf("\n");
printf("\tEjercicio 4\n");
PrintiSLC2(H3,T3);
printf("\n");
printf("\tEjercicio 5\n");
PrintiSLC2(H4,T4);
printf("\n");
printf("\tEjercicio 6\n");
PrintiSLC2(H5,T5);
printf("\n");
scanf("%d",&opcion);
if(opcion != 6){
switch(opcion)
{
case 1:
while(opcion != 6){
clrscr();
printf("Escoge la instruccion a realizar:\n");
printf("1.- Agregar proposicion\n");
printf("2.- Eliminar proposicion\n");
printf("3.- Silogismo disyuntivo\n");
printf("4.- Metodo por resolucion\n");
printf("5.- Idempotencia\n");
printf("6.- Salir del ejercicio 2\n");
printf("\n");

PrintiSLC2(H1,T1);
scanf("%d",&opcion);
if(opcion != 6){
switch(opcion)
{
case 1:
A = Limpia();
A = Captura();
InsertiLD(H1,T1,A);
break;
case 2:
scanf("%d",&item);
DeleteLDi(H1,T1,item);
break;
case 3:
SilDis(H1,T1);
break;
case 4:
Resol(H1,T1);
break;
case 5:
IDemp(H1,T1);
break;
if(opcion == 6){
T1 = Meta(H1,T1);; }}}}
break;
case 2:
while(opcion != 6){
clrscr();
printf("Escoge la instruccion a realizar:\n");
printf("1.- Agregar proposicion\n");
printf("2.- Eliminar proposicion\n");
printf("3.- Silogismo disyuntivo\n");
printf("4.- Metodo por resolucion\n");
printf("5.- Idempotencia\n");
printf("6.- Salir del ejercicio 3\n");

printf("\n");
PrintiSLC2(H2,T2);
scanf("%d",&opcion);
if(opcion != 6){
switch(opcion)
{
case 1:
A = Limpia();
A = Captura();
InsertiLD(H2,T2,A);
break;
case 2:
scanf("%d",&item);
DeleteLDi(H2,T2,item);
break;
case 3:
SilDis(H2,T2);
break;
case 4:
Resol(H2,T2);
break;
case 5:
IDemp(H2,T2);
break;
if(opcion == 6){
T2 = Meta(H2,T2); }}}}
break;
case 3:
clrscr();
printf("Escoge la instruccion a realizar:\n");
printf("1.- Agregar proposicion\n");
printf("2.- Eliminar proposicion\n");
printf("3.- Silogismo disyuntivo\n");
printf("4.- Metodo por resolucion\n");
printf("5.- Idempotencia\n");

printf("6.- Salir del ejercicio 4\n");
printf("\n");
PrintiSLC2(H3,T3);
while(opcion != 6){
scanf("%d",&opcion);
if(opcion != 6){
switch(opcion)
{
case 1:
A = Limpia();
A = Captura();
InsertiLD(H3,T3,A);
break;
case 2:
scanf("%d",&item);
DeleteLDi(H3,T3,item);
break;
case 3:
SilDis(H3,T3);
break;
case 4:
Resol(H3,T3);
break;
case 5:
IDemp(H3,T3);
break;
if(opcion == 6){
T3 = Meta(H3,T3); }}}}
break;
case 4:
clrscr();
printf("Escoge la instruccion a realizar:\n");
printf("1.- Agregar proposicion\n");
printf("2.- Eliminar proposicion\n");

printf("3.- Silogismo disyuntivo\n");
printf("4.- Metodo por resolucion\n");
printf("5.- Idempotencia\n");
printf("6.- Salir del ejercicio 5\n");
printf("\n");
PrintiSLC2(H4,T4);
while(opcion != 6){
scanf("%d",&opcion);
if(opcion != 6){
switch(opcion)
{
case 1:
A = Limpia();
A = Captura();
InsertiLD(H4,T4,A);
break;
case 2:
scanf("%d",&item);
DeleteLDi(H4,T4,item);
break;
case 3:
SilDis(H4,T4);
break;
case 4:
Resol(H4,T4);
break;
case 5:
IDemp(H4,T4);
break;
if(opcion == 6){
T4 = Meta(H4,T4); }}}}
break;
case 5:
clrscr();

printf("Escoge la instruccion a realizar:\n");
printf("1.- Agregar proposicion\n");
printf("2.- Eliminar proposicion\n");
printf("3.- Silogismo disyuntivo\n");
printf("4.- Metodo por resolucion\n");
printf("5.- Idempotencia\n");
printf("6.- Salir del ejercicio 6\n");
printf("\n");
PrintiSLC2(H5,T5);
while(opcion != 6){
scanf("%d",&opcion);
if(opcion != 6){
switch(opcion)
{
case 1:
A = Limpia();
A = Captura();
InsertiLD(H5,T5,A);
break;
case 2:
scanf("%d",&item);
DeleteLDi(H5,T5,item);
break;
case 3:
SilDis(H5,T5);
break;
case 4:
Resol(H5,T5);
break;
case 5:
IDemp(H5,T5);
break;
if(opcion == 6){
T5 = Meta(H5,T5); }}}}
break;

}
}
if(opcion == 6){
PrintiSLC2(H1,T1);
printf("\n");
PrintiSLC2(H2,T2);
printf("\n");
PrintiSLC2(H3,T3);
printf("\n");
PrintiSLC2(H4,T4);
printf("\n");
PrintiSLC2(H5,T5);
printf("\n");
}
}
return 0;
}
Prop Captura()
{
Prop A;
scanf("%d",&A.Ident);
scanf("%s",&A.cadena);
scanf("%s",&A.instru);
A.op1 = 0;
A.op2 = 0;
strcpy(A.instru," ");
return A;
}
Prop Limpia()
{
Prop A;
A.Ident = 0;
strcpy(A.cadena,"");
strcpy(A.instru,"");
return A;
}

nodoi *CreatiLD(nodoi **tail)
{
nodoi *H = 0;
nodoi *T = 0;
if((H = malloc(sizeof(nodoi)))==0)
{
return 0;
}
if((T = malloc(sizeof(nodoi)))==0)
{
free(H);
return 0;
}
H -> prev = H;
H -> next = T;
T -> prev = H;
T -> next = T;
*(tail) = T;
return H;
}
int InsertiLD(nodoi *H,nodoi *T, Prop A)
{
nodoi *apnd = H->next;
nodoi *newn = 0;
if(H == 0)
{
return 0;
}
if((newn = malloc(sizeof(nodoi))) == 0)
{
return 0;
}
newn -> Ejer = A;
while(apnd != T && apnd -> Ejer.Ident < newn -> Ejer.Ident)
{
apnd = apnd -> next;
}

if(apnd->Ejer.Ident == newn -> Ejer.Ident)
{
return 0;
}
newn->prev = apnd->prev;
newn->next = apnd->prev->next;
apnd->prev->next = newn;
newn->next->prev = newn;
return 1;
}
int DeleteLDi(nodoi *H,nodoi *T,int item)
{
nodoi *apnd = H->next;
if(apnd == T)
{
return 0;
}
while(apnd != T && apnd -> Ejer.Ident < item)
{
apnd = apnd -> next;
}
if(item == apnd -> Ejer.Ident){
free(apnd);
apnd -> next -> prev = apnd -> prev;
apnd -> prev -> next = apnd -> next;
}
return 1;
}
int SilDis(nodoi *H, nodoi *T){
nodoi *apnd = H->next;
Prop A;
char cadena1[15];
char cadena2[15];
char final[10];
int tam = 0;

int i = 0,num = 0;
char letra = " ";
int item1 = 0,item2 = 0;
int signo = 0;
int limit = 100;
int tpos = 0;
int pos = 0;
int ver = 0;
char *c1 = 0;
char *c2 = 0;
scanf("%d",&item1);
while(apnd != T && apnd -> Ejer.Ident != item1)
{
apnd = apnd -> next;
}
if(item1 == apnd -> Ejer.Ident){
strcpy(cadena1,apnd->Ejer.cadena);
}
apnd = H -> next;
scanf("%d",&item2);
while(apnd != T && apnd -> Ejer.Ident != item2)
{
apnd = apnd -> next;
}
if(item2 == apnd -> Ejer.Ident){
strcpy(cadena2,apnd->Ejer.cadena);
}
apnd = H -> next;
while(apnd != T && apnd->Ejer.Ident < limit)
{
apnd = apnd -> next;
num++;
}
c1 = &cadena1;
c2 = &cadena2;

while(*c2!='\0')
{
if(*c2 == 'p'){ letra = 'p';}
if(*c2 == 'q'){ letra = 'q';}
if(*c2 == 'r'){ letra = 'r';}
if(*c2 == 's'){ letra = 's';}
if(*c2 == 't'){ letra = 't';}
if(*c2 == '-'){ signo = 1;}
c2++;
}
while(*c1!='\0')
{
if(*c1 == letra){ver = 1; pos = tpos;}
tpos++;
c1++;
}
c1 = &cadena1;

if(signo == 1){
tpos = 0;
tam = tam -2;
while(*c1 != '\0')
{
if(*c1 == '\0'){
return 0;
}
if(pos == 0 && tpos == pos){
c1++; c1++;}

if(c1[pos+1] == '\0' && tpos == pos-2){
c1++; c1++;
}
if(pos != 0 && tpos == pos-1){
c1++; c1++;
}

final[tpos] = *c1;
tpos++;

c1++;
}
}
if(signo == 0)
{
tpos = 0;
while(*c1!='\0')
{
if(pos == 0){
if(tpos == pos){
c1++; c1++; c1++;
}}
if(pos != 0){
if(tpos == pos-1){
c1++; c1++; c1++;
}
}
if(c1[pos+1] == '\0'){
if(tpos == pos-2){
c1++; c1++; c1++;
}
}
if(*c1 != '\0'){
final[tpos] = *c1;}
tpos++;
c1++;
}
}
A.Ident = num + 1;
strcpy(A.cadena,final);
strcpy(A.instru,"Silogismo_disyuntivo");
A.op1 = item1;
A.op2 = item2;
InsertiLD(H,T,A);
return 1;
}
int Resol(nodoi *H, nodoi *T)

{
nodoi *apnd = H -> next;
Prop A;
char cadena1[15];
char cadena2[15];
char aux[12];
char aux2[12];
char destino[8];
int item1=0,item2=0,num=0;
int limit = 100;
int pos = 0, tpos = 0, i = 0, signo = 0,confir = 0, repe = 0, sum = 0, cont = 0,signo2 =
0,pos2 = 0;
char letra;
char *c1;
char *c2;
char *c3;
scanf("%d",&item1);
while(apnd != T && apnd -> Ejer.Ident != item1)
{
apnd = apnd -> next;
}
if(item1 == apnd -> Ejer.Ident){
strcpy(cadena1,apnd->Ejer.cadena);
}
apnd = H -> next;
scanf("%d",&item2);
while(apnd != T && apnd -> Ejer.Ident != item2)
{
apnd = apnd -> next;
}
if(item2 == apnd -> Ejer.Ident){
strcpy(cadena2,apnd->Ejer.cadena);
}
apnd = H -> next;
while(apnd != T && apnd->Ejer.Ident < limit)
{
apnd = apnd -> next;

num++;
}
while(confir != 1){
letra = ' ';
sum = repe * 2;
cont = 1;
signo = 0;
tpos = 0;
c1 = &cadena2;
c2 = &cadena1;
while(*c2 != '\0'){
if(repe > 0){
if(signo2 == 0){
while(cont <= sum){
c2++;
cont++;
}}

if(signo2 == 1){
while(cont <= sum+1){
c2++;
cont++;
}}
}
if(letra != 'p' && letra != 'q' && letra != 'r' && letra != 's' && letra != 't' && letra != 'u')
{
if(*c2 == 'p'){ letra = 'p';}
if(*c2 == 'q'){ letra = 'q';}
if(*c2 == 'r'){ letra = 'r';}
if(*c2 == 's'){ letra = 's';}
if(*c2 == 't'){ letra = 't';}
if(*c2 == 'u'){ letra = 'u';}
if(*c2 == '-'){ signo = 1;}
}
if(*c2 == '\0'){ return 0;}
tpos++;
c2++;

}
tpos = 0;
while(*c1!='\0'){
if(*c1 == letra){ pos = tpos;}
tpos++;
c1++;
}
c1 = &cadena2;
if(signo == 0){
tpos = 0;
while(*c1!='\0'){
if(tpos == pos-1){
if(*c1 == '-'){confir = 1;}
}
tpos++;
c1++;
}
}
if(signo == 1){
signo2 = 0;
tpos = 0;
while(*c1!='\0'){
if(tpos == pos-1){
if(*c1 == '-'){signo2 = 1;}}
if(signo2 == 0){
if(tpos == pos){
if(*c1 == letra){ confir = 1;}
}}
tpos++;
c1++;
}
}
repe++;
}
c1 = &cadena2;
c2 = &cadena1;
c3 = &aux;

tpos = 0;
while(*c2 != '\0')
{
if(*c2 == letra){ pos2 = tpos;}
tpos++;
c2++;
}
c2 = &cadena1;
tpos = 0;
if(signo == 1){
while(*c2 != '\0'){
if(c2[pos2+1] == '\0'){
if(tpos == pos2-2){
c2++; c2++; c2++;
}
}
if(tpos == pos2-1){c2++; c2++; c2++;}
aux[tpos] = *c2;
tpos++;
c2++;
}
tpos = 0;
while(*c1 != '\0'){
if(c1[pos+1] == '\0'){
if(tpos == pos-1){
c1++; c1++;
}
}
if(tpos == pos){ c1++; c1++;}
aux2[tpos] = *c1;
tpos++;
c1++;
}
}
if(signo == 0){
while(*c2 != '\0'){

if(c2[pos2+1] == '\0'){
if(tpos == pos2-1){
c2++; c2++;;
}
}
if(pos2 == 0){
if(tpos == pos2){c2++; c2++;}}
if(pos2 != 0){
if(tpos == pos2-1){c2++; c2++;}}
aux[tpos] = *c2;
tpos++;
c2++;
}
tpos = 0;
while(*c1 != '\0'){
if(c1[pos+1] == '\0'){
if(tpos == pos-2){
c1++; c1++; c1++;
}
}
if(c1[pos-1] == '-'){
if(tpos == pos-1){
c1++; c1++; c1++;
}
}
else{
if(tpos == pos-1){ c1++; c1++; c1++;}
}
aux2[tpos] = *c1;
tpos++;
c1++;
}
}
strcpy(destino,aux);
strcat(destino,"v");
strcat(destino,aux2);

A.Ident = num + 1;
strcpy(A.cadena,destino);
strcpy(A.instru,"Resolucion");
A.op1 = item1;
A.op2 = item2;
InsertiLD(H,T,A);
return 1;
}
int IDemp(nodoi *H, nodoi *T){
nodoi *apnd = H -> next;
Prop A;
char cadena[20];
char *c1 = 0;
char letra = " ";
int cont = 0, pos = 0, tpos = 0, num = 0;
int item = 0;
int limit = 100;
char destino[15];
scanf("%d",&item);
while(apnd != T && apnd -> Ejer.Ident != item)
{
apnd = apnd -> next;
}
if(item == apnd -> Ejer.Ident){
strcpy(cadena,apnd->Ejer.cadena);
}
apnd = H -> next;
while(apnd != T && apnd->Ejer.Ident < limit)
{
apnd = apnd -> next;
num++;
}
c1 = &cadena;
while(*c1 != '\0'){

if(letra != 'p' && letra != 'q' && letra != 'r' && letra != 's' && letra != 't' && letra != 'u'){
if(*c1 == 'p'){letra = 'p'; pos = tpos;}
if(*c1 == 'q'){letra = 'q'; pos = tpos;}
if(*c1 == 'r'){letra = 'r'; pos = tpos;}
if(*c1 == 's'){letra = 's'; pos = tpos;}
if(*c1 == 't'){letra = 't'; pos = tpos;}
if(*c1 == 'u'){letra = 'u'; pos = tpos;}
}
c1++;
tpos++;
}
c1 = &cadena;
while(*c1 != '\0'){
if(*c1 == letra){cont++;}
c1++;
}
c1 = &cadena;
tpos = 0;
if(cont == 2){
while(*c1 != '\0'){
if(cont == 2){
if(tpos == pos){
c1++; c1++;}}
printf("%c",*c1);
destino[tpos] = *c1;
tpos++;
c1++;
}
}
A.Ident = num + 1;
strcpy(A.cadena,destino);
strcpy(A.instru,"Idempotencia");
A.op1 = item;
A.op2 = 0;
InsertiLD(H,T,A);
}
nodoi *Meta(nodoi *H, nodoi *T)
{ nodoi *apnd = H->next;

Prop A;
char cadena[10];
char cadena2[10];
int tam = 0;
int limit = 0;
int ver = 0;
char *p = 0;
char *p2 = 0;
while(apnd != T && apnd -> Ejer.Ident < limit)
{
apnd = apnd -> next;
}
strcpy(cadena,apnd->Ejer.cadena);
apnd = H->next;
while(apnd != T && apnd -> Ejer.Ident != limit)
{
apnd = apnd -> next;
}
strcpy(cadena2,apnd->Ejer.cadena);
tam = strlen(cadena2);
p = &cadena;
p2 = &cadena2;
while(*p!='\0')
{
p2 = &cadena2;
while(*p2!='\0')
{
if(*p == *p2){ ver++; }
p2++;
}
p++;
}
if(tam == ver){
A.Ident = 0;
strcpy(A.cadena,"Meta alcanzada");
strcpy(A.instru," ");
A.op1 = 0;

A.op2 = 0;
}
T = InsertxBack(T,A);
return T;
}
nodoi *InsertxBack(nodoi *T, Prop A){
nodoi *newn = 0;
if((newn = malloc(sizeof(nodoi))) == 0)
{
return T;
}
T->Ejer = A;
T->next = newn;
newn->prev = T;
newn->next = newn;
return newn;
}
void PrintiSLC2(nodoi *H,nodoi *T)
{
nodoi *apnd = H->next;
while(apnd != T)
{
if(apnd->Ejer.op1 == 0 &&apnd->Ejer.op2 == 0 && apnd->Ejer.Ident == 0)
{
printf("\t%s\t\n",apnd->Ejer.cadena);
printf("\n");
}
if(apnd->Ejer.op1 == 0 && apnd->Ejer.op2 == 0)
{
printf("%d\t",apnd->Ejer.Ident);
printf("%s\t",apnd->Ejer.cadena);
printf("%s\t",apnd->Ejer.instru);
printf("\n");
}
if(apnd->Ejer.op1 != 0 &&apnd->Ejer.op2 == 0)
{

printf("%d\t",apnd->Ejer.Ident);
printf("%s\t",apnd->Ejer.cadena);
printf("%s\t",apnd->Ejer.instru);
printf("%d\t",apnd->Ejer.op1);
printf("\n");
}
}
return;}
