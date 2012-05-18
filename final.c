#include "stdio.h"
#include <time.h>
#include <stdlib.h>
#include <conio.h> 
#include <Windows.h>
//лисы размещаются в поле
void noJle(char *macc, int n)
{
	int k=0,i,j;
	srand(time(NULL));
	while (k<n)
	{			
		i=rand()%64;			//cтpoкa
		if(macc[i]=='*')
		{
			macc[i]='L';k++;
		}
	}
}
// размещение лис ироком
int pa3mL(char *macck, int a, int KL,int b)
{
	int i,j,k1=0,k=0;
	printf("Введите номер строки и номер столбца,где бы Вы хотели разместить лису:\n");
	scanf("%i\n",&i);
	scanf("%i",&j);
	if((j>0)&&(j<9)&&(i>0)&&(i<9))
	{
		a=((i-1)*b+(j-1));
		if(macck[a]=='L') printf("Вы уже разместили лису здесь\n");
		if(macck[a]!='L')
		{
			macck[a]='L';KL++;;
			printf("   1|2|3|4|5|6|7|8\n");
			for(k1=0;k1<8;k1++)
			{	
				printf("%i |",k1+1);
				for(k=0;k<8;k++)
					printf("%c ",macck[k1*b+k]);printf("\n");
			}
			Sleep( 1000 );//задержка на 1 секунду
			system("cls");
		}
	}
	else  printf("вы ввели недопустимые значения \n");
	return KL;
}
//проверка выстрела компьютера на повторение
int npoB_a(int a, int kon,int *mas)
{
	int i,c;
	for(i=0;i<=kon;i++)
		if(a!=mas[i])
			{c=0;}
		else c=1;
		mas[kon+1]=a;
	return c;
}
// поиск лис в поле 
int nouck(char *macc,char *noka3,int i,int b, int a,int xod) //a-это k 
{
	int h/*столбец*/,l/*строка*/,k=0,k1=0,kk1=0;//счётчики
	int cL=0/*кол лис в столбце*/,cP=0;//лис в строке
	if(macc[i]=='L')
	{	//в случае попадания
		printf("---------------------------------------\n");
		if(xod==1)printf("Выстрел компютера:\n");
		if(xod==0) printf("\aпопадание!Вы нашли лису!\n");
		else printf("\aпопадание!компьютер нашёл лису!\n");
		printf("---------------------------------------\n");
		noka3[i]='L';a+=1;
	}
	if(macc[i]!='L')
	{	//в случае промаха
		printf("---------------------------------------\n");
		if(xod==0)printf("промах!Вы не нашли лису!\n");
		else printf("промах!компьютер не нашёл лису!\n");
		printf("---------------------------------------\n");
		{ 
		noka3[i]='#';}
		if(xod==0)
		{	//подсчёт лис в столбце и строке
			for(h=(i%b);h<64;h+=b)
				if(macc[h]=='L')
				cL++;
			if(i<8) 
				for(l=0;l<8;l++)
					if(macc[l]=='L')
					cP++;
			if(i>=8)
				for(l=(i-(i%b)+1);l<=(i-(i%b)+b);l++)
					if(macc[l]=='L')
					cP++;
			printf(" Лис в строке: %i;\n Лис в столбце: %i;\n",cP,cL);
			printf("---------------------------------------\n");
			system("pause");
			system("cls");
		}
	}
	return  a;
}

