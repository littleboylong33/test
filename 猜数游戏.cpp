# include <stdio.h>
# include <stdlib.h>
# include <time.h>



void menu();
void game();
void test();

int main()
{
	srand((unsigned int)time(NULL));

	test();

	return 0;
}


void test()
{
	int input = 0;

	do 
	{
		menu();
		printf("����������>:");
		scanf("%d", &input);

		switch(input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ��\n");
			break;
		default:
			printf("����������������룡\n");
			break;
		}

	}while(input);

}

void menu()
{
	printf("****************************************\n\n");
	printf("*****1.play*****************0.exit******\n\n");
	printf("****************************************\n\n");
}

void game()
{
	int get = rand()%100+1; 
	int guss = 0;

	printf("��ʼ��Ϸ�������֣�\n");
	
	while (1)
	{
		scanf("%d", &guss);

		if (guss > get)
		{
			printf("�´���!\n");
		}
		else if(guss<get)
		{
			printf("��С��!\n");
		}
		else
		{
			printf("�¶��ˣ�\n");
			break;
		}
	}





}