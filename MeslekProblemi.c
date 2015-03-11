#include<stdlib.h>
#include<conio.h>
#include<conio.h>
struct LABORATUVAR{
	char CNS;
	int SAY;
	int ADR;
};
int main(){
	struct LABORATUVAR *LAB;
	int N,i,j,k,t;
	char S;
	printf("Ankete katilan kisi sayisini giriniz:");
	scanf("%d",&N);
	int *ANK=(int*)malloc(N*sizeof(int));
	LAB=(struct LABORATUVAR*)malloc(N*sizeof(struct LABORATUVAR));
	printf("Anket sonuclarini giriniz:");
	for(i=0;i<N;i++){
		scanf("%s",&ANK[i]);	
	}
	LAB[0].CNS=ANK[0];
	LAB[0].ADR=0;
	LAB[0].SAY=1;
	k=0;
	for(i=1;i<N;i++){
		j=0;
		S=ANK[i];
		while(j<=k && S!=LAB[j].CNS){
			j++;
		}
		if(j>k){
			k++;
			LAB[k].CNS=S;
			LAB[k].ADR=i;
			LAB[k].SAY=1;
		}else{
			LAB[k].SAY=LAB[k].SAY+1;
		}
			
		
	}
	t=0;
	while(t<=k){
	    printf("\n%c harfinden ",LAB[t].CNS);
		printf("\n %d tane var ",LAB[t].SAY);
		printf("\nadresi %d dir",LAB[t].ADR);
			t++;
		
	}
		return 0;
}
