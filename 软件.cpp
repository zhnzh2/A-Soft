#include<bits/stdc++.h>
#include<windows.h>
#include<conio.h>
#define stop system("pause")
#define qing system("cls")
#define sui(a) rand()%(a)
#define ll long long 
using namespace std;
bool pshu(char a,int b)
{
	if(a<=b+'0'&&a>='0') return true;
	if(a=='a'||a=='d') return true;
	return false;
}
int inn()
{
	int a;
	cin>>a;
	return a;
}
int main();
void zhu(),xj(int a);
void shuk()
{
	for(int i=1;i<=100;++i)
	if(i==4||i==96) cout<<"|";
	else cout<<" ";
	cout<<endl;
}
void shus(int n)
{
	for(int i=1;i<n;++i) cout<<" ";cout<<"|"<<endl;
}
void tou()
{
	for(int i=1;i<=100;++i)
	if(i>4&&i<96) cout<<"-";
	else cout<<" ";
	cout<<endl;
}
int zye=5,yo; 
char yong[10001],mima[10001],ly,lm,jms[101][101];
char yhm[101][101]= {{" pig"}   ,{" PJL"}   ,{" ZZR"}   ,{" DZW"}   ,{" ZSH"}   ,{" LGJ"}   ,{" XZC"}   ,{" LZY"}   ,{" ZTC"}   };
char yhmm[101][101]={{" 207101"},{" 123456"},{" 123456"},{" asd123"},{" 123456"},{" 123456"},{" 123456"},{" 123456"},{" 123456"}};
void pmm()
{
	system("cls");int chang=5;
	cout<<endl<<endl<<endl;tou();shuk();
	cout<<"   |                                        ��¼";shus(48);
	for(int i=1;i<=chang-1;++i) shuk();
	cout<<"   |                  �����������û���������              ������ȷ����";shus(26);
	for(int i=1;i<=chang-2;++i) shuk();
	cout<<"   |             �û�����";
	for(int i=1;i<=ly;++i) cout<<yong[i];shus(71-ly);shuk(); 
	cout<<"   |             ���룺";
	for(int i=1;i<=lm;++i) cout<<"*";shus(73-lm);
	for(int i=1;i<=chang;++i) shuk();
	for(int i=1;i<=chang;++i) shuk();
	tou();
}
bool login()
{
	int x;ly=lm=0;
	memset(yong,0,sizeof(yong));
	memset(mima,0,sizeof(mima));
	pmm();
	x=getch();
	while(x!=13)
	{
		if(x==8) ly=max(0,ly-1);
		else yong[++ly]=x;
		pmm();
		x=getch();
	}
	pmm();
	x=getch();
	qing;
	while(x!=13)
	{
		if(x==8) lm=max(0,lm-1);
		else mima[++lm]=x;
		pmm();
		x=getch();
	}
	bool f=false;int cnt=0;qing;
	while(cnt<=8)
	{
		for(int i=1;i<=ly;++i)
		{
			f=false;
			if(yhm[cnt][i]!=yong[i]) break;
			f=true;
		}
		if(f==true)
		{
			yo=cnt;
			break;
		}
		cnt++;
	}
	if(f==false)
	{
		cout<<"                              ���û��������ڣ�����"<<endl;Sleep(5000);
		return true;
	}
	for(int i=1;i<=lm;++i)
	{
		f=false;
		if(yhmm[yo][i]!=mima[i]) break;
		f=true;
	}
	if(f==false)
	{
		cout<<"                                 ������󣡣���"<<endl;Sleep(5000);
		return true;
	}
	if(yo<=3) zye=5;else zye=4;
	qing;cout<<"                          ��½�ɹ�������"<<endl;stop;
	return false;
}
char zjms[101][101]={{},{"ϵͳ      �鿴������־"},{"ϵͳ      �鿴��Ȩ"},{"ϵͳ      �鿴��Ȩ��"}
					   ,{"ϵͳ      ��������Q&A"},{"ʵ��      �����"},{"ʵ��      �򿪰ٶ�"},{"ʵ��      �򿪹㸽oj"}
					   ,{"ʵ��      ���������ղ������������֮�����������ڣ�"},{"ʵ��      ����һ�����ڹ���һ��ʱ��������Ƕ��"}
					   ,{"��ѧ      ���������"},{"��ѧ      ����С������"},{"��ѧ      �ж�����"},{"��ѧ      �������ֽ�"}
					   ,{"��ѧ      ������"},{"����      ����"},{"��Ϸ      ����"},{"��Ϸ      С����"},{"��Ϸ      С����"}
					   ,{"��Ϸ      С����"},{"��Ϸ      ������"},{"��Ϸ      ħ��"},{"ʵ��      ����ʱ�临�Ӷ�"}
					   ,{"ʵ��      ���˽̰�̿���"},{"ʵ��      ��Konnyaku OJ"},{"ʵ��      ������"},{"ʵ��      ��������"}
					   ,{"ʵ��      ����ʱ������������ʱ��֮��������ʱ�䣩"},{"ʵ��      ����һ��ʱ�����һ��ʱ��������Ƕ��"}
					   ,{"���      Ѱ��"},{""}};
