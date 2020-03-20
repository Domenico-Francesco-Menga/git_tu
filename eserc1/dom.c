/*
 * dom.c
 *
 *  Created on: 02/dic/2018
 *      Author: Pronto all'uso
 */

#include<stdio.h>
#define MAX 10;

int main(){
int i=0;
int array[MAX]={0};
int count=0;

for(i=0;i<MAX;i++){
	printf("\nInserire il %d valore:",i+1);
	scanf("%d",array[i]);
}
	i=0;
	while(i<MAX){
		printf("valore: %d",array[i]);
		if(array[i]%2==0){
		count++;
		}
	}
	printf("\nson stati inserito %d valori pari",count);
			
return 0

}
