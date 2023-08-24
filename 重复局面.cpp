#include<stdio.h>
#include<stdlib.h>
int main(){
	int n;
	char* chess[100];
	scanf("%d",&n);

	for(int i = 0;i < n*8;i++){
		chess[i] = (char*)malloc(64);
		scanf("%s",chess[i]);
	}
	printf("1\n");
	int k = 1;
	int i = k;
	//for(k = 1;k < n;k++){
		int y = 1;
	//	for(int i = k;i < n;i++){
			int x = 0;
			//for(int l = 0;l < n;l++){
					for(int j = 0;j < 8;j++){
						if(*chess[i*8+j] == *chess[j]){
						x++;
						printf("%d   %s   %s\n",x,*chess[i*8+j],*chess[j]);
					}
				}
			if(x == 8)
				y++;
		//	}
		
	//	}
		printf("%d\n",y);
	//}
}