char wei[101]={"��δ����    �˹�����δ����"};
void jm1(int ye)
{
	int kuan=25;
	qing;
	cout<<endl<<endl<<endl;
	tou();
	shuk();cout<<"   |    �𾴵��û����ã���ӭʹ�����ܷ���ϵͳ6.0.1����������Ҫʲô����";shus(kuan);
	shuk();cout<<"   |         ��������           ��������        �û�����"<<yhm[yo]<<"           ";shus(kuan);
	for(int i=-6+ye*7;i<=ye*7;++i)
	{
		int tot=0;
		shuk();
		printf("   |       %d.",i+7-ye*7);
		if(strlen(jms[i])==0) cout<<wei,shus(57-tot);
		else cout<<"  "<<jms[i],shus(81-strlen(jms[i])-tot);
	}
	shuk();cout<<"   |       0.  �˳���¼                                                ";shus(kuan);
	shuk();printf("   |       �����ˣ�PJL         ��%dҳ����%dҳ��      ����A��D��ҳ��",ye,zye);shus(kuan+6);
	shuk();tou();
}
void geng(int ye)
{
	int kuan=14;
	qing;
	cout<<endl<<endl<<endl;
	tou();
	shuk();cout<<"   |                          ������־                                            ";shus(kuan);
	shuk();cout<<"   |                                                                              ";shus(kuan);
	if(ye==1)
	{
		shuk();cout<<"   |   �汾 1.0   ����ĳ���ֻ������ѡ�                         2020.02.09   ";shus(kuan);
		shuk();cout<<"   |   �汾 1.0.1 �����������������º͹��ܡ�                         2020.02.10   ";shus(kuan);
		shuk();cout<<"   |   �汾 1.1   ���ֳ���������getch()������                        2020.02.11   ";shus(kuan);
		shuk();cout<<"   |   �汾 1.1.1 ����С����Ϸ��                                     2020.02.12   ";shus(kuan);
		shuk();cout<<"   |   �汾 1.1.2 �Ż�С����Ϸ���棬��˼��������Ϸ��                 2020.02.13   ";shus(kuan);
		shuk();cout<<"   |   �汾 1.1.3 �����ӽ�����Խ׶Σ�С����Ϸ��¯���졣             2020.02.14   ";shus(kuan);
		shuk();cout<<"   |   �汾 1.1.4 ��Ϸ�����ӣ�С�����ߣ��޸�����bug��                2020.02.15   ";shus(kuan);
	}
	else if(ye==2)
	{
		shuk();cout<<"   |   �汾 2.0   ������ҳ���ܡ�                                     2020.02.15   ";shus(kuan);
		shuk();cout<<"   |   �汾 2.0.1 ��������ʱ�临�Ӷȹ���                             2020.02.16   ";shus(kuan);
		shuk();cout<<"   |   �汾 2.1   ������Ȩ˵����                                     2020.02.16   ";shus(kuan);
		shuk();cout<<"   |   �汾 2.1.1 ������Ϸħ�����Ż����ִ��롣                       2020.02.17   ";shus(kuan);
		shuk();cout<<"   |   �汾 2.2   ������Ȩ��˵�����״���Ȩ�������ˡ�                 2020.02.17   ";shus(kuan);
		shuk();cout<<"   |   �汾 2.2.1 �޸�����bug                                        2020.02.18   ";shus(kuan);
		shuk();cout<<"   |   �汾 2.2.2 �Ż������ӽ���                                     2020.02.19   ";shus(kuan);
	}
	else if(ye==3)
	{
		shuk();cout<<"   |   �汾 2.2.3 ����������һ���Ѷȣ�ħ������һ�㡣                 2020.02.20   ";shus(kuan);
		shuk();cout<<"   |   �汾 2.3   ��ʼ�߻�����ϵ�С�                                 2020.02.21   ";shus(kuan);
		shuk();cout<<"   |   �汾 2.3.1 �Ƴ�������ԡ�                                     2020.02.22   ";shus(kuan);
		shuk();cout<<"   |   �汾 2.4   �Ƴ��������ֽ⹦�ܡ�                               2020.02.22   ";shus(kuan);
		shuk();cout<<"   |   �汾 3.0   �����İ棬��������ܡ�                         2020.02.23   ";shus(kuan);
		shuk();cout<<"   |   �汾 3.0.1 �޸�����bug��                                      2020.02.23   ";shus(kuan);
		shuk();cout<<"   |   �汾 3.1   ����������Ͷ�����ܡ�                               2020.02.24   ";shus(kuan);
	}
	else if(ye==4)
	{
		shuk();cout<<"   |   �汾 3.1.1 �޸�����bug�����������¸İ档                      2020.02.24   ";shus(kuan);
		shuk();cout<<"   |   �汾 3.1.2 С����¯�����������顣                             2020.02.24   ";shus(kuan);
		shuk();cout<<"   |   �汾 3.2   С���������ߣ�������˾��顣                       2020.02.25   ";shus(kuan);
		shuk();cout<<"   |   �汾 3.2.1 ����ͻ��1000�У��޸�����bug��                      2020.02.25   ";shus(kuan);
		shuk();cout<<"   |   �汾 3.2.2 С����ֳ�С�����С����                         2020.02.26   ";shus(kuan);
		shuk();cout<<"   |   �汾 3.3   �����򿪰ٶȹ���                                   2020.02.26   ";shus(kuan);
		shuk();cout<<"   |   �汾 3.3.1 ������OJ����                                     2020.02.26   ";shus(kuan);
	}
	else if(ye==5) 
	{
		shuk();cout<<"   |   �汾 3.3.2 �����򿪽̿��鹦��                                 2020.02.27   ";shus(kuan);
		shuk();cout<<"   |   �汾 3.4   ħ�������˳�����                                   2020.02.27   ";shus(kuan);
		shuk();cout<<"   |   �汾 3.4.1 ħ������һ��                                       2020.02.28   ";shus(kuan);
		shuk();cout<<"   |   �汾 3.4.2 ����������һ���Ѷ�                                 2020.02.28   ";shus(kuan);
		shuk();cout<<"   |   �汾 3.4.3 ������Ϸ����ѯ�ʹ���                               2020.02.29   ";shus(kuan);
		shuk();cout<<"   |   �汾 3.5   ������ѧ����������������������С������       2020.02.29   ";shus(kuan);
		shuk();cout<<"   |   �汾 3.5.1 ���������Ĺ���                                     2020.02.29   ";shus(kuan);
	}
	else if(ye==6) 
	{
		shuk();cout<<"   |   �汾 4.0   ���ܷ���ϵͳ��ʽ���ۣ����Խ׶ν���                 2020.03.01   ";shus(kuan);
		shuk();cout<<"   |   �汾 4.0.1 ����10Ԫ��ֻ����̽���ߡ������۵�һ�켴����5�ݡ�    2020.03.01   ";shus(kuan);
		shuk();cout<<"   |   �汾 4.0.2 ��ʼ΢���׶Σ���ʱ���ڽ�������³������¹���       2020.03.02   ";shus(kuan);
		shuk();cout<<"   |   �汾 4.0.3 ����ʹ���ߣ�����5Ԫ��                              2020.03.02   ";shus(kuan);
		shuk();cout<<"   |   �汾 4.1   �Ż������趨���޸�����bug��                        2020.03.03   ";shus(kuan);
		shuk();cout<<"   |   �汾 4.1.1 ������10�ݣ���˼����ϵͳ��                         2020.03.03   ";shus(kuan);
		shuk();cout<<"   |   �汾 4.1.2 ħ������4��                                        2020.03.05   ";shus(kuan);
	}
	else if(ye==7) 
	{
		shuk();cout<<"   |   �汾 5.0   ����ϵͳ����                                       2020.03.05   ";shus(kuan);
		shuk();cout<<"   |   �汾 5.1   �ܽ���ڶ��δ�İ�                                 2020.03.10   ";shus(kuan);
		shuk();cout<<"   |   �汾 5.1.1 ���Ӽ���������                                     2020.03.14   ";shus(kuan);
		shuk();cout<<"   |   �汾 5.1.2 ��������������                                   2020.04.06   ";shus(kuan);
		shuk();cout<<"   |   �汾 5.2.3 ���Ӽ������º͹���2.0                              2020.04.12   ";shus(kuan);
		shuk();cout<<"   |   �汾 5.2.4 ��ͬ��˼·���Ӽ������²��2.0                    2020.04.15   ";shus(kuan);
		shuk();cout<<"   |   �汾 5.3   ���������º͹���2.0������Ϊ������ʱ��͹��ܡ�      2020.04.18   ";shus(kuan);
	}
	else if(ye==8) 
	{
		shuk();cout<<"   |   �汾 5.3.1 ���������²��2.0������Ϊ������ʱ���ܡ�      2020.04.19   ";shus(kuan);
		shuk();cout<<"   |   �汾 5.3.2 �޸�bug����Ϸ���Ŀ�ʼ                              2020.04.20   ";shus(kuan);
		shuk();cout<<"   |   �汾 5.4   С������Ϸ�Ƴ�����Ƥ������                         2020.04.24   ";shus(kuan);
		shuk();cout<<"   |   �汾 5.4.1 ����Ƥ�����ܸ���                                   2020.04.26   ";shus(kuan);
		shuk();cout<<"   |   �汾 5.4.2 ����Ƥ��������С����͢�Կ�ʹ��                   2020.04.28   ";shus(kuan);
		shuk();cout<<"   |   �汾 5.4.3 ħ������������������Ƥ������                       2020.04.29   ";shus(kuan);
		shuk();cout<<"   |   �汾 5.5   С������ά�޾��飬����ΪС����                     2020.05.01   ";shus(kuan);
	}
	else if(ye==8) 
	{
		shuk();cout<<"   |   �汾 5.5.1 ħ������2��                                        2020.05.02   ";shus(kuan);
		shuk();cout<<"   |   �汾 5.6   �޸��ڶ�bug                                        2020.05.09   ";shus(kuan);
		shuk();cout<<"   |   �汾 5.6.1 ��˼Ӣ�İ����                                     2020.05.16   ";shus(kuan);
		shuk();cout<<"   |   �汾 5.6.2 ��ʼ��Ӣ�İ��ǰ��׼��                             2020.05.23   ";shus(kuan);
		shuk();cout<<"   |   �汾 5.7   ��ʼ����Ӣ�İ���������޸����İ��ڶ�bug            2020.06.08   ";shus(kuan);
		shuk();cout<<"   |   �汾 5.7.1 �Ż����İ沿�ֲ�����                               2020.06.15   ";shus(kuan);
		shuk();cout<<"   |   �汾 5.7.2 Ӣ�İ�������ĵ���                               2020.07.08   ";shus(kuan);
	}
	else if(ye==9) 
	{
		shuk();cout<<"   |   �汾 6.0   ����Ӣ�İ棬��ӭ��ҹ���                           2020.07.09   ";shus(kuan);
		shuk();cout<<"   |   �汾 6.0.1 Ӣ�İ�汾�����İ�ͳһ                             2020.07.09   ";shus(kuan);
		shuk();cout<<"   |   �汾 6.1   ��������Ⱥʹ�Konnyaku OJ����                  2020.07.10   ";shus(kuan);
		shuk();cout<<"   |   �汾 6.1.1 ������������Q&A                                    2020.07.10   ";shus(kuan);
		shuk();cout<<"   |   �汾 6.1.2 ��������δ�İ�                                   2020.07.11   ";shus(kuan);
		shuk();cout<<"   |   �汾 6.2   Ͷ��������������                                 2020.07.27   ";shus(kuan);
		shuk();cout<<"   |   �汾 6.2.1 ��������ߵ���                                     2020.08.02   ";shus(kuan);
	}
	else if(ye==10) 
	{
		shuk();cout<<"   |   �汾 6.2.2 ���������ʾ�û���                                 2020.08.07   ";shus(kuan);
		shuk();cout<<"   |   �汾 6.3   ��һ���������ʽ����                  ����ǰ�汾�� 2020.08.29   ";shus(kuan);
		shuk();cout<<"   |                                                                              ";shus(kuan);
		shuk();cout<<"   |                                                                              ";shus(kuan);
		shuk();cout<<"   |                                                                              ";shus(kuan);
		shuk();cout<<"   |                                                                              ";shus(kuan);
		shuk();cout<<"   |                                                                              ";shus(kuan);
	}
	shuk();cout<<"   |       0.�˳�                                                                 ";shus(kuan);
	shuk();printf("   |                      ��%dҳ����9ҳ��             ����A��D��ҳ��         ",ye);shus(kuan+6);
	shuk();tou();
	int a;
	while(!pshu(a,0)) a=getch();
	if(a=='d'&&ye!=10) geng(ye+1);
	else if(a=='a'&&ye!=1) geng(ye-1);
	else if(a=='0') return;
	else geng(ye);
}
void bq();
char bqrc[10][10001][10]={
{},
{"ʹ���ߣ�","XZY","","","","","","","",""},
{"�۲��ߣ�","","","","","","","","",""},
{"̽���ߣ�","DZW","ZZR","LDD","LCH","","","","",""},
{"�����ߣ�","CYH","ZCH","","","","","","",""},
{"�����ߣ�","PJL","","","","","","","",""},
};
void bqr()
{
	int kuan=25,a;
	qing;
	cout<<endl<<endl<<endl;
	if(zye==4)
	{
		tou();
		shuk();cout<<"   |                        ��Ȩ��˵��                                 ";shus(kuan);
		shuk();cout<<"   |   ʹ���ߣ�XZY                                                     ";shus(kuan);
		shuk();cout<<"   |   �۲��ߣ�                                                        ";shus(kuan);
		shuk();cout<<"   |   ̽���ߣ�DZW ZZR LDD LCH                                         ";shus(kuan);
		shuk();cout<<"   |   �����ߣ�CYH ZCH                                                 ";shus(kuan);
		shuk();cout<<"   |   �����ߣ�PJL                                                     ";shus(kuan);
		shuk();cout<<"   |                                                                   ";shus(kuan);
		shuk();cout<<"   |   �������������𽫴�������κ��ˣ�                                ";shus(kuan);
		shuk();cout<<"   |                                                                   ";shus(kuan);
		shuk();cout<<"   |                                                                   ";shus(kuan);
		shuk();cout<<"   |   ��1�鿴��Ȩ˵������0�˳���                                      ";shus(kuan);
		shuk();tou();
	}
	else printf("��û��Ȩ�ޣ�����\n\n��1�鿴��Ȩ˵������0�˳���\n");
	while(a!='0'&&a!='1') a=getch();
	if(a=='1') bq();
	else return;
}
void bq()
{
	int kuan=25,a;
	qing;
	cout<<endl<<endl<<endl;
	tou();
	shuk();cout<<"   |                          ��Ȩ˵��                                 ";shus(kuan);
	shuk();cout<<"   |   �˳����ɴ�����PJL�������ɣ�������Ȩ��                           ";shus(kuan);
	shuk();cout<<"   |   ���ǲ�����ζ�Ų���ʹ�ô������������Ա�ɰ����¹涨ʹ�á�        ";shus(kuan);
	shuk();cout<<"   |     ��ʹ���߿�����PJL���������������һ��Ȩ����                   ";shus(kuan);
	shuk();cout<<"   |     Ȩ����С���£���ÿһ�����������������Ȩ�������Լ���Ȩ����    ";shus(kuan);
	shuk();cout<<"   |       ʹ���ߣ�ֻ����ʹ�������                                    ";shus(kuan);
	shuk();cout<<"   |       �۲��ߣ����������߷�����                                  ";shus(kuan);
	shuk();cout<<"   |       ̽���ߣ����Թۿ�����Դ���룻                                ";shus(kuan);
	shuk();cout<<"   |       �����ߣ����޸Ĳ���Դ���룬���Բ鿴��Ȩ�����ߣ�              ";shus(kuan);
	shuk();cout<<"   |       �����ߣ�ӵ��һ��Ȩ����                                      ";shus(kuan);
	shuk();cout<<"   |   ��1�鿴��Ȩ�����ߣ���0�˳���                                    ";shus(kuan);
	shuk();tou();
	while(a!='0'&&a!='1') a=getch();
	if(a=='1') bqr();
	else return;
}
void hhh()
{
	for(int i=1;i<=5;++i)
	{
		qing;
		cout<<"�˹�����δ����������";
		cout<<"��"<<6-i<<"��"<<endl; 
		Sleep(950);
	}
}
bool flag=true;
void jie()
{
	qing;
	cout<<"������Ҫ����ô������"<<endl;
	cout<<"1.���   ������.��С�ĵ��"<<endl;
	int a=getch();
	if(a==1) flag=false;
}
bool que(int a)
{
	qing;
	cout<<"��ȷ��Ҫ�桰";
	cout<<jms[a];
	cout<<"��������"<<endl;
	cout<<"1.���   ������.��С�ĵ��"<<endl;
	char x;
	x=getch();qing;
	if(x!='1') return false;
	return true;
}
bool queg()
{ 
	cout<<"������֪��������"<<endl;
	cout<<"1.֪��   ������.��֪��"<<endl;
	int x=getch();qing;
	if(x!='1') return false;
	return true;
}
char ji[13]={' ','/','-','\\','|'};
void jiazai()
{
	int n=5;
	while(n--)
	for(int i=1;i<=4;++i)
	{
		qing;
		printf("ϵͳ������");
		cout<<ji[i]<<endl;
		Sleep(100);
	}
	qing;
	cout<<"���سɹ�������"<<endl;
	Sleep(3000); 
}
void jia(int a)
{
	int n=5;
	while(n--)
	for(int i=1;i<=3;++i)
	{
		qing;
		printf("��ȴ�");
		if(a!=0) printf("����"); 
		printf("����");
		for(int j=1;j<=i;++j) cout<<".";cout<<endl;
		Sleep(333);
	}
	qing;
	cout<<"���سɹ�������"<<endl;
	return;
}
void caishu(int qwe);
int md[31]={0,31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31};
struct tim{
	int y,m,d;
	void read()
	{
		scanf("%d %d %d",&y,&m,&d);
	}
	void print()
	{
		printf("%d year %d month %d day\n",y,m,d);
		stop; 
	}
	tim operator = (const tim & b)
	{
		y=b.y,m=b.m,d=b.d;
	}
};
bool bi(tim a,tim b)
{
	if(a.y>b.y) return true;
	if(b.y>a.y) return false;
	if(a.m>b.m) return true;
	if(b.m>a.m) return false;
	if(a.d>b.d) return true;
	if(b.d>a.d) return false;
	return true;
}
bool run(tim x)
{
	int a=x.y;
	if(a%400==0) return true;
	if(a%100==0) return false;
	if(a%4==0) return true;
	return false;
}
void swapp(tim & a,tim & b)
{
	tim tot;
	tot.d=a.d,tot.m=a.m,tot.y=a.y;
	a.d=b.d,a.m=b.m,a.y=b.y;
	b.d=tot.d,b.m=tot.m,b.y=tot.y;
	return;
}
tim maxn(tim a,tim b)
{
	if(bi(a,b)) return a;
	return b;
}
tim minn(tim a,tim b)
{
	if(bi(a,b)) return b;
	return a;
}
tim cha(tim a,tim b)
{
	tim ans;
	int na=0,nb=0;
	if(run(a)==true) na+=12;
	if(run(b)==true) nb+=12;
	if(a.d<b.d) a.d+=md[na+a.m-1],a.m--;
	if(a.m<b.m) a.m+=12,a.y--;
	if(a.d<b.d) a.d+=md[na+a.m-1],a.m--;
	if(a.m<b.m) a.m+=12,a.y--;
	ans.d=a.d-b.d,ans.m=a.m-b.m,ans.y=a.y-b.y;
	return ans;
}
tim he(tim a,tim b)
{
	int na=0,nb=0;
	if(run(a)==true) na+=12;
	if(run(b)==true) nb+=12;
	tim ans;
	ans.d=a.d+b.d;
	ans.m=a.m+b.m;
	ans.y=a.y+b.y;
	if(ans.d>md[ans.m+na]) ans.d-=md[ans.m+na],ans.m++;
	if(ans.m>12) ans.m-=12,ans.y++;
	return ans;
}
void nyc()
{
	tim a,b,a1,b1,ans;
	jiazai();
	cout<<"��������ʼ���ڣ�";a.read();
	cout<<"������������ڣ�";b.read();
	if(!bi(a,b)) swapp(a,b);
	ans=cha(a,b);
	cout<<"���Ĵ��ǣ�";ans.print();
	return ;
}
void nyh()
{
	tim a,b,a1,b1,ans;
	jiazai();
	cout<<"��������ʼ���ڣ�";a.read();
	cout<<"��������˶�ã�";b.read();
	if(!bi(a,b)) swapp(a,b);
	ans=he(a,b);
	cout<<"���Ĵ��ǣ�";ans.print();
	return ;
}
void shibai(int gme)
{
	cout<<"��Ϸʧ���ˣ���Ҫ�����𣿣�"<<endl;
	cout<<"1.���������� ������.������лл"<<endl; 
	int a=inn();
	if(a==1)
	{
		if(gme==1) caishu(5);
		if(gme==2) xj(8);
	}
}
int caishu2=0;
void caishu1(int a)
{
	if(a==1)
	{
		caishu2++;
		if(caishu2<3)
		{
			printf("�ٲ¶�%d�ξ���ͨ���ˣ�\n",3-caishu2);
			stop;
			caishu(a);
		}
		else cout<<"��ϲ��ͨ�أ�"<<endl;
		stop;
	}
	if(a==0)
	{
		cout<<"��Ҳ���Ի�ý���"<<endl;
		cout<<"�Ǿ��ǡ�����"<<endl;
		cout<<"����һ�ΰɣ�"<<endl;
	}
}
void caishu(int qwe)
{
	qing;
	if(caishu2==0)
	{
		if(!que(qwe)) return ; 
		srand((int)time(0));
		cout<<"������Ϸ"<<endl;Sleep(2000);
		cout<<"��1~1000֮������һ������ÿ��һ�������ұ���������˻���С�ˡ�"<<endl;Sleep(2000);
		cout<<"ÿһ��һ����12�β������ᣬ���3�ּ���ͨ�ء�"<<endl;Sleep(2000);
	}
	cout<<"��ʼ�ɣ�"<<endl;Sleep(2000);
	int a,b;
	a=rand()%1000+1;
	for(int i=1;;++i)
	{
		cin>>b;
		if(a==b)
		{
			cout<<"�����"<<endl;
			caishu1(1);
			break;
		}
		if(a!=b)
		{
			if(b<a) cout<<"С��"<<endl;
			if(b>a) cout<<"����"<<endl;
			if(i==12)
			{
				cout<<"��ʧ����"<<endl<<"����������������"<<endl;
				caishu1(0);
				break;
			}
		}
	}
}
int n;
char dt1[101][101]={{},
{" #########################"},
{" #*......#...##.#.#....#.#"},
{" #.#.##.####....#...##...#"},
{" #....#....####.#.#.###.##"},
{" ###.#####..#.#...#.###.##"},
{" #....#....##.#.#.###.#..#"},
{" ##.###.##..#.###...#.##.#"},
{" #..#.###..##.....#.#....#"},
{" #.##..###..#####.#.####.#"},
{" #....##...##.....#.#....#"},
{" #.#..#..####.#####.#.##.#"},
{" #.#.##.#####.#.#...#....#"},
{" #...#........#.#.#.###.##"},
{" #...##.#######.#.#.##...#"},
{" #.####.#...#...###.##.#.#"},
{" #.#.#..###.#.#..##....#.#"},
{" #...##.#.#.####....##.#.#"},
{" #.###..#.#..#.####.#....#"},
{" #...#.##...##......#.##.#"},
{" #.###.##.#.#######.#.#..#"},
{" #........#.........#...@#"},
{" #########################"}};
char bu[1000],dt[101][101],xjc[101][101]={"","�ϰ��","�յ�  ��","����  ��","·��  ��","",""},
    xjpfk[101][101][10]={
	{},
	{"","��","��","��","��","��","��","","",""},
	{"","��","��","��","��","","","","",""},
	{"","��","��","��","��","��","��","��","��","��"},
	{"","��","��","��","��","��","��","","",""}
	};
