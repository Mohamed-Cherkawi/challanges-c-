#include <stdio.h>  //Biblioth�ques .
#include <string.h>
//Variables :
int num;

//D�claration de la structure :
typedef struct  {
    char CIN [7];
    char Nom[10] ;
    char Prenom[10] ;
    float Montant ;
   
} Compte ;      
		//Supposons q'on a une base de donn�e .
/*Donn�es de Clients */ Compte Clients[5] = {  //Creation d'un tableau de la structure en haut :
		{"E560730","Rida","Foulad",21500},
  			{"E530112","Sara","Foulad",35129} ,
  				{"E968853","Mohamed","Cherkaoui",10341},
					{"E102321","Firdaouss","Cherkaoui",15000},
  						{"E508802","Salima","Foulad",70561},
};

//Toute les fonctions du programme sont l� :

void creer_un_compte(){ //************************Function 1****************************
     Compte client;

    printf("\n \tTaper le CIN :");
        scanf("%s",&client.CIN);
        printf("\n \tTaper le Nom :");
        scanf("%s",&client.Nom);
        printf("\n\tTaper le Prenom :");
        scanf("%s",&client.Prenom);
        printf("\n\ttaper votre montant :");
        scanf("%f",&client.Montant);
    printf(" CIN: %s ||\t Nom: %s ||\t Prenom: %s ||\t Montant: %0.2f DH",client.CIN,client.Nom,client.Prenom,client.Montant); }

   
   
 void creation_des_comptes(){ //************************Function 2****************************

  int nbr,i ; //Variables :
 
  printf("================================================================================================\n");
    printf("Entrez le nombre de compte que vous voulez creer : ");
    scanf("%d",&nbr);
  printf("================================================================================================\n");
    Compte multiple[nbr];
    for(i=0;i<nbr;i++){// Cette boucle permet de Creer  multiple comptes :
        printf("Entrez les donnees du compte N : (%d)",i+1);
        printf("\n \tTaper le CIN :");
        scanf("%s",multiple[i].CIN);
        printf("\n \tTaper le Nom :");
        scanf("%s",multiple[i].Nom);
        printf("\n\tTaper le Prenom :");
        scanf("%s",multiple[i].Prenom);
        printf("\n\ttaper votre montant :");
        scanf("%f",&multiple[i].Montant);
      printf("\n=================================================================================================\n");

    }
    for(i=0;i<nbr;i++) // Affichage de tout les comptes introduits :
           printf("\n CIN: %s \t  Nom: %s \t Prenom: %s  \t Montant: %f DH",multiple[i].CIN,multiple[i].Nom,multiple[i].Prenom,multiple[i].Montant);
  printf("=================================================================================================\n");
}

 void operations() { // ************************Function 3****************************
 
  int  num_compte , test  ;                      //Var
  float  n_retire , n_depose;
  char cin_entre[7];				 							//iables
 
  debut : // Si le banquier a entree un choix indisponible .
  printf("******************************************************************************************************");
  printf("\n Veuillez entrez quelle operation vous voulez ! :");
  printf("\n 1. Retrait \t || 2. Depot  \n");
  scanf("%d",&num);
  if(num < 1 || num > 2){
  goto debut;
}  
  retourne : // Si le banquier a entre un compte qui n'existe pas
  printf("********************************************************************************************************");
  printf("\n Quel compte voulez vous pour faire cette operation :  "); //Choix du compte
  scanf("%d",&num_compte);
  if (num_compte < 1 || num_compte > 5){
  goto retourne ;
}
	CinRetry :
  printf("\n \tEntrez le Cin de ce compte :  "); //Choix du compte
  scanf("%s",&cin_entre);
  	test = strncmp(cin_entre ,Clients[num_compte - 1].CIN , 7 );
  if(test == 0) {
  	printf("\n \t \t Actuel montant dans ce compte est : %0.2f",Clients[num_compte -1].Montant);

 
  if(num == 1){ // Operation de Retrait .
  printf("\n \t \t Combien vous voulez retirez d'argent : ");
  scanf("%f",&n_retire);
  printf("\n \t \t Vous avez retire :  %0.2f   ||    nouveau montant : %0.2f",n_retire,Clients[num_compte -1].Montant - n_retire);

}
  if(num == 2){ // Op�ration de depot .
  printf("\n \t \t Combien vous voulez depose d'argent : ");
  scanf("%f",&n_depose);
  printf("\n \t \t Vous avez depose :  %0.2f   ||    nouveau montant : %0.2f",n_depose,Clients[num_compte-1].Montant + n_depose);

}
  	
  } else{
  	printf("\n \tCIN Invalide veuillez ressayer");
  	goto CinRetry ;
  }

}

