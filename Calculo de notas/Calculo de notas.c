#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void UOR()
{
	float np1,np2, media, nota_nece;
	char resposta;
	
	printf("Digite a nota da primeira prova parcelar: ");
	scanf("%f",&np1);
	printf("Digite a nota da segunda prova parcelar: ");
	scanf("%f",&np2);
	printf("Se a tua cadeira se dispensa digite S(sim) ou N(nao): ");
	scanf("%s",&resposta);
	
	media = (np1 + np2) / 2;
	 if(media > 14 && resposta=="S" || resposta == "s")
	 {
	 	printf("A tua media supera %.1f supera 14 valores, estas aprovado", media);
	 }
	 else if(media > 14 && resposta == "N" || resposta == "n")
	 {
	 	nota_nece = (media - 20);
	 	printf("Otima nota %.1f, precisas de %.1f pra eliminar a cadeira no exame", media,
		nota_nece);
		
	 }
	 else
	 {
	 	printf("Amigo(a) estuda mesmo");
	 }
}

void isptec(){
	
	float np1, np2, mp1, mp2,npexm, n_exm,n_desejada;
	
	printf("Digite a nota da primeira prova parcelar: ");
	scanf("%f",&np1);
	printf("Digite a nota da segunda prova parcelar: ");
	scanf("%f",&np2);
	
	 mp1 = np1 / 2;
	 mp2 = np2 / 2;
	 npexm = (mp1 + mp2) * 0.4;
	 
	 printf("Nota que levara pro exame final: %.1f",npexm);
	 
	 if(npexm < 10)
	 {
	 	printf("Digite a nota desejada: ");
	 	scanf("%f",&n_desejada);
	 	
	 	n_exm = (n_desejada - npexm) * 0.6;
	 	printf("Tu precisa tirar %.1f",n_exm);
	 }
	 else
	 {
	 	printf("Digite a nota desejada: ");
	 	scanf("%f",&n_desejada);
	 	
	 	n_exm = (n_desejada - npexm) * 0.6;
	 	printf("Tu precisa tirar %.1f",n_exm);
	 }
	 
}
int main(){
	
	char instituicao[100];
	int i;
	
	printf("======= BEM-VINDO AO SISTEMA DE CALCULO DE NOTAS =======\n\n");

    printf("Digite o nome da tua instituicao: ");
    
    fgets(instituicao, sizeof(instituicao), stdin);

    instituicao[strcspn(instituicao, "\n")] = '\0';

    if (strcmp(instituicao, "ISPTEC") == 0 ||
        strcmp(instituicao, "Instituto Superior Politecnico e Ciencias") == 0) {
        isptec();
    }
    else if (strcmp(instituicao, "Oscar Ribas") == 0 ||
             strcmp(instituicao, "UOR") == 0) {
        UOR();
    }

    return 0;
}