int xjt[101]={1,1,1,1,1,1,1,1,1,1},xjtm[101]={0,6,4,9,6};
int kuan=22,chang=25,x=2,y=2,win,dian=100;
int xjpf(int a,int tot)
{
	qing;
	int n;
	if(a==1) n=3;
	else n=4;
	cout<<"                     ����Ƥ��"<<endl;
	cout<<" ------------------------------------------------"<<endl;
	cout<<"|                                                |"<<endl;
	cout<<"|           ��w��s����Ҫ������һ��               |"<<endl;
	cout<<"|                                                |"<<endl;
	cout<<"|                                                |"<<endl;
	cout<<"|                                                |"<<endl;
	cout<<"|                                                |"<<endl;
	cout<<"|           ��a��d����������һ��������һ��       |"<<endl;
	cout<<"|                                                |"<<endl;
	cout<<"|           ������Ϻ󰴻����˳�                 |"<<endl;
	cout<<"|                                                |"<<endl;
	cout<<"|                                                |"<<endl;
	if(n==3) cout<<"|                                                |"<<endl;
	for(int i=1;i<=n;++i)
	{
		cout<<"|           ";
		if(tot==i) printf(" -->   ");
		else printf("       ");
		cout<<xjc[i]<<xjpfk[i][xjt[i]];
		printf("  ��%d/%d��",xjt[i],xjtm[i]);shus(12);
//		����
	}
	cout<<"|                                                |"<<endl;
	cout<<"|                                                |"<<endl;
	cout<<"|                                                |"<<endl;
	cout<<"|                                                |"<<endl;
	cout<<" ------------------------------------------------"<<endl;
	int x=getch();qing;
	while(x!='s'&&x!='w'&&x!='a'&&x!='d'&&x!=13) x=getch();
	if(x=='a') xjt[tot]=max(1,xjt[tot]-1);
	if(x=='d') xjt[tot]=min(xjtm[tot],xjt[tot]+1);
	if(x=='s'&&tot!=n) xjpf(a,tot+1);
	else if(x=='w'&&tot!=1) xjpf(a,tot-1);
	else if(x==13) return 0;
	else xjpf(a,tot);
}
int pditu(int x,int y)
{
	int re=0;
	if(dt[x][y]=='#')
	{
		int tot=xjt[1];
		if(tot==1) printf("��"),re++;
		else if(tot==2) printf("��"),re++;
		else if(tot==3) printf("��"),re++;
		else if(tot==4) printf("��"),re++;
		else if(tot==5) printf("��"),re++;
		else if(tot==6) printf("��"),re++;
	}
	else if(dt[x][y]=='@')
	{
		int tot=xjt[2];
		if(tot==1) printf("��");
		else if(tot==2) printf("��");
		else if(tot==3) printf("��");
		else if(tot==4) printf("��");
	}
	else if(dt[x][y]=='*')
	{
		int tot=xjt[3];
		if(tot==1) printf("��");
		else if(tot==2) printf("��");
		else if(tot==3) printf("��");
		else if(tot==4) printf("��");
		else if(tot==5) printf("��");
		else if(tot==6) printf("��");
		else if(tot==7) printf("��");
		else if(tot==8) printf("��");
		else if(tot==9) printf("��");
	}
	else if(dt[x][y]=='$')
	{
		int tot=xjt[4];
		if(tot==4) printf("��");
		else if(tot==5) printf("��");
		else if(tot==6) printf("��");
		else if(tot==1) printf("��");
		else if(tot==2) printf("��");
		else if(tot==3) printf("��");
	}
	else printf("  ");
	if(y==chang) printf("\n");
	return re;
}
void zoux(char bu)
{
	if(bu=='q'&&yo<=3) xjpf(1,1),dian++;
	cout<<"ʣ�����"<<dian<<"      ";
	if(yo<=3) printf("��Q������Ƥ��\n");
	else printf("֧��10Ԫ���ɸ���Ƥ��\n");
	dt[x][y]='.';
	if(bu=='d'&&dt[x][y+1]!='#') y++;
	if(bu=='a'&&dt[x][y-1]!='#') y--;
	if(bu=='s'&&dt[x+1][y]!='#') x++;
	if(bu=='w'&&dt[x-1][y]!='#') x--;
	if(bu=='D'&&dt[x][y+1]!='#') y++;
	if(bu=='A'&&dt[x][y-1]!='#') y--;
	if(bu=='S'&&dt[x+1][y]!='#') x++;
	if(bu=='W'&&dt[x-1][y]!='#') x--;
	if(dt[x][y]=='@')
	{
		qing;
		cout<<"��Ӯ��"<<endl;
		win++,x=2,y=2;
		stop;
		return;
	}
	else dt[x][y]='*';
	for(int i=1;i<=kuan;++i)
	for(int j=1;j<=chang;++j)
	pditu(i,j);
}
void ce(int da)
{
	char cr;
	cin>>cr;
	if(cr==da) cout<<"��ȷ"<<endl;
	else
	{
		cout<<"�������Ȼû���䱸������������,������Ҫ�س�����"<<endl; 
		shibai(2);
	}
}
void xj(int a)
{
	char da,x;int yan=500;
	kuan=22,chang=25,x=2,y=2,win=0,dian=70;
	qing;
	if(!que(a)) return ;
	if(!queg())
	{
		cout<<"��ӭ������������磬��ı��Ϊ89757��������˰�������Ϊ��С����"<<endl;
		Sleep(yan);
		cout<<"���ˣ���Ϊ�����˵��㣬�����ع�һ�»�����������ɣ�"<<endl;Sleep(yan);
		cout<<"���ʻ����˵�һ������ʲô��"<<endl;Sleep(yan);
		cout<<"A�������˲����˺����࣬����������Ϊ��ʹ�����ܵ��˺���"<<endl;Sleep(yan);
		cout<<"B�������˲����˺����࣬Ҳ��������Ϊ��ʹ�����ܵ��˺���"<<endl;Sleep(yan);
		cout<<"C�������˲�������Ϊ��ʹ�����ܵ��˺����������˺����ࡣ"<<endl;Sleep(yan);
		cout<<"D�������˿����˺����࣬Ҳ��������Ϊ��ʹ�����ܵ��˺���"<<endl;Sleep(yan);
		ce('B');stop;qing;
		cout<<"��ӭ������������磬��ı��Ϊ89757��������˰�������Ϊ��С����"<<endl; 
		cout<<"���ˣ���Ϊ�����˵��㣬�����ع�һ�»�����������ɣ�"<<endl;
		cout<<"���ʻ����˵ڶ�������ʲô��"<<endl;Sleep(yan);
		cout<<"A�������˿�����ѡ����������������"<<endl;Sleep(yan);
		cout<<"B�������˿�����ѡ���Υ�����������"<<endl;Sleep(yan);
		cout<<"C�������˱����������������"<<endl;Sleep(yan);
		cout<<"D�������˱���Υ�����������"<<endl;Sleep(yan);
		ce('C');stop,qing;
		cout<<"��ӭ������������磬��ı��Ϊ89757��������˰�������Ϊ��С����"<<endl;
		cout<<"���ˣ���Ϊ�����˵��㣬�����ع�һ�»�����������ɣ�"<<endl;
		cout<<"���ʻ����˵���������ʲô��"<<endl;Sleep(yan);
		cout<<"A�������˿�����ѡ����˺��Լ�"<<endl;Sleep(yan);
		cout<<"B�������˿�����ѡ��ı����Լ�"<<endl;Sleep(yan);
		cout<<"C�������˱����˺��Լ�"<<endl;Sleep(yan);
		cout<<"D�������˱��뱣���Լ�"<<endl;Sleep(yan);
		ce('D');stop,qing;
		cout<<"������ȴ�ڻؼҵ�·�Ϻ�������ɢ��"<<endl;Sleep(yan);
		cout<<"��Ҫ�ڵ����ľ�֮ǰ�ϻؼ�"<<endl;Sleep(yan);
		cout<<"������ͻ���·��ǿ�ƹػ�"<<endl;Sleep(yan);
		cout<<"Ȼ��������������������"<<endl;Sleep(yan);
		stop,qing;
		cout<<"�⸽���ĵ�����Ӧ����Ϥ��"<<endl;Sleep(yan);
		cout<<"��ļ������Ӧ����"<<endl;Sleep(yan);
		cout<<"���ˣ��㻹ʣ70��ĵ���"<<endl;Sleep(yan);
		cout<<"ÿ��һ����Ҫһ�����"<<endl;Sleep(yan);
		cout<<"��ʼ�ɣ�"<<endl;Sleep(yan);
		stop;qing;
	}
	else cout<<"��ʼ�ɣ�"<<endl;
	for(int i=1;i<=kuan;++i)
	for(int j=1;j<=chang;++j)
	dt[i][j]=dt1[i][j];
	while(1)
	{
		char qweqwe;
		qweqwe=getch();
		qing;
		zoux(qweqwe);
		dian--; 
		if(win==1) break;
		if(dian==0)
		{
			qing;
			cout<<"��ལ���ĵ����ľ��ˣ���ǰһƬ�谵������������"<<endl;
			stop;
//			shibai(2);
			return ;
		}
	}
}
void zouy(char bu)
{
	if(bu=='q') xjpf(2,1),dian++;
	cout<<"ʣ�����"<<dian<<"      ��Q���ı�Ƥ��"<<endl;
	dt[x][y]='$';
	if(bu=='d'&&dt[x][y+1]!='#'&&dt[x][y+1]!='$') y++;
	if(bu=='a'&&dt[x][y-1]!='#'&&dt[x][y-1]!='$') y--;
	if(bu=='s'&&dt[x+1][y]!='#'&&dt[x+1][y]!='$') x++;
	if(bu=='w'&&dt[x-1][y]!='#'&&dt[x-1][y]!='$') x--;
	if(bu=='D'&&dt[x][y+1]!='#'&&dt[x][y+1]!='$') y++;
	if(bu=='A'&&dt[x][y-1]!='#'&&dt[x][y-1]!='$') y--;
	if(bu=='S'&&dt[x+1][y]!='#'&&dt[x+1][y]!='$') x++;
	if(bu=='W'&&dt[x-1][y]!='#'&&dt[x-1][y]!='$') x--;
	if(dt[x][y]=='@')
	{
		if(win==1)
		{
			win++;
			return;
		}
		if(win==0)
		{
			cout<<"�򵽲��ˣ����ھ���Ҫ�ؼ���"<<endl;
			dt[2][2]='@';win++;
		}
	}
	else dt[x][y]='*';
	for(int i=1;i<=kuan;++i)
	for(int j=1;j<=chang;++j)
	pditu(i,j);
}
void xj2(int a)
{
	char da,x;int yan=500;
	kuan=22,chang=25,x=2,y=2,win=0,dian=150;
	qing;
	if(!que(a)) return ;
	if(!queg())
	{
		cout<<"��ӭ������������磬��ı��Ϊ89757��������˰�������Ϊ��С����"<<endl;Sleep(yan);
		cout<<"�Դ��㱻���������֮��"<<endl;Sleep(yan);
		cout<<"��ͼ������˸��ָ����ļ����"<<endl;Sleep(yan);
		cout<<"���죬��Ҫȥ���"<<endl;Sleep(yan);
		cout<<"���ǣ����������֮����ŷ��֡���"<<endl;Sleep(yan*5);
		cout<<"�������Ǹ�������������"<<endl;Sleep(yan);stop;qing; 
		cout<<"�����㷢�ֻ��ǿ���ȥ���г���"<<endl;Sleep(yan);
		cout<<"ֻ������ҪʡһЩ��"<<endl;Sleep(yan);
		cout<<"����������߹���·�����߹�"<<endl;Sleep(yan);
		cout<<"������������趨����������ÿһ��ֻ��һ���"<<endl;Sleep(yan);
		cout<<"�����ڻ���150�����"<<endl;Sleep(yan);
		cout<<"���ԡ���"<<endl;Sleep(yan*5);
		cout<<"��ʼ�ж��ɣ���"<<endl;Sleep(yan);stop;qing;
	}
	else cout<<"��ʼ�ɣ�"<<endl;
	for(int i=1;i<=kuan;++i)
	for(int j=1;j<=chang;++j)
	dt[i][j]=dt1[i][j];
	while(1)
	{
		char qweqwe;
		qweqwe=getch();
		qing;
		zouy(qweqwe);
		dian--; 
		if(win==2) break;
		if(dian==0)
		{
			qing;
			cout<<"��ལ���ĵ����ľ��ˣ���ǰһƬ�谵������������"<<endl;
			stop;
//			shibai(2);
			return ;
		}
	}
	qing;
	cout<<"��˳ɹ�����"<<endl;stop;
}
void zou3(char bu)
{
	if(bu=='q') xjpf(1,1),dian++;
	cout<<"ʣ�����"<<dian<<"      ��Q���ı�Ƥ��"<<endl;
	dt[x][y]='.';
	if(bu=='d'&&dt[x][y+1]!='#') y++,dian-=3;
	else if(bu=='a'&&dt[x][y-1]!='#') y--,dian-=1;
	else if(bu=='s'&&dt[x+1][y]!='#') x++,dian-=4;
	else if(bu=='w'&&dt[x-1][y]!='#') x--,dian-=2;
	else if(bu=='D'&&dt[x][y+1]!='#') y++,dian-=3;
	else if(bu=='A'&&dt[x][y-1]!='#') y--,dian-=1;
	else if(bu=='S'&&dt[x+1][y]!='#') x++,dian-=4;
	else if(bu=='W'&&dt[x-1][y]!='#') x--,dian-=2;
	else dian-=5;
	if(dt[x][y]=='@')
	{
		win++; 
		return;
	}
	else dt[x][y]='*';
	for(int i=1;i<=kuan;++i)
	for(int j=1;j<=chang;++j)
	pditu(i,j);
}
void xj3(int a)
{
	char da,x;int yan=500;
	kuan=22,chang=25,x=2,y=2,win=0,dian=200;
	qing;
	if(!que(a)) return ;
	if(!queg())
	{
		cout<<"��ӭ������������磬��ı��Ϊ89757��������˰�������Ϊ��С����"<<endl;Sleep(yan);
		cout<<"�Դ��㱻���������֮��"<<endl;Sleep(yan);
		cout<<"��ͼ������˸��ָ����ļ����"<<endl;Sleep(yan);
		cout<<"�����Ѿ��ü����ˣ��������е����"<<endl;Sleep(yan*5);
		cout<<"����Ҫ����һ�£����ǡ���"<<endl;Sleep(yan);
		cout<<"���˾�Ȼ���ڼң�����"<<endl;Sleep(yan);stop;qing; 
		cout<<"�����㷢�ֻ��ǿ���ȥ������"<<endl;Sleep(yan);
		cout<<"ֻ������ҪʡһЩ��"<<endl;Sleep(yan);
		cout<<"����Ϊĥ��ԭ����Ҫ��һЩ����"<<endl;Sleep(yan);
		cout<<"������һ����Ҫ��4��磬����3������2������1�񣬶�ײ��ǽҪ�ķ�5���"<<endl;Sleep(yan);
		cout<<"�����ڻ���200�����"<<endl;Sleep(yan);
		cout<<"���ԡ���"<<endl;Sleep(yan*5);
		cout<<"��ʼ�ж��ɣ���"<<endl;Sleep(yan);stop;qing;
	}
	else cout<<"��ʼ�ɣ�"<<endl;
	for(int i=1;i<=kuan;++i)
	for(int j=1;j<=chang;++j)
	dt[i][j]=dt1[i][j];
	while(1)
	{
		char qweqwe;
		qweqwe=getch();
		qing;
		zou3(qweqwe);
		if(win==1) break;
		if(dian<=0)
		{
			qing;
			cout<<"��ལ���ĵ����ľ��ˣ���ǰһƬ�谵������������"<<endl;
			stop;
//			shibai(2);
			return ;
		}
	}
	qing;
	cout<<"����ɹ�����"<<endl;stop;
}
char zditu[11][21][21]=
{
 {},
 {
  {},
  {" $$$$$$"},
  {" $*...$"},
  {" $.##.$"},
  {" $.##.$"},
  {" $.##.$"},
  {" &...@$"},
  {" $$$$$$"}
 },
 {
  {},
  {" $$$$$$&$"},
  {" $*...$.$"},
  {" $.#....$"},
  {" $..#$##$"},
  {" $..##..$"},
  {" $.$#$$.$"},
  {" $.##..@$"},
  {" $$$$$$$$"},
 },
 {
  {},
  {" $$$$$&$$$$"},
  {" $*..$....$"},
  {" $..#$.$##$"},
  {" $.$#$.##.$"},
  {" $.....$..$"},
  {" $..$..$..$"},
  {" $$#$$.$##$"},
  {" $.....#..$"},
  {" $.#..#..@$"},
  {" $$$$$$$$$$"},
 },
 {
  {},
  {" $$$$$$$$$$&$"},
  {" $*$........$"},
  {" $.$#$.#.$..$"},
  {" $...$$.#$..$"},
  {" $.$.#....$.$"},
  {" $.#.$.$.#$.$"},
  {" $.$#...$#$#$"},
  {" $..#.$..#..$"},
  {" $.###$.$$..$"},
  {" $..$......#$"},
  {" &...#.#.#.@$"},
  {" $$$$$$$$$$$$"},
 }
};
int qwe=1,shu=2,heng=2;
int ck[11][11]={{},{7,6},{8,8},{10,10},{12,12}};
char ditu[101][101];
bool fla;
int print(int x,int y)
{
	int re=0;
	if(ditu[x][y]=='$') printf("��");
	else if(ditu[x][y]=='#') printf("��"),re++;
	else if(ditu[x][y]=='@') printf("��");
	else if(ditu[x][y]=='*') printf("��");
	else if(ditu[x][y]=='&') printf("��");
	else printf("  ");
	if(y==chang) printf("\n");
	return re;
}
void tui(int nx,int ny)
{
	int xx=shu+nx+nx,yy=heng+ny+ny;
	while(ditu[xx][yy]!='.'&&ditu[xx][yy]!='@')
	{
		xx+=nx,yy+=ny;
		if(xx>=kuan||yy>=chang||xx<=1||yy<=1)
		{
			fla=true;
			return;
		}
	}
	ditu[xx][yy]='#';
	return;
}
bool pan(char a)
{
	if(a=='.'||a=='@'||a=='&') return true;
	return false;
}
void zou(char bu,int n)
{
	int s=shu,h=heng,fang=0;
	ditu[shu][heng]='.',fla=false;
	if(bu=='d'&&pan(ditu[shu][heng+1])) heng++,fla=true;
	if(bu=='a'&&pan(ditu[shu][heng-1])) heng--,fla=true;
	if(bu=='s'&&pan(ditu[shu+1][heng])) shu++,fla=true;
	if(bu=='w'&&pan(ditu[shu-1][heng])) shu--,fla=true;
	if(bu=='D'&&pan(ditu[shu][heng+1])) heng++,fla=true;
	if(bu=='A'&&pan(ditu[shu][heng-1])) heng--,fla=true;
	if(bu=='S'&&pan(ditu[shu+1][heng])) shu++,fla=true;
	if(bu=='W'&&pan(ditu[shu-1][heng])) shu--,fla=true;
	
	if(bu=='d'&&ditu[shu][heng+1]=='#'&&!fla) tui(0,1);
	if(bu=='a'&&ditu[shu][heng-1]=='#'&&!fla) tui(0,-1);
	if(bu=='s'&&ditu[shu+1][heng]=='#'&&!fla) tui(1,0);
	if(bu=='w'&&ditu[shu-1][heng]=='#'&&!fla) tui(-1,0);
	if(bu=='D'&&ditu[shu][heng+1]=='#'&&!fla) tui(0,1);
	if(bu=='A'&&ditu[shu][heng-1]=='#'&&!fla) tui(0,-1);
	if(bu=='S'&&ditu[shu+1][heng]=='#'&&!fla) tui(1,0);
	if(bu=='W'&&ditu[shu-1][heng]=='#'&&!fla) tui(-1,0);
	
	if(bu=='d'&&ditu[shu][heng+1]=='#'&&!fla) heng++,fla=true;
	if(bu=='a'&&ditu[shu][heng-1]=='#'&&!fla) heng--,fla=true;
	if(bu=='s'&&ditu[shu+1][heng]=='#'&&!fla) shu++,fla=true;
	if(bu=='w'&&ditu[shu-1][heng]=='#'&&!fla) shu--,fla=true;
	if(bu=='D'&&ditu[shu][heng+1]=='#'&&!fla) heng++,fla=true;
	if(bu=='A'&&ditu[shu][heng-1]=='#'&&!fla) heng--,fla=true;
	if(bu=='S'&&ditu[shu+1][heng]=='#'&&!fla) shu++,fla=true;
	if(bu=='W'&&ditu[shu-1][heng]=='#'&&!fla) shu--,fla=true;
	if(ditu[shu][heng]=='&') win--;
	if((ditu[shu][heng]=='@'||ditu[shu][heng]=='&')&&fla==false)
	{
		qing;
		ditu[s][h]='*';
	}
	else ditu[shu][heng]='*';
	if(ditu[kuan-1][chang-1]!='@') ditu[kuan-1][chang-1]='@';
	cout<<"ʣ�������"<<dian<<endl;
	cout<<"��ǰ���꣺"<<"  ("<<heng<<","<<shu<<") "<<endl;
	for(int i=1;i<=kuan;++i)
	for(int j=1;j<=chang;++j)
	fang+=print(i,j);
	cout<<"ʣ�����ӣ�"<<fang<<endl;
	if(fang==0&&ditu[shu][heng]=='@') win++;
}
void txz(int a)
{
	int fang=0;
	shu=2,heng=2,win=0,dian=100000;
	qing;
	if(!que(a)) return ;
	if(!queg())
	{
		cout<<"��������Ϸ"<<endl;Sleep(1000);
		cout<<"�Ƚ����������Ƶ����Ǵ�"<<endl;Sleep(1000);
		cout<<"Ȼ���Լ����ߵ����Ǵ�����"<<endl;Sleep(1000);
		cout<<"�ǲ��Ǻܼ�"<<endl;Sleep(1000);
	}
	else cout<<"��ʼ�ɣ�"<<endl;
	cout<<"��ѡ���ѶȰ�"<<endl;
	cout<<"1.����"<<endl;
	cout<<"2.��"<<endl;
	cout<<"3.�е�"<<endl;
	cout<<"4.����"<<endl;
	cout<<"ע�������Ͷ��������㲻�����˻��߲��������Ǿ��߽�ȥ��"<<endl;
	while(qwe<='0'||qwe>='5') qwe=getch();qwe-='0';
	kuan=ck[qwe][0],chang=ck[qwe][1];
	for(int i=1;i<=kuan;++i)
	for(int j=1;j<=chang;++j)
	ditu[i][j]=zditu[qwe][i][j];qing; 
	cout<<"ʣ�������"<<dian<<endl;
	cout<<"��ǰ���꣺"<<"  ("<<heng<<","<<shu<<")"<<endl;
	for(int i=1;i<=kuan;++i)
	for(int j=1;j<=chang;++j)
	fang+=print(i,j);
	cout<<"ʣ�����ӣ�"<<fang<<endl;
	while(1)
	{
		char x;
		x=getch();
		qing;
		zou(x,qwe);
		dian--;
		if(win==1||win==-1) break;
	}
	qing;
	if(win==1) cout<<"��Ӯ��"<<endl;
	else cout<<"��Ͷ����"<<endl; 
	stop;
	return ; 
}
char O[1001][1001]={{}, {"O(n*n)     :"},{"O(n*��n)   :"},{"O(n*log(n)):"},
						{"O(n)       :"},{"O(��n)     :"},{"O(log(n))  :"}};
