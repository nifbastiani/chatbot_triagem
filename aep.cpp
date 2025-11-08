#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include <ctype.h>
#include <locale.h>

    int id;
    int cont=0;
    int qgripe=0;
    int qdengue=0;
    int denHemorragica=0;
    int qcovid=0;
    float alt,pes;
    char nome[20],alerg,doenca[20],med[20];


void dadosPessoais(){
	char cron;
	printf("  ____ _   _    _  _____   ____   ___ _____ \n / ___| | | |  / \\|_   _| | __ ) / _ \\_   _|\n| |   | |_| | / _ \\ | |   |  _ \\| | | || |  \n| |___|  _  |/ ___ \\| |   | |_) | |_| || |  \n \\____|_| |_/_/   \\_\\_|   |____/ \\___/ |_|  \n\n");
	
	printf("Qual seu primeiro nome? ");
     scanf("%s",&nome);
	printf("\n -------------------------------------------------------------------------------------------------------\n");
	printf("   Muito bem vindo(a) %s!,                                                                         \n",strupr(nome));
	printf("   iremos tirar algumas informações pessoais para identificar alguns sintomas.                         \n");
	printf(" -------------------------------------------------------------------------------------------------------\n\n");
	
	do{
    	printf("\nQual sua idade? ");
    	scanf("%d",&id);
    	if (id<=0 || id>120) {
    		printf("Digite entre 1 e 120!\n");
    	}
    } while (id<=0 || id>120);

	do{
    	printf("\nQual sua altura? ");
    	scanf("%f",&alt);
    	if (alt<=0 || alt>2.80) {
    		printf("Digite entre 1 e 2,80! ");
    	}
	} while (alt<=0 || alt>2.80);
    
	do{ 
    	printf("\nQual seu peso(em KG)? ");
    	scanf("%f",&pes);
    	if (pes<=0 || pes>450){
    		printf("Digite um peso entre 1 e 450! \n");
		}
	} while (pes<=0 || pes>450);
    
	do{
    	printf("\nPossui alergia a algum medicamento?(S ou N) ");
    	scanf(" %c",&alerg);
    	alerg=toupper(alerg);
    	if (alerg!='S' && alerg!='N') {
    		printf("Digite S ou N! \n");
		}
	} while (alerg!='S' && alerg!='N');
	
	if (alerg=='S') {
		while (getchar() != '\n');
		printf("Qual medicamento? ");
		fgets(med, 20, stdin);
		med[strcspn(med, "\n")] = 0; 
	}  
    system("cls");
}

