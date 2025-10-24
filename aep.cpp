#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <locale.h>

    int  id;
    float alt,pes;
    char nome[20],alerg,cron,med[20];

void infop(){
	
	printf("Qual seu nome? ");
    scanf("%s",&nome);
	
	printf("Muito bem vindo(a) %s!, iremos tirar algumas informações pessoais para identificar alguns sintomas. \n",nome);
	printf("-----------------------------------------\n");
	
	do{
    	printf("Qual sua idade? ");
    	scanf("%d",&id);
    	if (id<=0 || id>120) {
    		printf("Digite entre 1 e 120! ");
    	}
    } while (id<=0 || id>120);

	do{
    	printf("Qual sua altura? ");
    	scanf("%f",&alt);
    	if (alt<=0 || alt>2.80) {
    		printf("Digite entre 1 e 2.80! \n");
    	}
	} while (alt<=0 || alt>2.80);
    
	do{ 
    	printf("Qual seu peso(em KG)? ");
    	scanf("%f",&pes);
    	if (pes<=0 || pes>450){
    		printf("Digite um peso entre 1 e 450! \n");
		}
	} while (pes<=0 || pes>450);
    
	do{
    	printf("Possui alergia a algum medicamento?(S ou N) ");
    	scanf(" %c",&alerg);
    	alerg=toupper(alerg);
    	if (alerg!='S' && alerg!='N') {
    		printf("Digite S ou N! \n");
		}
	} while (alerg!='S' && alerg!='N');
	
	if (alerg=='S') {
		printf("Qual medicamento? ");
		scanf("%s",&med);
	}
	
    do{
    	printf("Possui alguma doenca cronica?(S ou N) ");
    	scanf(" %c",&cron);
    	cron=toupper(cron);
    	if (cron!='S' && cron!='N') {
    		printf("Digite S ou N! \n");
		}
    } while (cron!='S' && cron!='N');
    
    
}

void sint(){
	char feb,vomt,fund,man,can,art,sang,urn,tos,diar,cala,gar;
	int gfeb;
	
	printf("-----------------------------------------\n");
	
	do{
		printf("Está sentindo febre?(S ou N) ");
		scanf(" %c",&feb);
		feb=toupper(feb);
		if (feb!='S' && feb!='N'){
    		printf("Digite S ou N! \n");
		}
	} while (feb!='S' && feb!='N');
	
	if (feb=='S') {
		printf("Quantos graus de febre? ");
		scanf("%d",&gfeb);
	}
	
	do{
		printf("Está com enjôo ou vômito?(S ou N) ");
		scanf(" %c",&vomt);
		vomt=toupper(vomt);
		if (vomt!='S' && vomt!='N'){
    		printf("Digite S ou N! \n");
		}
	} while (vomt!='S' && vomt!='N');
	
	do {
		printf("Está sentindo dor no fundo dos olhos?(S ou N) ");
		scanf(" %c",&fund);
		fund=toupper(fund);
		if (fund!='S' && fund!='N'){
    		printf("Digite S ou N! \n");
		}
	} while (fund!='S' && fund!='N');
	
	do{
		printf("Está com manchas na pele?(S ou N) ");
		scanf(" %c",&man);
		man=toupper(man);
		if (man!='S' && man!='N'){
    		printf("Digite S ou N! \n");
		}
	} while (man!='S' && man!='N');
	
	do{
		printf("Está sentindo cansaço excessivo?(S ou N) ");
		scanf(" %c",&can);
		can=toupper(can);
		if (can!='S' && can!='N'){
    		printf("Digite S ou N! \n");
		}
	} while (can!='S' && can!='N');
	
	do{
		printf("Está sentindo dor nas articulações?(S ou N) ");
		scanf(" %c",&art);
		art=toupper(art);
		if (art!='S' && art!='N'){
    		printf("Digite S ou N! \n");
		}
	} while (art!='S' && art!='N');
	
	do{
		printf("Está com sangramento pelo nariz, olhos ou gengivas?(S ou N) ");
		scanf(" %c",&sang);
		sang=toupper(sang);
		if (sang!='S' && sang!='N'){
    		printf("Digite S ou N! \n");
		}
	} while (sang!='S' && sang!='N');
	
	do{
		printf("Está com urina rosa, marrom ou vermelha?(S ou N) ");
		scanf(" %c",urn);
		urn=toupper(urn);
		if (urn!='S' && urn!='N'){
    		printf("Digite S ou N! \n");
		}
	} while (urn!='S' && urn!='N');
	
	do{
		printf("Está com tosse?(S ou N) ");
		scanf(" %c",tos);
		tos=toupper(tos);
		if (tos!='S' && tos!='N'){
    		printf("Digite S ou N! \n");
		}
	} while (tos!='S' && tos!='N');
	
	do{
		printf("Está com diarreira?(S ou N) ");
		scanf(" %c",diar);
		diar=toupper(diar);
		if (diar!='S' && diar!='N'){
    		printf("Digite S ou N! \n");
		}
	} while (diar!='S' && diar!='N');
	
	do{
		printf("Está sentindo calafrios?(S ou N) ");
		scanf(" %c",cala);
		cala=toupper(cala);
		if (cala!='S' && cala!='N'){
    		printf("Digite S ou N! \n");
		}
	} while (cala!='S' && cala!='N');
	
	do{
		printf("Está com dor de garganta?(S ou N) ");
		scanf(" %c",gar);
		gar=toupper(gar);
		if (gar!='S' && gar!='N'){
    		printf("Digite S ou N! \n");
		}
	} while (gar!='S' && gar!='N');
}

// GLOBAL
int main(){
    int gripe,covid,dengue;
    setlocale(LC_ALL,"portuguese");
    
    infop();
    sint();
    
    system("pause");
}
