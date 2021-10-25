#include<stdio.h>
unsigned long long  P[100001], t, S, H=0, x, y,sum=0,a,b;
main()
{
	P[0]=0;P[1]=1;
	for(t=2;t<=100000;t++){
		P[t]=P[t-2]+P[t-1];
		}
	
	printf("피보나치 수열 연산 프로그램입니다(최대 46항까지).\n ");
	printf("수열의 원하는 부분을 불러오시려면 1을, 수열의  원하는 부분의 합을 구하시려면 2를,");
	printf(" 프로그램을 끝내시려면 3을 눌러주세요.\n");
	
	for(S=0;S<3;H++){
		scanf("%d", &S);
		if(S==1){
			printf("불러올 부분의 초항과 말항을 입력하여 주십시오(x y)\n");
			scanf("%d %d",&x, &y);
			for(x;x<=y;x++){
				printf("%d항 ", x);
				printf("%d\n", P[x]);
			}
		}else if(S==2){
			printf("불러올 부분의 초항과 말항을 입력하여 주십시오(x y)\n");
			scanf("%d %d",&a, &b);
			for(a;a<=b;a++){
				sum=sum+P[a];
			}
			printf("\n%d", sum);
		}else if(S==3){
			printf("%d번 실행됨.", H);
		}	
	} 
 } 