int sj()
{
	int a,b,c;
	qing;
	cout<<"����ʱ�临�Ӷ�"<<endl<<endl;
	cout<<"��������Ŀ�е�n������0��Ϊ�˳�����";
	cin>>a;
	long long int OO[1001]={0,(ll)a*a,(ll)a*sqrt(a),(ll)a*log2(a),(ll)a,(ll)sqrt(a),(ll)log2(a)};
	if(a==0) return 0; 
	cout<<"��������Ҫ����Ľ��"<<endl;
	cout<<"1.�������   2.ʱ�䣨��λ�����룩   3.һ�����ڻ᲻�ᱬ"<<endl;
	b=getch();b-='0'; 
	for(int i=1;i<=6;++i)
	{
		cout<<O[i];
		if(b==1) cout<<OO[i]<<endl;
		if(b==2) cout<<(long double)OO[i]/140000.0<<endl;
		if(b==3)
		{
			bool tot=(long long)OO[i]/140000<=1000;
			if(tot) cout<<"����"<<endl;
			else cout<<"��"<<endl;
		}
	}
	cout<<"ע���˽�������ڲο������²��ܡ�"<<endl;
	stop;
	sj();
	return 0;
}
char cb[11][12][12]=
{
 {},
 {
  {},
  {" $$$$$$$$$$"},
  {" $*..$YYYY$"},
  {" $Y#.#$#$.$"},
  {" $..##..$#$"},
  {" $.#Y#$#$#$"},
  {" $$$.$Y.##$"},
  {" $...$..$.$"},
  {" $Y..$##$.$"},
  {" $......$U$"},
  {" $$$$$$$$$$"}
 },
 {
  {},
  {" $$$$$$$$$$"},
  {" $D*..$YYU$"},
  {" $$..Y$Y..$"},
  {" $$#$$$$##$"},
  {" $..$Y#.#.$"},
  {" $.$$$$.#.$"},
  {" $...#.Y#.$"},
  {" $...#..#.$"},
  {" $...Y#.#.$"},
  {" $$$$$$$$$$"},
 },
 {
  {},
  {" $$$$$$$$$$"},
  {" $U#.$..*D$"},
  {" $$..$$...$"},
  {" $$#$Y$$##$"},
  {" $..$Y$.##$"},
  {" $.$$#$.#.$"},
  {" $#..#.Y#.$"},
  {" $...#..#.$"},
  {" $...Y#.#.$"},
  {" $$$$$$$$$$"},
 },
 {
  {},
  {" $$$$$$$$$$"},
  {" $D*.$Y..#$"},
  {" $$$.Y$.$.$"},
  {" $U.$Y#.$Y$"},
  {" $.#.$#$$#$"},
  {" $$....$.#$"},
  {" $.#$$$$Y.$"},
  {" $.$$YYY$.$"},
  {" $..#.....$"},
  {" $$$$$$$$$$"},
 },
 {
  {},
  {" $$$$$$$$$$"},
  {" $YY#YYY#.$"},
  {" $$$Y$###.$"},
  {" $D*.#$.#.$"},
  {" $..$#$$#$$"},
  {" $YY$.Y#..$"},
  {" $#.#$Y$$#$"},
  {" $.$.#Y$U#$"},
  {" $YY#$#$..$"},
  {" $$$$$$$$$$"},
 },
 {
  {},
  {" $$$$$$$$$$"},
  {" $..#####.$"},
  {" $$$#$###.$"},
  {" $U..#$##.$"},
  {" $..$Y$$#$$"},
  {" $YY$$##..$"},
  {" $###$#$$#$"},
  {" $.$###$D#$"},
  {" $.##$#$*.$"},
  {" $$$$$$$$$$"},
 },
 {
  {},
  {" $$$$$$$$$$"},
  {" $$...$...$"},
  {" $$.$.$.$.$"},
  {" $D*$.$.$#$"},
  {" $$$$.$.$U$"},
  {" $....$.$$$"},
  {" $.$$$$...$"},
  {" $.$.#.$$.$"},
  {" $...$....$"},
  {" $$$$$$$$$$"},
 },
 {
  {},
  {" $$$$$$$$$$"},
  {" $Y..&#..Y$"},
  {" $.$&$$&$.$"},
  {" $U..&$.$*$"},
  {" $#$$#$Y$D$"},
  {" $.&#.$Y.$$"},
  {" $##$..$..$"},
  {" $YYY$..$.$"},
  {" $YYYY$...$"},
  {" $$$$$$$$$$"},
 },
 {
  {},
  {" $$$$$$$$$$"},
  {" $#####&.Y$"},
  {" $*#$#$$$Y$"},
  {" $D$Y&$..#$"},
  {" $$YYY$$.$$"},
  {" $.&$&Y$&.$"},
  {" $#$.YY&.#$"},
  {" $.$$$$$$#$"},
  {" $.#..#..@$"},
  {" $$$$$$$$$$"},
 }
};
bool wpan(char nx,char ny)
{
	if(nx==ny) return true;
	if(nx==ny-32) return true;
	return false;
}
int key=0,ceng;
char dqc[101][101];
char mtc[101][101]={"","�ϰ��","��    ��","�յ�  ��","����  ��","Կ��  ��","��    ��","��    ��"},
    mtpfk[101][101][10]={
	{},
	{"","��","��","��","��","��","��","","",""},
	{"","��","��","��","��","��","��","","",""},
	{"","��","��","��","","","","","",""},
	{"","��","��","��","��","��","��","��","��","��"},
	{"","��","��","��","��","��","��","","",""},
	{"","��","��","��","��","","","","",""},
	{"","��","��","��","��","","","","",""},
	{"","","","","","","","","",""},
	};
