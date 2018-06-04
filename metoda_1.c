
/*

Sorteaza vectorul de monede descrescator
Suma initiala o imparte la cea ma mare valoare
partea intreaga este nr de monede de tipul dat
apoi ia restul care a armas si imparte la urmatoarea valoare a monedei continua pana restul e 0

Ca orice valoare sa aiba solutie trebuie sa fie moneda cu valoarea 1
*/

void m_unu(int s_init,int n, int ban[])
{
    int r = 1;
    int nr = 0;
    sortare_desc(ban,n);
    do
    {
        for(int i=0; i<n; i++ )
        {
            int cat = s_init/ban[i];
            int rest = s_init%ban[i];
            if (cat != 0)
            {
                printf("\n[%d] -> %d",ban[i],cat);
                nr += cat;
            }
            s_init -= ban[i]*cat;
            if (rest == 0)
            {
                r = 0;
            }
        }
    }
    while (r != 0);
    printf("\nNumarul minim de monede:%d",nr);
}
