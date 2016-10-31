#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Getränkeautomat v1
    int geld=0;
    printf("Hallo!\n");
    printf("Dies ist ein Getraenkeautomat\n");
    printf("Preisliste:\n");
    printf("Lidl-Wasser : 1 Geld\n");
    printf("Sprite : 2 Geld\n");
    printf("Fanta : 3 Geld\n");
    printf("Cola : 4 Geld\n");
    printf("Gold-Getraenk : 5 Geld\n");
    printf("Jedes Getraenk beinhaltet 500ml\n");
    printf("Bitte werfen sie den Betrag passend ein!");
    printf("Bitte Geld einwerfen.\n");
    scanf("%d", &geld);
    // Ich hätte niemals gedacht, dass dieser Teil funktioniert o.O
    if(geld==1) {
    printf("Bitte entnehmen sie ihr Lidl-Wasser!\n");
    printf("Vieĺ Spass mit ihrem Getraenk!");
    }else {
    if(geld==2) {
    printf("Bitte entnehmen sie ihre Sprite!\n");
    printf("Viel Spass mit ihrem Getraenk!");
    }else {
    if(geld==3){
    printf("Bitte entnehmen sie ihre Fanta!\n");
    printf("Viel Spass mit ihrem Getraenk!");
    }else {
    if(geld==4) {
    printf("Bitte entnehmen sie ihre Cola!\n");
    printf("Viel Spass mit ihrem Getraenk!");
    }else {
    if(geld==5) {
    printf("Bitte entehmen sie ihr Gold-Getraenk!\n");
    printf("Viel Spass mit ihrem Getraenk!");
    }else {
    printf("Ihre Geldanzahl reicht nicht/ist zu viel fuer das gewuenschte Getraenk!\n");
    printf("Haben sie auch die Waehrung \"Geld\" benutzt?\nEuro, Dollar, Schweizer Franken usw. funtionieren bei uns nicht!");
    return 0;
}
}
}
}
}
}