int mtt[101]={1,1,1,1,1,1,1,1,1,1},mttm[101]={0,6,6,3,9,6,4,4};
int mtpf(int tot)
{
	qing;
	int n=7;
	cout<<"                     ����Ƥ��"<<endl;
	cout<<" ------------------------------------------------"<<endl;
	cout<<"|                                                |"<<endl;
	cout<<"|           ��w��s����Ҫ������һ��               |"<<endl;
	cout<<"|                                                |"<<endl;
	cout<<"|           ��a��d����������һ��������һ��       |"<<endl;
	cout<<"|                                                |"<<endl;
	cout<<"|           ������Ϻ󰴻����˳�                 |"<<endl;
	cout<<"|                                                |"<<endl;
	for(int i=1;i<=n;++i)
	{
		cout<<"|           ";
		if(tot==i) printf(" -->   ");
		else printf("       ");
		cout<<mtc[i]<<mtpfk[i][mtt[i]];
		printf("  ��%d/%d��",mtt[i],mttm[i]);shus(12);
//		����
	}
	cout<<"|                                                |"<<endl;
	cout<<" ------------------------------------------------"<<endl;
	int x=getch();qing;
	while(x!='s'&&x!='w'&&x!='a'&&x!='d'&&x!=13) x=getch();
	if(x=='a') mtt[tot]=max(1,mtt[tot]-1);
	if(x=='d') mtt[tot]=min(mttm[tot],mtt[tot]+1);
	if(x=='s'&&tot!=n) mtpf(tot+1);
	else if(x=='w'&&tot!=1) mtpf(tot-1);
	else if(x==13) return 0;
	else mtpf(tot);
}
int pqc(int x,int y)
{
	int re=0;
	if(dqc[x][y]=='$')
	{
		int tot=mtt[1];
		if(tot==4) printf("��");
		else if(tot==5) printf("��");
		else if(tot==6) printf("��");
		else if(tot==1) printf("��");
		else if(tot==2) printf("��");
		else if(tot==3) printf("��");
	}
	else if(dqc[x][y]=='#')
	{
		int tot=mtt[2];
		if(tot==1) printf("��"),re++;
		else if(tot==2) printf("��"),re++;
		else if(tot==3) printf("��"),re++;
		else if(tot==4) printf("��"),re++;
		else if(tot==5) printf("��"),re++;
		else if(tot==6) printf("��"),re++;
	}
	else if(dqc[x][y]=='@')
	{
		int tot=mtt[3];
		if(tot==1) printf("��");
		else if(tot==2) printf("��");
		else if(tot==3) printf("��");
	}
	else if(dqc[x][y]=='*')
	{
		int tot=mtt[4];
		if(tot==1) printf("��");
		else if(tot==2) printf("��");
		else if(tot==3) printf("��");
		else if(tot==4) printf("��");
		else if(tot==5) printf("��");
		else if(tot==6) printf("��");
		else if(tot==7) printf("��");
		else if(tot==8) printf("��");
		else if(tot==9) printf("��");
	}
	else if(dqc[x][y]=='Y')
	{
		int tot=mtt[5];
		if(tot==1) printf("��");
		else if(tot==2) printf("��");
		else if(tot==3) printf("��");
		else if(tot==4) printf("��");
		else if(tot==5) printf("��");
		else if(tot==6) printf("��");
	}
	else if(dqc[x][y]=='U')
	{
		int tot=mtt[6];
		if(tot==1) printf("��");
		else if(tot==2) printf("��");
		else if(tot==3) printf("��");
		else if(tot==4) printf("��");
	}
	else if(dqc[x][y]=='D')
	{
		int tot=mtt[7];
		if(tot==1) printf("��");
		else if(tot==2) printf("��");
		else if(tot==3) printf("��");
		else if(tot==4) printf("��");
	}
	else if(dqc[x][y]=='&')
	{
		int tot=mtt[8];
		printf("��"); 
	}
	else printf("  ");
	if(y==10) printf("\n");
	return re;
}
void zouz(char bu)
{
	bool tot=false;
	if(dqc[x][y]!='$') dqc[x][y]='.';
	if(bu=='e'&&yo<=3) mtpf(1);
	else if(wpan(bu,'d')&&dqc[x][y+1]=='#'&&key!=0) key--,y++;
	else if(wpan(bu,'a')&&dqc[x][y-1]=='#'&&key!=0) key--,y--;
	else if(wpan(bu,'s')&&dqc[x+1][y]=='#'&&key!=0) key--,x++;
	else if(wpan(bu,'w')&&dqc[x-1][y]=='#'&&key!=0) key--,x--;
	else if(wpan(bu,'d')&&dqc[x][y+1]!='$'&&dqc[x][y+1]!='#') y++;
	else if(wpan(bu,'a')&&dqc[x][y-1]!='$'&&dqc[x][y-1]!='#') y--;
	else if(wpan(bu,'s')&&dqc[x+1][y]!='$'&&dqc[x+1][y]!='#') x++;
	else if(wpan(bu,'w')&&dqc[x-1][y]!='$'&&dqc[x-1][y]!='#') x--;
	if(dqc[x][y]=='&') tot=true;
	if(dqc[x][y]=='U'||dqc[x][y]=='D')
	{
		qing;
		win++;
		return;
	}
	else if(dqc[x][y]=='@')
	{
		qing;win+=2;
		return ;
	}
	else if(dqc[x][y]=='Y') key++,dqc[x][y]='*';
	else dqc[x][y]='*';
	printf("��ǰ������%d����9�㣩      ʣ��Կ�ף�%d\n               ",ceng,key);
	if(yo<=3) printf("��E������Ƥ��\n");
	else printf("֧��10Ԫ���ɸ���Ƥ��\n");
	for(int i=1;i<=10;++i)
	for(int j=1;j<=10;++j)
	pqc(i,j);
	if(ceng==8) printf("��ֻ���߹�һ��Ӵ\n");
	if(tot==true) dqc[x][y]='$';
}
void mota(int a)
{
	if(!que(a)) return ;qing;
	if(!queg())
	{
		cout<<"��Ϸ����ħ��"<<endl;Sleep(1000);
		cout<<"����Ҫ��ħ�����ҵ�����"<<endl;Sleep(1000);
		cout<<"�������ţ���������Ҫһ��Կ��"<<endl;Sleep(1000);
		cout<<"������治���ˣ���Q�����˳�"<<endl;Sleep(1000);
		cout<<"������ڼ���ʤ��"<<endl;Sleep(1000);
		cout<<"�ǲ��Ǻܼ򵥣���"<<endl;Sleep(1000);
		cout<<"��ʼ�ɣ�"<<endl;Sleep(1000);
	}
	else cout<<"��ʼ�ɣ�"<<endl;
	stop;qing;
	x=2,y=2;int i=1,q=0; 
	for(ceng=1;;i++)
	{
		printf("��ǰ������%d����7�㣩      ʣ��Կ�ף�%d\n               ",ceng,key);
		if(yo<=3) printf("��e������Ƥ��\n");
		else printf("֧��10Ԫ���ɸ���Ƥ��\n");
		for(int j=1;j<=10;++j)
		for(int k=1;k<=10;++k)
		{
			dqc[j][k]=cb[ceng][j][k];
			if(dqc[j][k]=='*') x=j,y=k;
		}
		for(int j=1;j<=10;++j)
		for(int k=1;k<=10;++k)
		pqc(j,k);
		while(1)
		{
			char qweqwe;
			qweqwe=getch();
			if(qweqwe=='q')
			{
				win=100;
				break;
			}
			qing;
			zouz(qweqwe);
			if(win>=1) break;
		}
		if(win==100) break;
		if(dqc[x][y]=='D'&&q==0&&ceng==3) ceng--,q++;
		if(dqc[x][y]=='U') ceng++,i=ceng;
		if(win==2) break;
		win=0;
	}
	if(win==100) cout<<"�����ˡ���"<<endl;
	else cout<<"��Ӯ�ˣ�����"<<endl;
	printf("�÷֣�%d\n",min(100,max(0,key*10+40-yo*10)));stop;
	return ;
}
void suan(int l,int n)
{
	int r=0;srand((int)time(0));
	char f[100]={" +-*/"};
	for(int i=1;i<=n;++i)
	{
		int a=sui(100),b=sui(100),ans;
		if(a==0) a=sui(100);
		if(b==0) b=sui(100);
		if(l==5) a=a*b;
		printf("��%d�⣺%d%c%d=",i,a,f[l],b);
		cin>>ans;bool fl=false;
		if(l==1&&a+b==ans) fl=true;
		if(l==2&&a-b==ans) fl=true;
		if(l==2&&a*b==ans) fl=true;
		if(fl==true) r++,cout<<"��ȷ"<<endl;
		if(fl==false) cout<<"����"<<endl; 
	}
	qing;
	cout<<"     ���Խ��"<<endl;
	printf("  ��������%d\n",n); 
	printf("  ��ȷ������%d\n",r); 
	printf("  ����������%d\n",n-r); 
	printf("  ��ȷ�ʣ�%.2lf%\n",100.0*r/n); 
	printf("    �������\n");stop;
}
void js(int a)
{
	if(!que(a)) return ;qing;
	char cc[11][101]={{},{"�ӷ�"},{"����"},{"�˷�"},{"����"},{"��������������"}};
	cout<<"���ԡ�������"<<endl;
	cout<<"����˼�壬���Ǽ�����Ŀ��"<<endl;
	printf("����������Ҫ���Ե���Ŀ\n");
	for(int i=1;i<=2;++i)
	printf("%7d.%s\n",i,cc[i]);
	while(a<'1'||a>'3') a=getch();qing;a-='0';
	printf("\n����ѡ��%s\n",cc[a]);
	printf("��������Ҫ���Ե���Ŀ����(���ó���100):");
	int b;
	cin>>b;
	while(b>100)
	{
		qing;
		printf("������Ŀ�������ó���100������\n"); 
		printf("����ѡ��%s\n",cc[a]);
		printf("��������Ҫ���Ե���Ŀ����(���ó���100):");
		cin>>b;
	}
//	jiazai();
	suan(a,b);
}
int fj(int num,bool pr)
{
	if(pr) printf("%d=",num);
	int cnt=0,su=2,sg=0;
	if(pr) if(num==1) printf("%d",num);
	else while(num!=1)
	{
		if(num%su==0)
		{
			if(pr) if(cnt!=0) printf("*");
			else cnt++;
			if(pr) printf("%d",su);
			num/=su,sg++;
		}
		else su++;
	}
	if(pr) printf("\n");
	return sg+1;
}
int zysfj(int a)
{
	int n;qing; 
	printf("��������Ҫ�������ֽ����������0��Ϊ�˳�����"); 
	scanf("%d",&n);
	if(n==0) return 0;
	fj(n,1);
	stop;
    zysfj(a);
}
int pss(int a)
{
	int n;qing; 
	printf("��������Ҫ�ж��Ƿ�����������������0��Ϊ�˳�����"); 
	scanf("%d",&n);
	if(n==0) return 0;
	if(fj(n,0)==2) printf("Yes!\n");
	else printf("No!\n");
	stop;
	pss(a);
}
void dk(int a)
{
	if(a==2)
	{
		qing;
		cout<<"��Ҫ����oj���Ǿ�oj��"<<endl;
		cout<<"1.��oj    2.��oj   0.������"<<endl;
		char tot=getch();
		while(tot!='1'&&tot!='2'&&tot!='0') tot=getch();tot-='0';
		if(tot==0) a+=10000000;
		if(tot==1) a++;
	}
	if(a==1) system("start http://www.baidu.com");
	if(a==2) system("start http://www.gdfzoj.com");
	if(a==3) system("start http://u.gdfzoj.com");
	if(a==4) system("start http://www.luogu.com.cn");
	if(a==5) system("start http://mail.qq.com");
	if(a==6) system("start https://hao.360.com");
	if(a==7) system("start https://bp.pep.com.cn/jc/index.html");
	if(a==8) system("start http://45.77.12.16");
}
void gcd()
{
	long long int a,b;qing;
	cout<<"��������Ҫ���������������������������0��Ϊ�˳�����";
	cin>>a>>b;
	if(a==0&&b==0) return ;
	printf("(%d,%d)=%d\n",a,b,__gcd(a,b));
	stop;gcd();
}
void lcm()
{
	long long int a,b;qing;
	cout<<"��������Ҫ����С������������������������0��Ϊ�˳�����";
	cin>>a>>b;
	if(a==0&&b==0) return ;
	printf("[%d,%d]=%d\n",a,b,a/__gcd(a,b)*b);
	stop;lcm();
}
void hax()
{
	int a;qing;
	cout<<"��������Ҫ�󻭰��ĵĳߴ磺";
	cin>>a;qing;
	for(int i=1;i<=a;++i)
	{
		for(int j=1;j<=a*2;++j)
		if(j==a-i+1||a*2+1-j==a-i+1) cout<<"*";else cout<<" ";
		for(int j=1;j<=a*2;++j)
		if(j==a-i+1||a*2+1-j==a-i+1) cout<<"*";else cout<<" ";
		cout<<endl;
	}
	for(int i=1;i<=a*2-1;++i)
	{
		for(int j=1;j<=2*a;++j)
		if(i+1==j) cout<<"*";else cout<<" ";
		for(int j=1;j<=2*a;++j)
		if(i+1==2*a-j+1) cout<<"*";else cout<<" ";
		cout<<endl;
	}
	stop;system("color 0");
	return; 
}
int ye=1,ans,ansb;
char ss[100001],f;
void jsj(int a)
{
	qing;
	cout<<"��������Ҫ�������ʽ(����0�˳�)��"<<endl<<"           ";
	if(a>1) cout<<ansb;
	if(a>=1) cout<<ss<<'='<<ans;
	cin>>ss;ansb=ans;
	int l=strlen(ss),n=0;
	if(l==1&&ss[0]=='0') return;
	for(int j=0;j<=l;++j)
	{
		char i=ss[j];
		if(i<='9'&&i>='0') n=n*10+i-'0';
		if(i=='+'||i=='-'||i=='*'||i=='/'||i==0)
		{
			if(f=='+') ans+=n;
			else if(f=='-') ans-=n;
			else if(f=='*') ans*=n;
			else if(f=='/') ans/=n;
			else if(f=='%') ans%=n;
			else ans+=n;
			f=i;n=0;
		}
	}
	jsj(a+1);
	return;
}
void slpx()
{
	qing;
	int n,aa[100001];
	cout<<"           ��������"<<endl;
	cout<<"��������������еĳ��ȣ�����0��Ϊ�˳�����";cin>>n;
	if(n==0) return;
	cout<<endl<<"��������������У�";for(int i=1;i<=n;++i) scanf("%d",aa+i);
	sort(aa+1,aa+n+1);
	cout<<"����֮������У�";for(int i=1;i<=n;++i) printf("%d ",aa[i]);printf("\n");
	stop;
	slpx();
	return;
}
struct tim1{
	int y,m,d;
	void read(int tot,tim1 a)
	{
		if(tot==1) cout<<"��������ʼʱ�䣺";
		else if(tot==2) cout<<"���������ʱ�䣺";
		else if(tot==3) cout<<"��������˶�ã�";
		scanf("%d %d %d",&y,&m,&d);
		if(y>=24||m>=60||d>=60)
		{
			qing;cout<<"���벻�Ϸ�������"<<endl;Sleep(4000);qing;
			if(tot!=1)
			{
				printf("��������ʼʱ�䣺%d %d %d\n",a.y,a.m,a.d);
				if(tot==2) read(2,a);
				if(tot==3) read(3,a);
			}
			else read(1,a);
		}
	}
	void print()
	{
		printf("%d hour %d minute %d second\n",y,m,d);
		stop;qing;
	}
	tim1 operator = (const tim1 & b)
	{
		y=b.y,m=b.m,d=b.d;
	}
};
bool bi(tim1 a,tim1 b)
{
	if(a.y>b.y) return true;
	if(b.y>a.y) return false;
	if(a.m>b.m) return true;
	if(b.m>a.m) return false;
	if(a.d>b.d) return true;
	if(b.d>a.d) return false;
	return true;
}
void swapp(tim1 & a,tim1 & b)
{
	tim1 tot;
	tot.d=a.d,tot.m=a.m,tot.y=a.y;
	a.d=b.d,a.m=b.m,a.y=b.y;
	b.d=tot.d,b.m=tot.m,b.y=tot.y;
	return;
}
tim1 maxn(tim1 a,tim1 b)
{
	if(bi(a,b)) return a;
	return b;
}
tim1 minn(tim1 a,tim1 b)
{
	if(bi(a,b)) return b;
	return a;
}
tim1 cha(tim1 a,tim1 b)
{
	tim1 ans;
	if(a.d<b.d) a.d+=60,a.m--;
	if(a.m<b.m) a.m+=60,a.y--;
	if(a.d<b.d) a.d+=60,a.m--;
	if(a.m<b.m) a.m+=60,a.y--;
	ans.d=a.d-b.d,ans.m=a.m-b.m,ans.y=a.y-b.y;
	return ans;
}
tim1 he(tim1 a,tim1 b)
{
	tim1 ans;
	ans.d=a.d+b.d;
	ans.m=a.m+b.m;
	ans.y=a.y+b.y;
	if(ans.d>=60) ans.d-=60,ans.m++;
	if(ans.m>=60) ans.m-=60,ans.y++;
	return ans;
}
void sjc()
{
	tim1 a,b,a1,b1,ans;
	jiazai();
	a.read(1,a),b.read(2,a);
	if(!bi(a,b)) swapp(a,b);
	ans=cha(a,b);
	cout<<"���Ĵ��ǣ�";ans.print();
	return ;
}
void sjh()
{
	tim1 a,b,a1,b1,ans;
	jiazai();
	a.read(1,a),b.read(3,a);
	if(!bi(a,b)) swapp(a,b);
	ans=he(a,b);
	cout<<"���Ĵ��ǣ�";ans.print();
	return ;
}
char wen[101][201]={"","����ʲô������","����ʲô�ã�                          ","��ôʹ�����أ�            ","ʹ������Ҫʲô�����",
					"","","","","","","","",""},
     da[101][201]= {"","���ܷ���ϵͳ��","����෽������㣬���磺���֡���ѧ�ȡ�","��������ʾ���ȥ����������","����Ҫ��һ̨���Լ��ɡ�",
					"","","","","","","","",""};
