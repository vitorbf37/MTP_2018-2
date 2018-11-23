//Vitor Braga Ferreira
//11811EAU005

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef
	struct p {
		float x;
		float y;
	}
Ponto;

Ponto * geraPontos(int N){
	Ponto * pontos = (Ponto *) calloc(N,sizeof(Ponto));
	int i;
	for(i=0; i<N; i++){
		pontos[i].x = cos(i*2.0*M_PI/(N-1));
		pontos[i].y = sin(i*2.0*M_PI/(N-1));
	}
	return pontos;
}

void mostraPontos(Ponto * pi, Ponto * pf){
	if(pi < pf){
		printf("(%.3f, %.3f) ", pi->x, pi->y);
		mostraPontos(pi+1, pf);
	}
}

int main()
{
	unsigned int N;
	Ponto * pontos;
	printf("Digite o numero de pontos: ");
	scanf("%d",&N);
	getchar();
	pontos = geraPontos(N);
	mostraPontos(pontos, pontos+N);
	free(pontos);
	return 0;
}
  
  
  
  
