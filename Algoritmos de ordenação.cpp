#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int vet[10] = {7, 13, 20, 5, 12, 10, 8, 9, 2, 3};
int i,aux,j;	

void bubble(){
	
	for(i=0;i<10;i++){
		
	
	for(j=0;j<10-1-i;j++){
		
		if(vet[j] > vet[j+1]){
			aux = vet[j];
			vet[j] = vet[j+1];
			vet[j+1] = aux;		
			}
		}
	}	
}

void lervetor (){
		printf("\n>digite 6 numeros para ordenar\n");
	for(i=0;i<10;i++){
		printf("\nvetor[%i]",i);
		scanf("%i",&vet[i]);
	}
}

void selection(){
	
	int menor;
	for(int i=0;i<10-1;i++){  //pode-se declarar a variavel direto no laço de repetição
		menor = i;  
		for(int j=i+1 ;j<10 ;j++){
			if(vet[menor] >vet[j]){
				menor = j;
			}
			if(i !=menor){
				aux = vet[i];
				vet[i] = vet[menor];
				vet[menor] = aux;
			}	
		}
	}
}

void insertion (){
	for(i=1;i<10;i++){
		aux = vet[i];
		j = i-1;
		
		while( (j >=0) && (aux < vet[j])){
			vet[j+1] = vet[j];
			j--;
		}
		vet[j+1] = aux;
	}


}

void merge(){
	
}

void heap(){
	
}

void quick(){
	
}

int main(){
	int op;
	i = 0;
	
	printf("\n===============Sistema de Ordenacao====================\n");
	//lervetor(); 
	// caso seja necessario a leitura do vetor
	
	printf("\nescolha qual algoritmo de ordemacao ira utilizar\n");
	printf("\n1 - Bubble Sort\n");
	printf("\n2 - Selection Sort\n");
	printf("\n3 - Insertion Sort\n");
	printf("\n4 - Merge Sort (em construcao)\n");
	printf("\n5 - heap Sort (em construcao)\n");
	printf("\n6 - Quick Sort (em construcao)\n");
	printf(">");
	scanf("%i",&op);
	
	switch(op){
		
	case 1: 
		bubble();
		printf("vetor ordenado atraves do buble sort: ");
		for(i=0;i<10;i++){
			printf("\n%i",vet[i]);
		}
	break;
	
	case 2:
		selection();
		printf("vetor ordenado atraves do selection sort: ");
		for(i=0;i<10;i++){
			printf("\n%i",vet[i]);
		}
		break;
	
	case 3:
		insertion();
		printf("vetor ordenado atraves do insertion sort: ");
		for(i=0;i<10;i++){
			printf("\n%i",vet[i]);
		}
		break;
		
	case 4:
		merge();
		break;
	
	case 5:
		heap();
		break;
	
	case 6:
		quick();
		break;
	
	default:
		printf("opcao incorreta");
		break;
			
	}
	
	getch();
	system("cls");
	main();
	return 0;
}