int ti=7;
void QA(int ye)
{
	qing;cout<<endl<<endl<<endl;kuan=22;
	tou();
	shuk();cout<<"   |                                    ��������Q&A                       ";shus(kuan);
	shuk();cout<<"   |                                                                      ";shus(kuan);
	shuk();
	for(int i=1+ye*4-4;i<=ye*4;++i)
	{
		printf("   |      %2d.  Q: ",i);cout<<wen[i];shus(kuan+56-strlen(wen[i]));
		cout<<"   |           A: ";cout<<da[i];shus(kuan+56-strlen(da[i]));shuk();
	}
	shuk();shuk();cout<<"   |         0.�˳�                                                       ";shus(kuan);
	shuk();printf("   |                      ��%dҳ����1ҳ��             ����A��D��ҳ��       ",ye);shus(kuan);
	shuk();tou();
	int a;
	while(!pshu(a,0)) a=getch();
	if(a=='d'&&ye!=1) QA(ye+1);
	else if(a=='a'&&ye!=1) QA(ye-1);
	else if(a=='0') return;
	else QA(ye);
}
void zrj1()
{
	qing;
	cout<<"����һ���������Թ���Ѱ�������"<<endl;
	cout<<"����Ҫ���Թ����ҵ����ز�����������"<<endl;
	cout<<"û�в������ƣ�����ÿһ�����߹�֮�󶼻�ص�"<<endl;
	cout<<"���ͣ�Ŭ���ҵ����ذɣ�����"<<endl; 
	cout<<"Ч��ͼ��"<<endl;
	cout<<" -------------------------------------------- "<<endl;
	cout<<"|             ����                ����       |"<<endl;
	cout<<"|             ����                ����       |"<<endl;
	cout<<"|             ����                ����       |"<<endl;
	cout<<"|   ��������������������������������������   |"<<endl;
	cout<<"|             ����                ����       |"<<endl;
	cout<<"|             ����                ����       |"<<endl;
	cout<<"|             ����                ����       |"<<endl;
	cout<<"|                 ��              ����       |"<<endl;
	cout<<"|             ����                ����       |"<<endl;
	cout<<"|             ����                ����       |"<<endl;
	cout<<"|             ����                ����       |"<<endl;
	cout<<"|   ��������������������������������������   |"<<endl;
	cout<<"|             ����                ����       |"<<endl;
	cout<<"|             ����                ����       |"<<endl;
	cout<<"|             ����                ����       |"<<endl;
	cout<<"|             ����                           |"<<endl;
	cout<<"|             ����                ����       |"<<endl;
	cout<<"|             ����                ����       |"<<endl;
	cout<<"|             ����                ����       |"<<endl;
	cout<<"|   ��������������������������������������   |"<<endl;
	cout<<"|             ����                ����       |"<<endl;
	cout<<" -------------------------------------------- "<<endl;
	cout<<"��1��ʾ���룬��������ʾ�˳�"<<endl;
	int a=getch();
	if(a=='1') system("start game1.0 .exe");
}
void zhu()
{
	int a=0;
	jm1(ye);
	while(!pshu(a,7)) a=getch();
	if(a=='d'&&ye<zye) ye++;
	else if(a=='a'&&ye!=1) ye--;
	else if(a<='9'&&a>='0')
	{
		if(a=='0') main();
		a-='0';a+=(ye-1)*7;
		if(a==0) main();
		else if(a==1) geng(1);
		else if(a==2) bq();
		else if(a==3) bqr();
		else if(a==4) QA(1);
		else if(a==5) dk(4);
		else if(a==6) dk(1);
		else if(a==7) dk(2);
		else if(a==8) nyc();
		else if(a==9) nyh();
		else if(a==10) gcd();
		else if(a==11) lcm();
		else if(a==12) pss(a);
		else if(a==13) zysfj(a);
		else if(a==14) jsj(0);
		else if(a==15) js(a);
		else if(a==16) caishu(a);
		else if(a==17) xj(a);
		else if(a==18) xj2(a);
		else if(a==19) xj3(a);
		else if(a==20) txz(a);
		else if(a==21) mota(a);
		else if(a==22) sj();
		else if(a==23) dk(7);
		else if(a==24) dk(8);
		else if(a==25) hax();
		else if(a==26) slpx();
		else if(a==27) sjc();
		else if(a==28) sjh();
		else if(a==29) zrj1();
		else if(a==1e9) ;
		else hhh();
		if(flag==false) return;
	}
//	jia(1);
	zhu();
}
int main()
{
//	jia(0);
	while(login());
	for(int i=1;i<=101;++i)
	for(int j=0;j<strlen(zjms[i]);++j)
	jms[i][j]=zjms[i][j];
	zhu();
	return 0;
}
