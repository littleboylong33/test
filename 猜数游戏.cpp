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
		printf("请输入数字>:");
		scanf("%d", &input);

		switch(input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏！\n");
			break;
		default:
			printf("输入错误，请重新输入！\n");
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

	printf("开始游戏，猜数字：\n");
	
	while (1)
	{
		scanf("%d", &guss);

		if (guss > get)
		{
			printf("猜大了!\n");
		}
		else if(guss<get)
		{
			printf("猜小了!\n");
		}
		else
		{
			printf("猜对了！\n");
			break;
		}
	}





}