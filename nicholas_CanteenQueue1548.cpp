#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TRUE  1
#define FALSE 0

void reondenar(int *filaS, int qtdA ) {
  int bolean, i, aux;
  do {
    bolean = FALSE;
    i = 0;
    while (i < qtdA-1) {
      if (filaS[i] < filaS[i+1]) {
        aux = filaS[i];
        filaS[i] = filaS[i+1];
        filaS[i+1] = aux;

        bolean = TRUE;
      }
      i++;
    }
  } while (bolean == TRUE);
}

int main()
{
	int filas= 0, qtdAlunos = 0, i, j, qtd;
	int filaMain[1000], filaSecundaria[1000];
	int bolean;

	scanf("%d", &filas);

	for(i = 0; i < filas; i++) {
		qtd = 0;
		scanf("%d", &qtdAlunos);

		for(j = 0; j < qtdAlunos; j++) {
			scanf("%d", &filaMain[j]);
			filaSecundaria[j] = filaMain[j];
		}

		reondenar(filaSecundaria, qtdAlunos);

		for(j = 0; j < qtdAlunos; j++) {
			if (filaMain[j] == filaSecundaria[j]){
				qtd++;
      }
    }

		printf("%d\n", qtd);
	}

	return 0;
}
