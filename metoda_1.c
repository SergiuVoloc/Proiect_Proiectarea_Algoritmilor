





///\file metoda_1.c
///\brief Imprelementarea metodei 1 .
///
///Creat de Sergiu Voloc pe 05/06/18.<br>
///\b Exemplu \b matematic:<br>
///s_init = 53<br>
///ban[] = {10,5,1,25,50}<br>
///Sortarea ban[] = {1,5,10,25,50}<br>
/// \b PAS1:<br>
///     cat = s_init/50 = 1; (53 / 10 = 1)<br>
///     rest = s_init%50 //nu importa ce este;<br>
///     daca cat diferit 0 afisam numarul de monede<br>
///     [50] - > 1      ------->   [50]->1<br>
///     s_init -= ban[i]*cat; (53 - 50 * 1 = 3; s_int = 3)<br>
///     daca e 0 calculul se opreste<br>
/// \b PAS2:<br>
///     cat = s_init/25 = 1; (3 / 25 = 0) daca cat = 0 => valoarea monedei e prea mare<br>
///     rest  nu e 0 trece la urmatoarea<br>
/// \b PAS3:<br>
///     cat = s_init/10 = 0; (3 / 10 = 0) daca cat = 0 => valoarea monedei e prea mare<br>
///     rest  nu e 0 trece la urmatoarea<br>
/// \b PAS4:<br>
///     cat = s_init/5 = 0; (3 / 5 = 0) daca cat = 0 => valoarea monedei e prea mare<br>
///     rest  nu e 0 trece la urmatoarea<br>
/// \b PAS5:<br>
///     cat = s_init/1 = 3; (3 / 1 = 3)<br>
///     daca cat diferit 0 afisam numarul de monede<br>
///     [1] - > 3      ------->    [1]->3<br>
///     s_init -= ban[i]*cat; (3 - 1 * 3 = 0; s_int = 0)<br>
/// Programul se opreste deoarece a parcurs toate valorile monedelor și ultima fiind 1 problema va avea mereu rezultat<br>



void m_unu(int s_init,int n, int ban[]){
    ///\fn int m_unu(int s_init,int n, int ban[])
    ///\brief Funcție pentru metoda 1.
    ///\param s_init Primul întreg.
    ///\param n Al doiela întreg.
    ///\param ban Al treilea întreg.


    int r = 1;
    int nr = 0;
    ///\var r
    ///\var nr
    sortare_desc(ban,n);
    ///\fn sortare_desc(ban,n)
    /// sorteaza nomonatiile crescator
    ///\param ban
    ///\param n
    do{
        for(int i=0; i<n; i++ ) { ///selecteaza nominațiile pe rand{
            int cat = s_init/ban[i]; ///  calculeazâ câtul
            int rest = s_init%ban[i];   ///calaulează restul
            if (cat != 0){   ///daca catul este 0 adica suma se imparte exact la valoare monedei catul reprezinta numarul de monede pentru suma data

                printf("\n[%d] -> %d",ban[i],cat); ///se afiseaza valoarea monedei și numarul lor
                nr += cat; /// se incrementeaza numarul total de monede
                s_init -= ban[i]*cat; ///scade din suma initiala valoarea monedelor calculate anterior
            }

            if (rest == 0){ ///daca restul este 0 inseamna ca suma sa impartit intr-un numar exact de monede

                r = 0; /// se opreste calculul se opreste
            }
        }
    }
    while (r != 0); /// se executa pana restul = 0
    printf("\nNumarul minim de monede:%d",nr); ///se afiseaza numărul minim de monede
}
