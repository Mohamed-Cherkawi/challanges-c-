#include <stdio.h>

int main() {
	int years,num;
	printf("Entrer les nombres d'annees : \n");
		scanf("%d",&years);
		float result1 = years * 12;
		float result2 = years *365;
		float result3 = years * 365 * 24;
		float result4 = years  * 365 * 24 *60;
		float result5 = years  * 365 * 24 * 60 * 60;

	
/*	float months = years * 12;
	float jours = years * 365;
	float heures = jours *24;
	float minutes = heures * 60;
	float secondes = minutes * 60; */
	 	printf("Entrez un numero pour transformer en format convenable ?! ");
		printf("Entrer 1 --> le mois | 2--> les jours | 3-->les heures | 4-->les minutes | 5-->les secondes \n");
	    	scanf("%d",&num);
	
	switch (num) {
		case 1 : 
				printf("%f mois",result1);
		break;
		
		case 2 : 
				printf("%f jours",result2);

		break;
		
		case 3 : 
				printf("%f heures",result3);
		break; 
		
		case 4 : 
				printf("%f minutes",result4);

		break;
		
		case 5 : 
				printf("%f secondes",result5);

		break;
		
		default : printf("Invalid num ?! run the programm again");
	}
	
	
	
	
	return 0;
}
