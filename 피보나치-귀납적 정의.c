#include<stdio.h>
unsigned long long  P[100001], t, S, H=0, x, y,sum=0,a,b;
main()
{
	P[0]=0;P[1]=1;
	for(t=2;t<=100000;t++){
		P[t]=P[t-2]+P[t-1];
		}
	
	printf("�Ǻ���ġ ���� ���� ���α׷��Դϴ�(�ִ� 46�ױ���).\n ");
	printf("������ ���ϴ� �κ��� �ҷ����÷��� 1��, ������  ���ϴ� �κ��� ���� ���Ͻ÷��� 2��,");
	printf(" ���α׷��� �����÷��� 3�� �����ּ���.\n");
	
	for(S=0;S<3;H++){
		scanf("%d", &S);
		if(S==1){
			printf("�ҷ��� �κ��� ���װ� ������ �Է��Ͽ� �ֽʽÿ�(x y)\n");
			scanf("%d %d",&x, &y);
			for(x;x<=y;x++){
				printf("%d�� ", x);
				printf("%d\n", P[x]);
			}
		}else if(S==2){
			printf("�ҷ��� �κ��� ���װ� ������ �Է��Ͽ� �ֽʽÿ�(x y)\n");
			scanf("%d %d",&a, &b);
			for(a;a<=b;a++){
				sum=sum+P[a];
			}
			printf("\n%d", sum);
		}else if(S==3){
			printf("%d�� �����.", H);
		}	
	} 
 } 
