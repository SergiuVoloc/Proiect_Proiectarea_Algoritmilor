
//aici sunt fucntiile pentru afisarea meniului;

int nr_monede, suma_in, t;
int ban[] = {50,25,10,5,1};
char DateIntrare(){
    char alege;
    scanf("%c",&alege);
    return alege;
 }

 void MeniulPrincipal()
 {
    printf("\t ======= Main Menu =======\n");
    printf("\t Selectati operatiile dorite:\n\n");
    printf("\t a -> Introduce suma initiala\n");
    printf("\t b -> Suma initiala aleatorie \n");
    printf("\t e -> Afiseaza suma initiala \n");

    printf("\n\t c -> Introduce nominatiile monedelor\n");
    printf("\t d -> Nominatiile monedelor aleatorii \n");
    printf("\t f -> Afiseaza nominatiile monedelor \n");

    printf("\n\t g -> Metoda 1\n");
    printf("\t h -> Metoda 2\n");
    printf("\t q -> Inchidere program \n");
 }
 void Optiuni(){
    char alege = "";
    do{
        system("cls"); /// stergerea ecranul
        MeniulPrincipal();
        alege = DateIntrare();
        switch(alege){
            case 'a':
                printf("Introduce suma initiala\n");
                scanf("%d",&suma_in);
                break;
            case 'b':
                suma_in = aleator_int(20,90);
                break;
                case 'c':
                printf("Numarul de nominatii ");
                scanf("%d",&nr_monede);
                printf("Nomintiile prin spatiu ");
                for(int i=0;i<nr_monede;i++){
                    scanf("%d",&ban[i]);
                }
                break;
            case 'd':
                printf("Numarul de nominatii ");
                scanf("%d",&nr_monede);
                ban[0] = 1;
                for(int i=1;i<nr_monede;i++){
                    ban[i] = aleator_int(i+1,90-i);
                }
                break;
            case 'g':
                printf("\n< --- Metoda 1 --- >\n");
                metoda_1(suma_in,nr_monede,ban);
                printf("\n");
                scanf("\n%d",&t);
                break;
            case 'h':
                printf("\n< --- Metoda 2 --- >\n");
                metoda_2(suma_in,nr_monede,ban);
                printf("\n");
                scanf("\n%d",&t);
                break;
            case 'e':
                printf("\nSuma initiala:%d",suma_in);
                printf("\n");
                scanf("\n%d",&t);
                break;
            case 'f':
                printf("Nomintiile monedelor\n"); ///introducerea nominatiilor
                for(int i=0;i<nr_monede;i++){
                    printf("%d\t",ban[i]);
                }
                printf("\n");
                scanf("%d",&t);
                break;
            case 'q':
                break;
            default:
                break;
        }
    } while(alege!='q');
    system("PAUSE");
 }
