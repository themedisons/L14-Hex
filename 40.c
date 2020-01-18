/* Programma 40.c
Masīva kārtošana 
Raivis Medvedevs 193NEB004 NEMB0
*/

#include <stdio.h>

int main(){

	int i, j, k; // ciklu mainīgie
	int Temp; // īslaicīgais mainīgais
	int mas3[]= {2, 5, 3, 7, 0}; // kārtojamo skaitļu masīvs
	printf("Masīva izmērs = %ld\n", sizeof(mas3)/sizeof(int));

	for (i=0; i<5; i++){ // cikliska masīva kārtošana ar burbuli
		for (j=0; j<(5-1); j++){ // nākošais cikls ir par vienu mazāks
			if (mas3[j] > mas3[j+1]){
				Temp = mas3[j];
				mas3[j] = mas3[j+1];
				mas3[j+1] = Temp;
			}
		}
	}
// sakārtotā masīva izvade uz ekrāna
	for(k=0; k<5; k++){
		printf("%d,",mas3[k]);
		printf("\n");
	}
}
