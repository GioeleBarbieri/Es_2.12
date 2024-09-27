#include <stdio.h>

int main(void)
{
   int gio1, gio2, mese1, mese2, anno1, anno2, differenzaT;
   printf("inserisci il valore di anno della prima data: ");
   scanf("%d", &anno1);
   printf(" inserisci il valore di mese della prima data: ");
   scanf("%d", mese1);
   printf("inserisci il valore di giorni della prima data: ");
   scanf("%d", gio1);
   printf("inserisci il valore di anno della seconda data");
   scanf("%d", anno2);
   printf("inserisci il valore di mese della seconda data: ");
   scanf("%d", mese2);
   printf("inserisci il valore di giorno della seconda data: ");
   scanf("%d", gio2);
   differenzaT= (anno2-anno1)*360 + (mese2-mese1)*60 + (gio2-gio1);
   printf("la differenza di tempo tra le due date e': %d", differenzaT);
   return 0;


}
