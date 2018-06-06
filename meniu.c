

///\file meniu.c
///\brief Implementarea meniului de selecție .
///
///Creat de Sergiu Voloc pe 05/06/18.
///
///   Cu ajutorul instrucțiunii switch se formează un meniu util
///care să permită navigarea în momentul rulării programului.


int nr_monede; ///\var nr_monede este numărul de monede.
int suma_in;
int t;
int ban[] = {};
char DateIntrare(){
    ///\fn DateIntrare(){
    ///\brief Funcția ce ne ajută să introducem sume întregi.
    ///
    char alege;
    scanf("%c",&alege);
    return alege;
 }

 void MeniulPrincipal(){
    ///\fn MeniulPrincipal()
    ///\brief Afișează opțiunile meniului.
    /// Pentru a efectua orice oprație, se introduce litera corespunzătoare.

    printf("\t ======= Meniu =======\n");
    printf("\t Selectati operatiile dorite:\n\n");
    printf("\t a -> Introduce suma initiala\n");
    printf("\t b -> Suma initiala qie \n");
    printf("\t e -> Afiseaza suma initiala \n");

    printf("\n\t c -> Introduce nominatiile monedelor\n");
    printf("\t d -> Nominatiile monedelor aleatorii \n");
    printf("\t f -> Afiseaza nominatiile monedelor \n");

    printf("\n\t g -> Metoda 1\n");
    printf("\t h -> Metoda 2\n");
    printf("\t q -> Inchidere program \n");
 }
 void Optiuni(){
    ///\fn Optiuni()
    ///\brief Execută programul penru fiecare caz.
    ///\var ( char alege )Conține variabilele alege
    char alege = "";
    do{
        system("cls"); /// Cu ajutorul system("cls") ecranul se șterge la fiecare etapă
        MeniulPrincipal(); /// Apelarea funcției care afișează meniul
        alege = DateIntrare();
        switch(alege){ /// folosim switch pentru a schimba alegerea
            case 'a': ///\b Cazul a
                      /// Inrtoducem de la tastatură suma inițială
                printf("Introduce suma initiala\n");
                scanf("%d",&suma_in);
                break;
            case 'b':///\b Cazul n
                      /// Are loc Generarea aleatoare a unei sume
                suma_in = aleator_int(20,90);
                break;
                case 'c':///\b Cazul c
                      /// Introducerea nominațiilor prin spațiu
                printf("Numarul de nominatii ");
                scanf("%d",&nr_monede);
                printf("Nomintiile prin spatiu ");
                for(int i=0;i<nr_monede;i++){
                    scanf("%d",&ban[i]);
                }
                break;
            case 'd':///\b Cazul c
                      /// Introducerea numărului de nominații
                printf("Numarul de nominatii ");
                scanf("%d",&nr_monede);
                ban[0] = 1;
                for(int i=1;i<nr_monede;i++){
                    ban[i] = aleator_int(i+1,90-i);
                }
                break;
            case 'g':///\b Cazul g
                      /// Se rezolvă folosind metoda 1
                printf("\n< --- Metoda 1 --- >\n");
                m_unu(suma_in,nr_monede,ban);
                printf("\n");
                scanf("\n%d",&t);
                break;
            case 'h':///\b Cazul h
                      /// Se rezolvă folosind metoda 2
                printf("\n< --- Metoda 2 --- >\n");
                m_doi(suma_in,nr_monede,ban);
                printf("\n");
                scanf("\n%d",&t);
                break;
            case 'e':///\b Cazul e
                      /// Afișează suma inițială
                printf("\nSuma initiala:%d",suma_in);
                printf("\n");
                scanf("\n%d",&t);
                break;
            case 'f':///\b Cazul f
                      /// Afișează nominațiile
                printf("Nomintiile monedelor\n");
                 for(int i=0;i<nr_monede;i++){
                    printf("%d\t",ban[i]);
                }
                printf("\n");
                scanf("%d",&t);
                break;
            case 'q': ///\b Cazul a
                      /// Are loc Ieșirea din program.
                break;
            default:
                break;
        }
    } while(alege!='q');
    system("PAUSE");
 }