int main()
{	
int urpa=1;//replay
while(urpa!=0)
{	
system("cls");
	int n/*количество лис*/,a=0/*координаты выстрела*/,k=0,i1,k3,k1=0,k2,/*счётчики*/
		xod=0,/*очерёдность*/j=0,i=0,/*координаты выстрела*/kBk=0,/*кол выстрелов компьютера*/
		KL=0,/*кол лис размещённых игроком*/kkB=1,/*корректность компьютерного выстрела*/
		mas[64]/*массив выстрелов компьютера*/,da/*переключатель хода*/,b=8,/*количество элементов в строке*/ 
		kom=0/*счётчик найденных компьютером лис*/,yc;/*уровень сложности*/
	int	ndP/*перекл для строк*/,nep1/*переключ*/,ndL,/*перекл для столбцов*/
		h,l,ctL=8/*выстрел по столбцу*/, ctP /*выстрел по строке*/,cP=0,cL=0,ur=0/*лис найдено игроком*/,f=0,ndx3,konec=8,Ha4aL=0,k5,kc,kk1 ;
	int komA=0,cLn=1,dua,Lu=1,Pu=1;
	char macc[64]/*поле игрока*/,noka3[64];/*поле игрока для демонстрации*/
	char noka3k[64]/*поле компьютера для демонстрации*/,macck[64];//поле компьютера
	printf("\n\nИгра \"охота на лис\" приветствует тебя,Игрок!\nВ случае попадания в лису,на поле отобразится \"L\",в случае промаха-\"#\"\n\n\n");
	for(i1=0;i1<64;i1++){macc[i1]='*';macck[i1]='*';noka3[i1]='*';noka3k[i1]='*';mas[i1]=-1;}
	printf("   1|2|3|4|5|6|7|8\n");
		for(k3=0;k3<8;k3++)
		{	
			printf("%i |",k1+=1);
			for(k2=0;k2<8;k2++)
			printf("%c ",noka3[k]);printf("\n");
		}
	char *ma=&macc[0];
	//ввод кол лис
		printf("\nВведите колличество лис(от 1 до 64):\n ");
		scanf("%i", &n);
			noJle(ma,n);
		Sleep( 500 );//задержка 0.5 секунды
		system("cls");
	//размещение лис игроком
			while (KL<n)
			{
				KL=pa3mL(macck,a,KL,b);
			}
			Sleep( 1000 );//задержка 1 секундa
			system("cls");
		//выбор уровня сложности
		printf("Выберете уровень сложности:\nПростой-введите \"0\"\nсредний -введите \"1\"\n");
		scanf("%i",&yc);
		system("cls");
		//стрельба по лисам
		nep1=0;ndL=0;ndP=0;ndx3=0;
			while ((ur<n)&&(kom<n))
			{	//выстрел игрока
			printf("   1|2|3|4|5|6|7|8	   1|2|3|4|5|6|7|8\n");
						for(k5=0,kk1=0;k5<8;k5++,kk1++)
						{	
						printf("%i |",k5+1);
							for(kc=0;kc<8;kc++)
								printf("%c ",noka3[kk1*b+kc]);printf("\t");
						printf("%i |",k5+1);
							for(kc=0;kc<8;kc++)
								printf("%c ",noka3k[kk1*b+kc]);printf("\n");
						}
						
				xod=0;
				if(xod%2==0)
				{
					printf("Введите номер строки и номер столбца,где,как Вы думаете,скрывается лиса:\n");
					scanf("%i\n",&i);
					scanf("%i",&j);
					if((j>0)&&(j<9)&&(i>0)&&(i<9)&&(ur<n))
					{
						//printf("вы выбрали столбец %i\t строку %i\n",j,i);
						a=((i-1)*b+(j-1));
						ur=nouck(macc,noka3,a,b,ur,xod%2);
						da=1;
					}
					else {printf("вы ввели недопустимые значения \n");da=0;xod++;}
					xod++;
				}
				system("cls");
				if(yc==0)//уровень сложности
				{//выстрел компьютера простой сложности
					if((xod%2==1)&&(da==1))
					{	
					while(kkB!=0)
						{
							a=0;
							srand(time(NULL));
							a=rand()%64;kBk++;
							kkB=npoB_a(a,kBk,mas);
						}
						kom=nouck(macck,noka3k,a,b,kom,xod%2);
						da=0;kkB=1;
					}			//ndp=0 -перекл для строк
				}				//nep1=0-переключ ndL=0-перекл для столбцов
				if(yc==1)			//h,l,ctL=1-выстрел по столбцу ctp -выстрел по строке
				{	//первый ход
				if((xod%2==1)&&(da==1))
				{	
					if(nep1==0){f=0;k1=nouck(macck,noka3k,f,b,kom,xod%2);nep1=1;}
					else//второй и тд
					{ 
						komA=kom;
						for(h=(f%b);h<64;h+=b)
							if(macck[h]=='L') cL++;//printf("лис в стоолбце компютера %i",cL);
							if(f<8) 
								for(l=0;l<8;l++)
								if(macck[l]=='L')
								cP++;
							if(f>=8)
						for(l=(f-(f%b)+1);l<=(f-(f%b)+b);l++)
							if(macck[l]=='L') cP++;//printf("лис в строке компютера %i",cP);
						
						//по столбцам
						//if((ndL==0)&&(cL>=cLn)&&(h<64))
						if((ndL==0)&&(cL>=Lu))
							{printf("ndL %i",ndL);h=(f%b);Lu++;
							if((h+8)<64)
							{h+=8;f+=8;cLn++;
							kom=nouck(macck,noka3k,f,b,kom,xod%2);ndL=0;ndP=0;ndx3=0;}
							else {f=dua;h=0;kom=nouck(macck,noka3k,f,b,kom,xod%2);ndP=1;ndx3=0;}}
						else {ndL=1;ndP=1;ndx3=0;}
							//if(f+8>64){f=dua;h=0;}
						//	if(h>=64) {ndL=1;}} 
						//if(((ndL==0)||(ndL==1))&&((cL<1)||(h+8>64))) {ndP=1;ndL=1;ndx3=0;}
						if((ndP==1)&&(ndL==1)&&(cP>=Pu))
							{printf("ndP %i",ndP);l=(f-(f%b));Pu++;
							if(l<8)
						//по строкам
						//if((ndP==1)&&(cP>=1)&&(Ha4aL<8))//(l<=(f-(f%b)+b))||
							{f+=1;Ha4aL++;
							kom=nouck(macck,noka3k,f,b,kom,xod%2);ndL=1;ndP=1;ndx3=0;}
							else {f=dua;l=0;kom=nouck(macck,noka3k,f,b,kom,xod%2);ndP=0;ndL=1;ndx3=2;}}
						else {ndP=0;ndL=1;ndx3=2;}
						//if((ndL==1)&&(ndP==0)){ndP=0;ndx3=2;}
						//if(((cP<1)&&(cL<1))||(ndx3==2)) 
						if((cL<1)&&(cP<1)&&(ndx3==2))
						{f+=9;dua=f;kom=nouck(macck,noka3k,f,b,kom,xod%2);ndL=0;ndP=0;ndx3=0;}
						//else {ndL=0;ndP=0;ndx3=0;}
						}
					da=0;
					
				}		
						
				}	
			}
			printf("---------------------------------------\n");
			if(kom==ur)printf("\a\a\a Ничья!\n");
			else
				{
				if(ur==n) printf("\a\a\aПобеда!!Вы нашли всех лис! ");
				if(kom==n)printf("\a\a\aУВЫ!Вы проиграли!компьютер нашёл всех лис раньше!\n");
				}
			printf("\n---------------------------------------\n");
printf("\nЕсли Вы хотите сыграть ещё раз,нажмите \"1\".\nЕсли Вы хотите закончить игру-нажмите \"0\" ");
scanf("%i",&urpa);
if(urpa==0){printf("\nБлагодарим Вас за игру!\nПроизводство Кузнецов");Sleep( 3000 );system("cls");}
}
}