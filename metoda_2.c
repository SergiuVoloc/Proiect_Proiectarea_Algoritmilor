
///\file metoda_2.c
///\brief Imprelementarea metodei 2 .
///
///Creat de Sergiu Voloc pe 05/06/18.<br>
/// Acestă metodă este bazată pe programarea dinamică<br>



void calculul_nominatiilor(int s_init, int n,int nominatii[] ){
    ///\fn void calculul_nominatiilor(int s_init, int n,int nominatii[] )
    ///\brief Calculează nr de monede foolosind metoda 2.
    ///\param s_init Primul întreg
    ///\param n Al doilea întreg
    ///\param  nominatii Al treilea întreg


    int i, j, k;
    ///\var i,j,k iteratorii necesari
    int min_monede_necesare[100]= {0};
    int tabel[100][100] = {0};

    int minimum;
    int frecventa_de_nominatii = 0;
    min_monede_necesare[0] = 0;
    sortare_asc(nominatii,n); ///sortarea ascendentă a nominațiilor
    for (i=1; i <= s_init; i++){
        minimum = 999;
        for (j = 0; j<n; j++){
            if (nominatii[j] <= i){
                if (minimum > min_monede_necesare[i-nominatii[j]]+1){
                    minimum = min_monede_necesare[i-nominatii[j]]+1;
                    for(k = 0; k < n; ++k){
                        tabel[i][k] = tabel[i-nominatii[j]][k];
                    }
                    tabel[i][j]++;
                }
            }
        }
        min_monede_necesare[i] = minimum;
    }
    printf("Numarul minim de monede : %d \n", min_monede_necesare[s_init]);
    for(int i = 0; i < n; ++i){
        if(tabel[s_init][i]!=0){
            frecventa_de_nominatii = tabel[s_init][i];
            int k = 0;
            while(tabel[s_init][i]!=0){
                k+=1;
                tabel[s_init][i]=tabel[s_init][i]-1;
            }
            printf("[%d] -> %d \n", nominatii[i],k);
        }
    }
}

void m_doi(int s_init, int n, int nominatii[]){
    ///\fn void m_doi(int s_init, int n, int nominatii[])
    ///\brief Apelează funcția ce calculează nr minim  de monede
     ///\param s_init Primul întreg
    ///\param n Al doilea întreg
    ///\param  nominatii Al treilea întreg

    calculul_nominatiilor(s_init,n,nominatii);
}

