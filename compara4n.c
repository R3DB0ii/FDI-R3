// ESERCIZIO NUMERO 2 TRATTO DALLA SIMULAZIONE DEL 23/10/25 - FDI, UNIROMA3 - Docente: Giordano DA LOZZO


// REGOLARE L'INGRANDIMENTO DELLO SCHERMO PER VISUALIZZARE AL MEGLIO IL CONTENUTO FORMATTATO


/*  ========= CONSEGNA DEL COMPITO ============================================================================================
 *
 *  Scrivi un programma che chiede all'utente di inserire quattro numeri interi, li legge e stampa uno dei seguenti messaggi:
 *  - "Ci sono esattamente 4 numeri fra loro uguali" (se i numeri sono ad esempio 1,1,1,1)
 *  - "Ci sono esattamente 3 numeri fra loro uguali" (se i numeri sono ad esempio 1,1,1,2)
 *  - "Ci sono esattamente 2 numeri fra loro uguali" (se i numeri sono ad esempio 1,1,2,3)
 *  - "Ci sono due coppie di numeri fra loro uguali" (se i numeri sono ad esempio 1,1,2,2)
 *  - "Ci sono esattamente 0 numeri fra loro uguali" (se i numeri sono ad esempio 1,2,3,4)
 *
 *  Parte NON ESSENZIALE, ma riservata solo agli studenti più curiosi. Come si risolve l'esercizio potendo utilizzare solamente
 *  istruzioni di stampa e lettura, l'operatore di assegnamento, operatori matematici (+, -, *, /), operatori di confronto
 *  (==, >, ...), ed UNA SOLA ISTRUZIONE IF-ELSE? Sono quindi vietate istruzioni ripetitive, istruzioni condizionali diverse da
 *  if-else, array, stringhe, operatori logici (||, &&, !) ...
 *
 *  ===========================================================================================================================
 * */

// gcc main.c -lm -o main

#include <stdio.h>
#include <math.h>

int main(){
    int a,b,c,d;
    int count=0;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    count += (a^b) == 0;            // Eseguo una serie di operazioni XOR sulle combinazioni di a,b,c,d tali per cui
    count += (a^c) == 0;            // se i numeri sono uguali tra loro risulterà la verifica 0 == 0 che incrementa
    count += (a^d) == 0;            // di uno la variabile count secondo la tabella che segue.
    count += (b^c) == 0;
    count += (b^d) == 0;
    count += (c^d) == 0;
    if(count==2) printf("Ci sono 2 coppie di numeri fra loro uguali"); // escludo il valore 2 per cui il testo a schermo cambia
    else printf("Ci sono esattamente %d numeri fra loro uguali", (int)sqrt(0.9+4*count)); // funzione di conversione (cfr. infra)
    return 0;
}

/*
 *      ===== TABELLA COUNT =====
 *      +---------------+-------+   -------------------------------->   +-----+-----+
 *      | Numeri simili | Count |    Per convertire il valore count     | inp | out |
 *      +---------------+-------+    e poterlo usare nella format-      +-----+-----+
 *      |    Nessuno    |   0   |    tazione del printf ho trovato      |  0  |  0  |
 *      |       2       |   1   |    una funzione (cfr.supra) che       |  1  |  2  |  <===> out = (int)sqrt(0.9+4*input)
 *      |      2-2      |   2   |    mi permette di rispettare la       |  3  |  3  |
 *      |       3       |   3   |    seguente tabella di verità         |  6  |  4  |        in cui 0.9 è scelto per far
 *      |     Tutti     |   6   |   -------------------------------->   +-----+-----+        funzionare correttamente l'
 *      +---------------+-------+                                                            arrotondamento tramite casting
 *
 *
 *
 *      ===== CONCLUSIONE =======================================================================================================
 *      Per quanto questo metodo non sia effettivamente ottimale per la production in quanto utilizza stratagemmi "trascendenti"
 *      per ovviare alle limitazione della consegna dell'esercizio, porta a termine il compito assegnato ed è stato testato piu
 *      volte. Sicuramente esisteranno approcci più efficaci a cui non ho pensato per implementare correttamente questo algoritmo
 *
 *                                                                                           - Mamiliano Della Rosa, 24/10/25
 * */