void sintomas(){  
	char feb,vomt,fund,man,ar,art,urn,tos,diar,gar,pdo;
	float gfeb;
	
	printf("\n -------------------------------------------------------------------------------------------------------\n");
	printf("   Agora %s,                                                                                       \n",strupr(nome));
	printf("   informe os sintomas que você apresentou nos últimos dias.                                           \n");
	printf(" -------------------------------------------------------------------------------------------------------\n\n");
	
	do{
		printf("\n1 - Está sentindo febre?(S/N) ");
		scanf(" %c",&feb);
		feb=toupper(feb);
		if (feb!='S' && feb!='N'){
    			printf("Digite S ou N! \n");
		}
	} while (feb!='S' && feb!='N');
	
	if (feb=='S') {
		printf("Quantos graus de febre? ");
		scanf("%f",&gfeb);
		if(gfeb<37.5){
			printf("Não é considerado febre! Porém fique atento a sua temperatura.\n");
		}else{
			qgripe = qgripe + 1;
            	qdengue = qdengue + 1;
            	qcovid = qcovid + 1;
		}
	}
	
	do{
		printf("\n2 - Está com dor de garganta?(S ou N) ");
		scanf(" %c", &gar);
		gar=toupper(gar);
		if (gar!='S' && gar!='N'){
    			printf("Digite S ou N! \n");
		}else if (gar == 'S'){
			qgripe = qgripe + 2; 
            	qcovid = qcovid + 1;
		}
	} while (gar!='S' && gar!='N');
	
	do{
		printf("\n3 - Está com tosse?(S/N) ");
		scanf(" %c", &tos);
		tos=toupper(tos);
		if (tos!='S' && tos!='N'){
    			printf("Digite S ou N! \n");
		}else if (tos == 'S'){
			qgripe = qgripe + 2; 
            	qcovid = qcovid + 1; 
		}
	} while (tos!='S' && tos!='N');
	
	do{
		printf("\n4 - Está com enjoo ou vômito?(S/N) ");
		scanf(" %c",&vomt);
		vomt=toupper(vomt);
		if (vomt!='S' && vomt!='N'){
    			printf("Digite S ou N! \n");
		}else if(vomt == 'S'){
			qdengue = qdengue + 1; 
            	cont = cont + 1;   
		}
	} while (vomt!='S' && vomt!='N');
		
	do{
		printf("\n5 - Está com diarreira?(S/N) ");
		scanf(" %c", &diar);
		diar=toupper(diar);
		if (diar!='S' && diar!='N'){
    			printf("Digite S ou N! \n");
		}else if(diar == 'S'){
			cont = cont + 1;
		}
	} while (diar!='S' && diar!='N');
	
	do{
		printf("\n6 - Está com perda de paladar ou olfato?(S/N) ");
		scanf(" %c", &pdo);
		pdo=toupper(pdo);
		if (pdo!='S' && pdo!='N'){
    			printf("Digite S ou N! \n");
		}else if(pdo == 'S'){
			qcovid = qcovid + 3;	
		}
	} while (pdo!='S' && pdo!='N');
	
	do{
		printf("\n7 - Está sentindo falta de ar ou dor ao respirar?(S/N) ");
		scanf(" %c",&ar);
		ar=toupper(ar);
		if (ar!='S' && ar!='N'){
    			printf("Digite S ou N! \n");
		}else if(ar == 'S'){
			qcovid = qcovid + 2;	
		}	
	} while (ar!='S' && ar!='N');
	
	do{
		printf("\n8 - Está sentindo dor nas articulações?(S/N) ");
		scanf(" %c",&art);
		art=toupper(art);
		if (art!='S' && art!='N'){
    			printf("Digite S ou N! \n");
		}else if(art == 'S'){
			qdengue = qdengue + 2; 
            	qgripe = qgripe + 1; 
		}
	} while (art!='S' && art!='N');

	do {
		printf("\n9 - Está sentindo dor no fundo dos olhos?(S/N) ");
		scanf(" %c",&fund);
		fund=toupper(fund);
		if (fund!='S' && fund!='N'){
    			printf("Digite S ou N! \n");
		}else if (fund == 'S'){
			qdengue = qdengue + 3;
		}
	} while (fund!='S' && fund!='N');
	
	do{
		printf("\n10 - Está com manchas na pele?(S/N) ");
		scanf(" %c",&man);
		man=toupper(man);
		if (man!='S' && man!='N'){
    			printf("Digite S ou N! \n");
		}else if (man == 'S'){
			qdengue = qdengue + 2;
		}
	} while (man!='S' && man!='N');
	
	do{
		printf("\n11 - Está com urina rosa, marrom ou vermelha?(S/N) ");
		scanf(" %c", &urn);
		urn=toupper(urn);
		if (urn!='S' && urn!='N'){
    			printf("Digite S ou N! \n");
		}else if (urn == 'S'){
			denHemorragica++;
		}
	} while (urn!='S' && urn!='N');
	system("cls");
	
}

