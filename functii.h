#ifndef FUNCTION_H_INCLUDED
#define FUNCTION_H_INCLUDED



int aleator_int(int min, int max){
    srand(time(0));
    int r;
    for (int i=0;i<5;i++){
         r = rand() % (max + 1 - min) + min;
    }
    return r;
}

int suma_in_bani(float s){
    return s*100;
}

void sortare_desc(int *a, int n){
    for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			if (a[j] < a[i]){
				int tmp = a[i]; /// tmp e o variabila temporara sortarea e facuta cu metoda bubble sort/ metoda bulelor
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
}
void sortare_asc(int *a, int n){
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

