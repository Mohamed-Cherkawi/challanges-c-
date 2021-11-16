int main(){
	char c;
	printf("Enter a character : \n");
		scanf("%c",&c);
	if(c >= 65 && c <= 90){
		printf("C'est une lettre majuscule : %d",c);
	}
	else if(c >= 97 && c <= 122){
		printf("C'est une lettre minuscule : %d",c);
	}
	
	
	return 0;
}
