
///\file functii.h
///\brief Librăria cu toate funcțiile necesare programului.
///
///Creat de Sergiu Voloc pe 05/06/18.
///
///   Implementarea a 2 metode ce oferă un număr cât mai mic
///de monede în urma conversiei unei sume de lei inițială


#ifndef FUNCTION_H_INCLUDED
#define FUNCTION_H_INCLUDED



int aleator_int(int min, int max){
    ///\fn void aleator_int(int min, int max)
    ///\brief Generaeză un număr întreg aleatoriu.
    ///\param min Primul întreg
    ///\param max Al doilea întreg
    ///
    ///Generează suma dată pentru a forma suma inițială în lei.
    srand(time(0));
    int r;
    for (int i=0;i<5;i++){
         r = rand() % (max + 1 - min) + min;
    }
    return r;
}






int suma_in_bani(float s){

/*!
* \fn void suma_in_bani(float s)
* \brief Convertează suma inițială din lei în bani.
* \param s Paramentru flotant
*  Înmulțește suma de lei cu 100 pentru a face trecerea la bani
*/

    return s*100;
}

void sortare_desc(int *a, int n){
    ///\fn void sortare_desc(int *a, int n)
    ///\brief Sortează descrescător nominațiile de bănuți.
    ///\param *a Primul întreg
    ///\param n Al doilea întreg
    ///
    ///Sortează prin metoda Bulelor în ordine descrescătoare pentru
    ///ca programul să identifice cea mai mare și cea mai mică valoare.
    for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			if (a[j] < a[i]){
				int tmp = a[i]; /// tmp e o variabila temporara necesară
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
}

void sortare_asc(int *a, int n){
    ///\fn void sortare_asc(int *a, int n)
    ///\brief Sortează crescător nominațiile de bănuți.
    ///\param *a Primul întreg
    ///\param n Al doilea întreg
    ///
    ///Sortează prin metoda Bulelor în ordine crescătoare pentru
    ///ca programul să funcționeze cu algoritmul 2 al programului.
    for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			if (a[j] > a[i]){
				int tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
}

#endif // FUNCTION_H_INCLUDED