void tdengue_hemorragica(){
	printf("\t ---------------------------------------------------------------------\n");
	printf("\t|              DIAGNÓSTICO: DENGUE HEMORRÁGICA                        |\n");
	printf("\t ---------------------------------------------------------------------\n");
	printf("\tALERTA!\n");
	printf("\tAtenção: A Dengue Hemorrágica (ou Dengue Grave) é uma emergência médica.\n");
	printf("\tÉ caracterizada por sinais de alarme como sangramentos, dor abdominal intensa,\n");
	printf("\tvômitos persistentes e queda de pressão.\n\n");
	printf("\tAÇÃO IMEDIATA:O tratamento deve ser feito em ambiente\n");
	printf("\thospitalar com monitoramento contínuo e hidratação intravenosa.\n");	
	if (strcmp(med, "paracetamol") == 0) {
        printf("\n\tALERTA: Você é alérgico a %s. O Paracetamol é o medicamento de escolha para Dengue Hemorrágica.\n", med);
        printf("\tProcure um médico IMEDIATAMENTE para uma alternativa segura (ex: Dipirona, se não houver restrição).\n\n");
    } else {
        printf("\n\tPara dor e febre, o medicamento de escolha é o Paracetamol.\n");
        printf("\tÉ ESTRITAMENTE PROIBIDO o uso de AAS (Aspirina) e anti-inflamatórios (como Ibuprofeno),\n");
        printf("\tpois podem aumentar o risco de hemorragias.\n\n");
    }
}

void tcovid(){
	printf("\t ---------------------------------------------------------------------\n");
	printf("\t|                     DIAGNÓSTICO: COVID-19                           |\n");
	printf("\t ---------------------------------------------------------------------\n");
	printf("\tTRATAMENTO E RECOMENDAÇÕES\n\n");
	printf("\tConfirmação Médica: É essencial procurar um médico ou unidade de saúde para\n");
	printf("\tconfirmar o diagnóstico através de testes e receber orientação sobre o tratamento\n");
	printf("\tmais adequado ao seu caso.\n\n");
	printf("\tIsolamento: Mantenha isolamento social para evitar a transmissão do vírus.\n\n");
	printf("\tHidratação e Repouso: Beba bastante líquido e descanse.\n\n");
	printf("\tMonitoramento: Monitore sintomas como febre e dificuldade para respirar.\n\n");
	printf("\tSinais de Alarme: Se houver falta de ar, dor no peito ou confusão mental,\n");
	printf("\tprocure atendimento médico de emergência imediatamente.\n\n");
	printf("\tMedicação: Para dor e febre, o Paracetamol ou Dipirona são geralmente indicados.\n\n");
	printf("\tEvite a automedicação e consulte um profissional de saúde.\n\n");
	if (strcmp(med, "dipirona") == 0 || strcmp(med, "paracetamol") == 0){
		printf("\t-------------------------------------------------------\n");
		printf("\tATENÇÃO: Você possui alergia a um dos medicamentos!\n");
		printf("\t-------------------------------------------------------\n\n");
	}
}

