
//https://www.youtube.com/watch?v=PPgGJvgv2Ag
//de uitat si de scris in lateX
#include <stdio.h>
#include <stdlib.h>

void calculul_nominatiilor(int s_init, int n,int nominatii[] ){
    int i;
    int j;
    int k;
    int min_monede_necesare[100]= {0};
    int tabel[100][100] = {0};

    int minimum;
    int frecventa_de_nominatii = 0;
    min_monede_necesare[0] = 0;
    sortare_asc(nominatii,n);
    for (i=1; i <= s_init; i++)
    {
        minimum = 999;
        for (j = 0; j<n; j++)
        {
            if (nominatii[j] <= i)
            {
                if (minimum > min_monede_necesare[i-nominatii[j]]+1)
                {
                    minimum = min_monede_necesare[i-nominatii[j]]+1;
                    for(k = 0; k < n; ++k)
                    {
                        tabel[i][k] = tabel[i-nominatii[j]][k];
                    }
                    tabel[i][j]++;
                }
            }
        }
        min_monede_necesare[i] = minimum;
    }
    printf("Numarul minim de monede : %d \n", min_monede_necesare[s_init]);
    for(int i = 0; i < n; ++i)
    {
        if(tabel[s_init][i]!=0)
        {
            frecventa_de_nominatii = tabel[s_init][i];
            int k = 0;
            while(tabel[s_init][i]!=0)
            {
                k+=1;
                tabel[s_init][i]=tabel[s_init][i]-1;
            }
            printf("[%d] -> %d \n", nominatii[i],k);
        }
    }
}

void m_doi(int s_init, int n, int nominatii[30])
{
    calculul_nominatiilor(s_init,n,nominatii);
}
