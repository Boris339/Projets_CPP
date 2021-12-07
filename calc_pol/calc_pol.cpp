#include <iostream>
#include <string>



int main (int argc, char** argv)
{
    float pile[argc]; 
    // tableau de flottants de taille allouée argc
    /* on alloue argc places en mémoire mais en fait au fur et à mesure qu'on 
    va dépiler on n'aura plus besoin des places du 'haut' de la pile */

    int k=0; 
    // c'est la 'hauteur' de la pile (nombre d'éléments dans la pile)



    /* on lit les arguments pris en entrée dans argv et
    on empile des nombres jusqu'à tomber sur une opération 
    on l'effectue alors sur les deux derniers nombres empilés 
    le résultat remplace donc le nombre situé le plus 'bas' dans la pile
    à la fin le résultat du calcul se trouve en 'bas' de la pile
    une fois qu'on a tout dépilé */

    for (int i = 1; i < argc; i++)
    {
                            
        if ((*argv[i] == '+') && (k > 1)) // * sert à déréférencer (i.e. revenir du pointeur vers l'objet pointé)
        {
            pile[k-2] += pile[k-1]; // on somme les deux derniers éléments de la pile
            k -= 1;
        }


        else if ((*argv[i] == 'x') && (k > 1))
        {
            pile[k-2] = pile[k-2] * pile[k-1];
            k -= 1;
        }


        else if ((*argv[i] == '-') && (k > 1)) 
        {
            pile[k-2] -= pile[k-1];
            k -= 1;
        }


        else if ((*argv[i] == ':') && (k > 1))
        {
            pile[k-2] = pile[k-2]/pile[k-1];
            k -= 1;
        }

        /* s'il n'y a pas assez de nombres dans la pile 
        ou bien si on lit un nombre (et pas un opérateur)
        on ajoute */

    
        else 
        {
            pile[k] = atof(argv[i]); 
            k++;
        }        

    }


    std::cout << pile[0] << std::endl;
    // le résultat est en bas de la pile

}

