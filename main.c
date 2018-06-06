
///\file main.c
///\brief Apelul funcției principale.
///
///Creat de Sergiu Voloc pe 05/06/18.
///
///   Apelarea funcției „Opțiuni” ne oferă posibilitatea
///de a naviga în meniul programului.


#include <stdlib.h>
#include <stdio.h> ///> printf()
#include <time.h> ///> time()
#include <math.h>
#include "meniu.c" ///> DateIntrare(), MeniulPrincipal(), Optiuni(), m_doi(), m_unu()
#include "functii.h" ///> aleator_int(), suma_in_bani(), sortare_desc(), sortare_asc()
#include "metoda_1.c" ///> m_unu(), sortare_desc()
#include "metoda_2.c" ///> calculul_nominatiilor()


int main(){
    ///\fn int main()
    ///\brief Funcția principală.
    /// Funcția ce apelează Opțiuni care se află în maniu.c
    Optiuni();
    return 0;
}