void tdengue(){
	printf("\t ---------------------------------------------------------------------\n");
	printf("\t|                     DIAGNÓSTICO: DENGUE                             |\n");
	printf("\t ---------------------------------------------------------------------\n");
	printf("\tTRATAMENTO\n");
	printf("\tHidratação: essencial no tratamento da dengue, pois os pacientes geralmente\n");
	printf("\ttapresentam febre alta e suor excessivo, que pode levar à desidratação.\n");
	printf("\tRepouso: descansar é importante para permitir que o corpo se recupere.\n");
	printf("\tMonitoramento médico: pessoas com dengue devem ser acompanhadas de perto\n");
	printf("\tpor um profissional responsável, que possa monitorar os níveis de plaquetas\n");
	printf("\tno sangue e a evolução dos sintomas.\n\n");
	if (strcmp(med, "paracetamol") == 0) {
        printf("\tALERTA: Você é alérgico a %s. O Paracetamol é o medicamento de escolha para Dengue.\n", med);
        printf("\tProcure um médico IMEDIATAMENTE para uma alternativa segura (ex: Dipirona, se não houver restrição).\n\n");
    } else {
        printf("\tMedicamento: Para dor e febre, o medicamento de escolha é o Paracetamol.\n");
        printf("\tÉ ESTRITAMENTE PROIBIDO o uso de AAS (Aspirina) e anti-inflamatórios (como Ibuprofeno),\n");
        printf("\tpois podem aumentar o risco de hemorragias.\n\n");
    }
	
	printf("\tALIMENTOS RECOMENDADOS\n");
	printf("\tFrutas: Maçã, banana, pera, goiaba, acerola, abacaxi e limão (sem casca/sementes).\n");
	printf("\tCarboidratos: Arroz, pão e macarrão brancos (baixa fibra).\n");
	printf("\tProteínas: Frango, ovo, peixe e carne bovina magra (baixa gordura).\n");
	printf("\tVegetais: Abobrinha, chuchu, cenoura, abóbora e batata (cozidos e sem casca).\n");
	printf("\tLaticínios/Bebidas: Leite desnatado, iogurte, água, água de coco e sucos naturais.\n");
}

void tvirose(){
	printf("\t ---------------------------------------------------------------------\n");
	printf("\t|                     DIAGNÓSTICO: VIROSE                             |\n");
	printf("\t ---------------------------------------------------------------------\n");
	printf("\tTRATAMENTO\n");
	printf("\tHidratação: Beba bastante líquido (água, sucos, chás) para evitar a desidratação.\n");
	printf("\tRepouso: Descanse para auxiliar a recuperação do corpo.\n");
	printf("\tAlimentação: Mantenha uma dieta leve e de fácil digestão.\n");
	printf("\tevitando automedicação e consultando um profissional de saúde.\n");
	printf("\tMedicação: Para dor e febre, o Paracetamol ou Dipirona são geralmente indicados.\n");
	printf("\tEvite a automedicação e consulte um profissional de saúde.\n\n");
	if (strcmp(med, "dipirona") == 0 || strcmp(med, "paracetamol") == 0){
		printf("\t-------------------------------------------------------\n");
		printf("\tATENÇÃO: Você possui alergia a um dos medicamentos!");
		printf("\t-------------------------------------------------------\n\n");
	
}

void tgripe(){
	printf("\t ---------------------------------------------------------------------\n");
	printf("\t|                     DIAGNÓSTICO: GRIPE                              |\n");
	printf("\t ---------------------------------------------------------------------\n");
	printf("  TRATAMENTO\n");
	printf("\tHidratação: Aumente a ingestão de líquidos para fluidificar secreções.\n");
	printf("\tRepouso: Essencial para a recuperação e para evitar a transmissão.\n");
	printf("\tHigiene: Lave as mãos frequentemente e cubra a boca ao tossir ou espirrar.\n");
	printf("\tMedicação: Para dor e febre, o Paracetamol ou Dipirona são geralmente indicados.\n");
	printf("\tEvite a automedicação e consulte um profissional de saúde.\n\n");
	if (strcmp(med, "dipirona") == 0 || strcmp(med, "paracetamol") == 0){
		printf("\t-------------------------------------------------------\n");
		printf("\tATENÇÃO: Você possui alergia a um dos medicamentos!\n");
		printf("\t-------------------------------------------------------\n\n");
	}
}


int main(){
    setlocale(LC_ALL,"portuguese");
    
    dadosPessoais();
    sintomas();
    
    if(denHemorragica > 0){
        tdengue_hemorragica();
    }else if(qcovid >= 4){
        tcovid();
    }else if(qdengue >= 5){
        tdengue();
    }else if (cont >= 3){
        tvirose();
    }else if(qgripe >= 3){
        tgripe();
    }else{
        printf("Diagnóstico: Não foi possível determinar. Procure um médico se os sintomas persistirem.\n");
    }
    
    system("pause");
}

