#include "stdio.h"
#include <time.h>
#include <stdlib.h>
#include <conio.h> 
#include <Windows.h>
//���� ࠧ������� � ����
void noJle(char *macc, int n)
{
	int k=0,i,j;
	srand(time(NULL));
	while (k<n)
	{			
		i=rand()%64;			//c�po�a
		if(macc[i]=='*')
		{
			macc[i]='L';k++;
		}
	}
}
// ࠧ��饭�� ��� �ப��
int pa3mL(char *macck, int a, int KL,int b)
{
	int i,j,k1=0,k=0;
	printf("������ ����� ��ப� � ����� �⮫��,��� �� �� �⥫� ࠧ������ ����:\n");
	scanf("%i\n",&i);
	scanf("%i",&j);
	if((j>0)&&(j<9)&&(i>0)&&(i<9))
	{
		a=((i-1)*b+(j-1));
		if(macck[a]=='L') printf("�� 㦥 ࠧ���⨫� ���� �����\n");
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
			Sleep( 1000 );//����প� �� 1 ᥪ㭤�
			system("cls");
		}
	}
	else  printf("�� ����� �������⨬� ���祭�� \n");
	return KL;
}
//�஢�ઠ ����५� �������� �� ����७��
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
// ���� ��� � ���� 
int nouck(char *macc,char *noka3,int i,int b, int a,int xod) //a-�� k 
{
	int h/*�⮫���*/,l/*��ப�*/,k=0,k1=0,kk1=0;//����稪�
	int cL=0/*��� ��� � �⮫��*/,cP=0;//��� � ��ப�
	if(macc[i]=='L')
	{	//� ��砥 ���������
		printf("---------------------------------------\n");
		if(xod==1)printf("����५ �������:\n");
		if(xod==0) printf("\a���������!�� ��諨 ����!\n");
		else printf("\a���������!�������� ���� ����!\n");
		printf("---------------------------------------\n");
		noka3[i]='L';a+=1;
	}
	if(macc[i]!='L')
	{	//� ��砥 �஬��
		printf("---------------------------------------\n");
		if(xod==0)printf("�஬��!�� �� ��諨 ����!\n");
		else printf("�஬��!�������� �� ���� ����!\n");
		printf("---------------------------------------\n");
		{ 
		noka3[i]='#';}
		if(xod==0)
		{	//������� ��� � �⮫�� � ��ப�
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
			printf(" ��� � ��ப�: %i;\n ��� � �⮫��: %i;\n",cP,cL);
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
	int n/*������⢮ ���*/,a=0/*���न���� ����५�*/,k=0,i1,k3,k1=0,k2,/*����稪�*/
		xod=0,/*���񤭮���*/j=0,i=0,/*���न���� ����५�*/kBk=0,/*��� ����५�� ��������*/
		KL=0,/*��� ��� ࠧ������ ��ப��*/kkB=1,/*���४⭮��� �������୮�� ����५�*/
		mas[64]/*���ᨢ ����५�� ��������*/,da/*��४���⥫� 室�*/,b=8,/*������⢮ ����⮢ � ��ப�*/ 
		kom=0/*����稪 ��������� �������஬ ���*/,yc;/*�஢��� ᫮�����*/
	int	ndP/*��४� ��� ��ப*/,nep1/*��४���*/,ndL,/*��४� ��� �⮫�殢*/
		h,l,ctL=8/*����५ �� �⮫���*/, ctP /*����५ �� ��ப�*/,cP=0,cL=0,ur=0/*��� ������� ��ப��*/,f=0,ndx3,konec=8,Ha4aL=0,k5,kc,kk1 ;
	int komA=0,cLn=1,dua,Lu=1,Pu=1;
	char macc[64]/*���� ��ப�*/,noka3[64];/*���� ��ப� ��� ��������樨*/
	char noka3k[64]/*���� �������� ��� ��������樨*/,macck[64];//���� ��������
	printf("\n\n��� \"��� �� ���\" �ਢ������ ⥡�,��ப!\n� ��砥 ��������� � ����,�� ���� �⮡ࠧ���� \"L\",� ��砥 �஬��-\"#\"\n\n\n");
	for(i1=0;i1<64;i1++){macc[i1]='*';macck[i1]='*';noka3[i1]='*';noka3k[i1]='*';mas[i1]=-1;}
	printf("   1|2|3|4|5|6|7|8\n");
		for(k3=0;k3<8;k3++)
		{	
			printf("%i |",k1+=1);
			for(k2=0;k2<8;k2++)
			printf("%c ",noka3[k]);printf("\n");
		}
	char *ma=&macc[0];
	//���� ��� ���
		printf("\n������ �������⢮ ���(�� 1 �� 64):\n ");
		scanf("%i", &n);
			noJle(ma,n);
		Sleep( 500 );//����প� 0.5 ᥪ㭤�
		system("cls");
	//ࠧ��饭�� ��� ��ப��
			while (KL<n)
			{
				KL=pa3mL(macck,a,KL,b);
			}
			Sleep( 1000 );//����প� 1 ᥪ㭤a
			system("cls");
		//�롮� �஢�� ᫮�����
		printf("�롥�� �஢��� ᫮�����:\n���⮩-������ \"0\"\n�।��� -������ \"1\"\n");
		scanf("%i",&yc);
		system("cls");
		//��५졠 �� ��ᠬ
		nep1=0;ndL=0;ndP=0;ndx3=0;
			while ((ur<n)&&(kom<n))
			{	//����५ ��ப�
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
					printf("������ ����� ��ப� � ����� �⮫��,���,��� �� �㬠��,��뢠���� ���:\n");
					scanf("%i\n",&i);
					scanf("%i",&j);
					if((j>0)&&(j<9)&&(i>0)&&(i<9)&&(ur<n))
					{
						//printf("�� ��ࠫ� �⮫��� %i\t ��ப� %i\n",j,i);
						a=((i-1)*b+(j-1));
						ur=nouck(macc,noka3,a,b,ur,xod%2);
						da=1;
					}
					else {printf("�� ����� �������⨬� ���祭�� \n");da=0;xod++;}
					xod++;
				}
				system("cls");
				if(yc==0)//�஢��� ᫮�����
				{//����५ �������� ���⮩ ᫮�����
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
					}			//ndp=0 -��४� ��� ��ப
				}				//nep1=0-��४��� ndL=0-��४� ��� �⮫�殢
				if(yc==1)			//h,l,ctL=1-����५ �� �⮫��� ctp -����५ �� ��ப�
				{	//���� 室
				if((xod%2==1)&&(da==1))
				{	
					if(nep1==0){f=0;k1=nouck(macck,noka3k,f,b,kom,xod%2);nep1=1;}
					else//��ன � �
					{ 
						komA=kom;
						for(h=(f%b);h<64;h+=b)
							if(macck[h]=='L') cL++;//printf("��� � �⮮��� ������� %i",cL);
							if(f<8) 
								for(l=0;l<8;l++)
								if(macck[l]=='L')
								cP++;
							if(f>=8)
						for(l=(f-(f%b)+1);l<=(f-(f%b)+b);l++)
							if(macck[l]=='L') cP++;//printf("��� � ��ப� ������� %i",cP);
						
						//�� �⮫�栬
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
						//�� ��ப��
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
			if(kom==ur)printf("\a\a\a �����!\n");
			else
				{
				if(ur==n) printf("\a\a\a������!!�� ��諨 ��� ���! ");
				if(kom==n)printf("\a\a\a���!�� �ந�ࠫ�!�������� ���� ��� ��� ࠭��!\n");
				}
			printf("\n---------------------------------------\n");
printf("\n�᫨ �� ��� ����� ��� ࠧ,������ \"1\".\n�᫨ �� ��� �������� ����-������ \"0\" ");
scanf("%i",&urpa);
if(urpa==0){printf("\n�������ਬ ��� �� ����!\n�ந�����⢮ �㧭�殢");Sleep( 3000 );system("cls");}
}
}