void affichage(){ // *********************** Function 4********************************:
int i,j;
float holder ;
debut :
printf("\n====================================================================================");
printf("\n \tDe quelle maniere voulez vous afficher les montants :");
  printf("\n \t1. Ascendant \t || 2. Descendant  \n");
scanf("%d",&num);
  if(num < 1 || num > 2){
  goto debut;
}  
if(num == 1) { // Si l'utilisateur a entree numero 1 pour afficher en ordre ascendant :

for(i = 0; i < 5 ; i++) {

for (j = i+ 1 ; j < 5 ; j++){
if(Clients[i].Montant > Clients[j].Montant) {

holder =Clients[i].Montant ;
Clients[i].Montant = Clients[j].Montant;
Clients[j].Montant = holder ;
}
}
}
printf("Affichage de tout les montants des clients en ordre Ascendant : ");
for(i = 0 ; i < 5 ; i++){

printf("\n CIN : %s ||\t Nom : %s ||\t Prenom : %s ||\t Montant : %0.2f DH",Clients[i].CIN,Clients[i].Nom,Clients[i].Prenom,Clients[i].Montant);
}
}
else {
for(i = 0; i < 5 ; i++) {

for (j = i+ 1 ; j < 5 ; j++){
if(Clients[i].Montant < Clients[j].Montant) {

holder =Clients[i].Montant ;
Clients[i].Montant = Clients[j].Montant;
Clients[j].Montant = holder ;
}
}
}
printf("\nAffichage de tout les montants en ordre Descendant ");
for(i = 0 ; i < 5 ; i++){

printf("\n CIN : %s ||\t Nom : %s ||\t Prenom : %s ||\t Montant : %0.2f DH",Clients[i].CIN,Clients[i].Nom,Clients[i].Prenom,Clients[i].Montant);
}
}
}
void fidelisation(){
	//printf()
	
}

int main(){

do
{ // Ceci est le menu principal:
printf(" \n***************************************************************************************************************** ") ;
printf(" \n                                             ;)  BANKING MENU  (; ") ;
printf(" \n***************************************************************************************************************** ") ;
printf(" \n \t \t  1 .Introduire un compte bancaire ") ;
printf(" \n \t \t  2. Introduire plusieurs comptes bancaires ") ;
printf(" \n \t \t  3. Operations ") ;
printf(" \n \t \t  4. Affichage ") ;
printf(" \n \t \t  5. Fidelisation ") ;
printf(" \n \t \t  0. Quitter ") ;



printf(" \n \t Entrez votre choix : ") ; //Selection du choix d'utilisateur :
scanf("%d",&num) ;
switch (num) { //l'instruction Switch

case 1 :{  // Creation d'un seul compte .
creer_un_compte();
break ;
}
case 2 :{  // Creer et afficher tout les donn�es de tout les clients :
creation_des_comptes();

break ;
}
case 3 :  { // Les op�rations du Retrait et Depot :
operations();
break ;
}
case 4 :  // Affichage des montants :
affichage();
break ;

case 5 :  //Fid�lisation :

break ;
case 0 :
break ;

default : {

printf("\n -_-Entrez un choix valide-_-"); //Si le banquier a choisi un nombre invalide .

}

}
} while( num != 0 ) ;

printf(" \n Relancez le programme pour l'utiliser  "); // Le banquier a quitt�


return 0;
}                                                                              
