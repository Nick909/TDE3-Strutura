#include <stdio.h>
#include <stdlib.h>

int cresce(void const *a, void const *b ) {
  if (*(int*) a == *(int*) b) {
	return 0;
  } else {
	if (*(int*) a < *(int*)b){
		return -1;
	}else {
		return 1;
	}
  }
  
}

int decresce(void const *a, void const *b ) {
  if (*(int*) a == *(int*) b) {
	return 0;
  } else {
	if (*(int*) a < *(int*)b){
		return 1;
	}else {
		return -1;
	}
  }
}

void print (int num, int *vetor) {
	int i;
	for(i = 0; i < num; i++) {
        printf("%d\n", vetor[i]);
    }
}

int main() {
    int num1, num2, par = 0, impar = 0;
    int i;
    
    scanf("%d", &num1);
    int numPar[num1];
    int numImpa[num1];
    
    for(i = 0; i < num1; i++){
        scanf("%d", &num2);
        if(num2 %2 == 0){
            numPar[par] = num2;
            par++;
        }else{
            numImpa[impar] = num2;
            impar++;
        }
    }
    qsort(numPar, par, sizeof(int), cresce);
    qsort(numImpa, impar, sizeof(int), decresce);
	print(par, numPar);
	print(impar, numImpa);
    
    return 0;
}
