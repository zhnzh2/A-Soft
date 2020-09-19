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
int zye=4,yo; 
char yong[10001],mima[10001],ly,lm,jms[101][101];
char zjms[101][101]={{},{"system    View update log"},{"system    View the copyright"},{"system    View the copyright owners"}
					   ,{" test     calculation"},{"useful    Open the Luogu"}
					   ,{"useful    Open the Baidu"},{"useful    Open the Guangfu OJ"}
					   ,{"useful    Calculate the difference between the two dates"}
					   ,{"useful    Calculate a date after a certain time,when is it now"}
					   ,{" math     Finding the GCD"},{" math     Finding the LCM"},{" math     Judgement prime"}
					   ,{" math     Prime factor decomposition"},{" math     Calculator"},{"useful    Calculation time complexity"}
					   ,{" game     Guess the number"},{" game     xiaojiｉ"},{" game     xiaojiｊ"},{" game     xiaojiｋ"}
					   ,{" game     Sokoban"},{" game     Magic tower"},{"useful    Open the textbook of PEP"}
					   ,{"useful    Open the Konnyaku OJ"},{"useful    Painting love"},{"useful    Sequence sorting"}
					   ,{"useful    Calculate the difference between the two times"}
					   ,{"useful    Calculate a time after a certain time,when is it now"}
					   ,{"system    FAQ"},{""},{""},{""}};
char wei[101]={" not open   This part is not open now"};
void jm1(int ye)
{
	int kuan=25;
	qing;
	cout<<endl<<endl<<endl;
	tou();
	shuk();cout<<"   |    Dear users,welcome to intelligent service system 1.1.1.What service do you need?";shus(kuan-17);
	shuk();cout<<"   |        Function type      Function name                           ";shus(kuan);
	for(int i=-6+ye*7;i<=ye*7;++i)
	{
		int tot=0;
		shuk();
		printf("   |       %d.",i+7-ye*7);
		if(strlen(jms[i])==0) cout<<wei,shus(46-tot);
		else cout<<"  "<<jms[i],shus(81-strlen(jms[i])-tot);
	}
	shuk();cout<<"   |       0.  Log out                                                 ";shus(kuan);
	shuk();printf("   |       Creator:PJL     Page %d (%d page in total)   (Press A or D to other page)",ye,zye);shus(kuan-11);
	shuk();tou();
}
void geng(int ye)
{
	int kuan=9;
	qing;
	cout<<endl<<endl<<endl;
	tou();
	shuk();cout<<"   |                          update log                                               ";shus(kuan);
	shuk();cout<<"   |                                                                                   ";shus(kuan);
	if(ye==1)
	{
		shuk();cout<<"   |   edition 1.0   Copy all the Chinese version 5.6 here                 2020.07.09  ";shus(kuan);
		shuk();cout<<"   |   edition 1.0.1 Update to be consistent with Chinese version 6.0      2020.07.09  ";shus(kuan);
		shuk();cout<<"   |   edition 1.1   New function of opening Luogu                         2020.07.10  ";shus(kuan);
		shuk();cout<<"   |   edition 1.1.1 New function of opening Konnyaku OJ                   2020.07.10  ";shus(kuan);
		shuk();cout<<"   |   edition 1.2   Add FAQ function                    (current version) 2020.07.11  ";shus(kuan);
		shuk();cout<<"   |                                                                                   ";shus(kuan);
		shuk();cout<<"   |                                                                                   ";shus(kuan);
	}
	shuk();cout<<"   |       0.exit                                                                      ";shus(kuan);
	shuk();printf("   |                      Page %d (1 page in total)    (Press A or D to other page)    ",ye);shus(kuan+1);
	shuk();tou();
	int a;
	while(!pshu(a,0)) a=getch();
	if(a=='d'&&ye!=1) geng(ye+1);
	else if(a=='a'&&ye!=1) geng(ye-1);
	else if(a=='0') return;
	else geng(ye);
}
void bq();
char bqrc[10][10001][10]={
{},
{"user    :","XZY","","","","","","","",""},
{"Observer:","","","","","","","","",""},
{"visitor :","DZW","ZZR","LDD","LCH","","","","",""},
{"speaker :","CYH","ZCH","","","","","","",""},
{"Creator :","PJL","","","","","","","",""},
};
void bqr()
{
	int kuan=24,a;
	qing;
	cout<<endl<<endl<<endl;
	if(zye==4)
	{
		tou();
		shuk();cout<<"   |                     The copyright owners                           ";shus(kuan);
		shuk();cout<<"   |   user    :XZY                                                     ";shus(kuan);
		shuk();cout<<"   |   Observer:                                                        ";shus(kuan);
		shuk();cout<<"   |   visitor :DZW ZZR LDD LCH                                         ";shus(kuan);
		shuk();cout<<"   |   speaker :CYH ZCH                                                 ";shus(kuan);
		shuk();cout<<"   |   Creator :PJL                                                     ";shus(kuan);
		shuk();cout<<"   |                                                                    ";shus(kuan);
		shuk();cout<<"   |   Please do not give this software to anyone!                      ";shus(kuan);
		shuk();cout<<"   |                                                                    ";shus(kuan);
		shuk();cout<<"   |                                                                    ";shus(kuan);
		shuk();cout<<"   |   Press 1 to view the copyright and press 0 to exit.               ";shus(kuan);
		shuk();tou();
	}
	else printf("You don't have permissionㄐㄐㄐ\n\nPress 1 to view the copyright and press 0 to exit.\n");
	while(a!='0'&&a!='1') a=getch();
	if(a=='1') bq();
	else return;
}
void bq()
{
	int kuan=21,a;
	qing;
	cout<<endl<<endl<<endl;
	tou();
	shuk();cout<<"   |                       the copyright                                   ";shus(kuan);
	shuk();cout<<"   |   This program is created by the creator PJL. Please do not infringe. ";shus(kuan);
	shuk();cout<<"   |   However, it doesn't mean that the software can not be used.         ";shus(kuan);
	shuk();cout<<"   |   Other personnel can use it according to the following regulations.  ";shus(kuan);
	shuk();cout<<"   |     Users can find PJL to purchase software and grant certain rights. ";shus(kuan);
	shuk();cout<<"   |       User    : only software is allowed;                             ";shus(kuan);
	shuk();cout<<"   |       Observer: can give feedback to the creator;                     ";shus(kuan);
	shuk();cout<<"   |       Visitor : can watch part of code;                               ";shus(kuan);
	shuk();cout<<"   |       Speaker : can modify part of code and view the copyright owner; ";shus(kuan);
	shuk();cout<<"   |       Creator : All rights.                                           ";shus(kuan);
	shuk();cout<<"   |   Press 1 to view the copyright owner and 0 to exit.                  ";shus(kuan);
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
		cout<<"This part is not open nowㄐㄐㄐ";
		cout<<"("<<6-i<<")"<<endl; 
		Sleep(950);
	}
}
bool flag=true;
void jie()
{
	qing;
	cout<<"Do you really want to go ?"<<endl;
	cout<<"1.Yes   others.I push this carelessly"<<endl;
	int a=getch();
	if(a==1) flag=false;
}
bool que(int a)
{
	qing;
	cout<<"Do you really want to play the ";
	cout<<jms[a];
	cout<<"ˋˋˋ"<<endl;
	cout<<"1.Yes   others.I push this carelessly"<<endl;
	char x;
	x=getch();qing;
	if(x!='1') return false;
	return true;
}
bool queg()
{ 
	cout<<"Do you know the rulesˋ"<<endl;
	cout<<"1.Yes,I know   others.No,I don't konw"<<endl;
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
		printf("System loading");
		cout<<ji[i]<<endl;
		Sleep(100);
	}
	qing;
	cout<<"Loading succeededㄐㄐㄐ"<<endl;
	Sleep(3000); 
}
void jia(int a)
{
	int n=5;
	while(n--)
	for(int i=1;i<=3;++i)
	{
		qing;
		printf("Please wait for ");
		printf("loading ");
		if(a!=0) printf("again");
		for(int j=1;j<=i;++j) cout<<".";cout<<endl;
		Sleep(333);
	}
	qing;
	cout<<"Loading succeededㄐㄐㄐ"<<endl;
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
	cout<<"Please enter the start date:";a.read();
	cout<<"Please enter the end   date:";b.read();
	if(!bi(a,b)) swapp(a,b);
	ans=cha(a,b);
	cout<<"Your answer:";ans.print();
	return ;
}
void nyh()
{
	tim a,b,a1,b1,ans;
	jiazai();
	cout<<"Please enter the start date:";a.read();
	cout<<"Please enter how long      :";b.read();
	if(!bi(a,b)) swapp(a,b);
	ans=he(a,b);
	cout<<"Your answer:";ans.print();
	return ;
}
void shibai(int gme)
{
	cout<<"Game failed, do you want to start againˋˋ"<<endl;
	cout<<"1.Start againㄐㄐㄐ others.I'd not like to,thanks'"<<endl; 
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
			printf("If you guess right %d time, you can pass the customsㄐ\n",3-caishu2);
			stop;
			caishu(a);
		}
		else cout<<"Congratulations on your clearanceㄐ"<<endl;
		stop;
	}
	if(a==0)
	{
		cout<<"You can also get a reward"<<endl;Sleep(500);
		cout<<"That is﹞﹞﹞"<<endl;Sleep(5000);
		cout<<"Try againㄐ"<<endl;stop;
	}
}
void caishu(int qwe)
{
	qing;
	if(caishu2==0)
	{
		if(!que(qwe)) return ; 
		srand((int)time(0));
		cout<<"Guess the number"<<endl;Sleep(2000);
		cout<<"Guess a number from 1 to 1000. For each number, I will tell you whether it is big or small﹝"<<endl;Sleep(2000);
		cout<<"There are 12 chances to guess in each game."<<endl;Sleep(2000);
		cout<<"If you answer three games correctly, you can pass the customs﹝"<<endl;Sleep(2000);
	}
	cout<<"Let's begin'ㄐ"<<endl;Sleep(2000);
	int a,b;
	a=rand()%1000+1;
	for(int i=1;;++i)
	{
		cin>>b;
		if(a==b)
		{
			cout<<"bingo!"<<endl;
			caishu1(1);
			break;
		}
		if(a!=b)
		{
			if(b<a) cout<<"It's small"<<endl;
			if(b>a) cout<<"It's large"<<endl;
			if(i==12)
			{
				cout<<"You failed"<<endl<<"But﹞﹞﹞﹞﹞﹞"<<endl;
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
char bu[1000],dt[101][101],xjc[101][101]={"","Obstacle:","End     :","You     :","Way     :","",""},
    xjpfk[101][101][10]={
	{},
	{"","↓","♀","⊙","←","♂","↑","","",""},
	{"","∴","↖","∵","→","","","","",""},
	{"","Ｋ","Ｌ","Ｍ","Ｎ","Ｏ","Ｐ","Ｑ","Ｒ","Ｓ"},
	{"","←","♂","↑","↓","♀","⊙","","",""}
	};
int xjt[101]={1,1,1,1,1,1,1,1,1,1},xjtm[101]={0,6,4,9,6};
int kuan=22,chang=25,x=2,y=2,win,dian=100;
int xjpf(int a,int tot)
{
	qing;
	int n;
	if(a==1) n=3;
	else n=4;
	cout<<"                     Change skin"<<endl;
	cout<<" ------------------------------------------------"<<endl;
	cout<<"|                                                |"<<endl;
	cout<<"|   Press W and S to decide which one to change  |"<<endl;
	cout<<"|                                                |"<<endl;
	cout<<"|                                                |"<<endl;
	cout<<"|                                                |"<<endl;
	cout<<"|                                                |"<<endl;
	cout<<"|   Press A and D to decide which one to use     |"<<endl;
	cout<<"|                                                |"<<endl;
	cout<<"|      Press newline to exit after changing      |"<<endl;
	cout<<"|                                                |"<<endl;
	cout<<"|                                                |"<<endl;
	if(n==3) cout<<"|                                                |"<<endl;
	for(int i=1;i<=n;++i)
	{
		cout<<"|           ";
		if(tot==i) printf(" -->   ");
		else printf("       ");
		cout<<xjc[i]<<xjpfk[i][xjt[i]];
		printf("  (%d/%d) ",xjt[i],xjtm[i]);shus(12);
//		↘↙
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
		if(tot==1) printf("↓"),re++;
		else if(tot==2) printf("♀"),re++;
		else if(tot==3) printf("⊙"),re++;
		else if(tot==4) printf("��"),re++;
		else if(tot==5) printf("♂"),re++;
		else if(tot==6) printf("↑"),re++;
	}
	else if(dt[x][y]=='@')
	{
		int tot=xjt[2];
		if(tot==1) printf("∴");
		else if(tot==2) printf("↖");
		else if(tot==3) printf("∵");
		else if(tot==4) printf("→");
	}
	else if(dt[x][y]=='*')
	{
		int tot=xjt[3];
		if(tot==1) printf("Ｋ");
		else if(tot==2) printf("Ｌ");
		else if(tot==3) printf("Ｍ");
		else if(tot==4) printf("Ｎ");
		else if(tot==5) printf("Ｏ");
		else if(tot==6) printf("Ｐ");
		else if(tot==7) printf("Ｑ");
		else if(tot==8) printf("Ｒ");
		else if(tot==9) printf("Ｓ");
	}
	else if(dt[x][y]=='$')
	{
		int tot=xjt[4];
		if(tot==4) printf("↓");
		else if(tot==5) printf("♀");
		else if(tot==6) printf("⊙");
		else if(tot==1) printf("��");
		else if(tot==2) printf("♂");
		else if(tot==3) printf("↑");
	}
	else printf("  ");
	if(y==chang) printf("\n");
	return re;
}
void zoux(char bu)
{
	if(bu=='q'&&yo<=3) xjpf(1,1),dian++;
	cout<<"Remaining electricity"<<dian<<"      ";
	if(yo<=3) printf("Press Q to change skin\n");
	else printf("Pay 10 yuan to change skin\n");
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
		cout<<"You win!"<<endl;
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
	if(cr==da) cout<<"Correct"<<endl;
	else
	{
		cout<<"Wrong, you don't have the complete three laws. You have to go back to the factory now!"<<endl; 
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
		cout<<"Welcome to the human world, your number is 89757, your master named you \"xiaoji\""<<endl;
		Sleep(yan);
		cout<<"Well, as a robot, let's review the three laws of robotㄐ"<<endl;Sleep(yan);
		cout<<"What is the first law of robotsˋ"<<endl;Sleep(yan);
		cout<<"A﹜Robots must not harm human beings, but they can do harm to human beings through inaction"<<endl;Sleep(yan);
		cout<<"B﹜Robots must not harm human beings, and they can't do harm to human beings through inaction"<<endl;Sleep(yan);
		cout<<"C﹜Robots are able to harm human beings, but they can't do harm to human beings through inaction"<<endl;Sleep(yan);
		cout<<"D﹜Robots are able to harm human beings, but they can do harm to human beings through inaction"<<endl;Sleep(yan);
		ce('B');stop;qing;
		cout<<"Welcome to the human world, your number is 89757, your master named you \"xiaoji\""<<endl; 
		cout<<"Well, as a robot, let's review the three laws of robotㄐ"<<endl;
		cout<<"What is the second law of robotsˋ"<<endl;Sleep(yan);
		cout<<"A﹜Robots can selectively follow human orders"<<endl;Sleep(yan);
		cout<<"B﹜Robots can selectively violate human orders"<<endl;Sleep(yan);
		cout<<"C﹜Robots must follow human orders"<<endl;Sleep(yan);
		cout<<"D﹜Robots must violate human orders"<<endl;Sleep(yan);
		ce('C');stop,qing;
		cout<<"Welcome to the human world, your number is 89757, your master named you \"xiaoji\""<<endl;
		cout<<"Well, as a robot, let's review the three laws of robotㄐ"<<endl;
		cout<<"What is the third law of robotsˋ"<<endl;Sleep(yan);
		cout<<"A﹜Robots can hurt themselves selectively"<<endl;Sleep(yan);
		cout<<"B﹜Robots can protect themselves selectively"<<endl;Sleep(yan);
		cout<<"C﹜Robots must hurt themselves "<<endl;Sleep(yan);
		cout<<"D﹜Robots must protect themselves "<<endl;Sleep(yan);
		ce('D');stop,qing;
		cout<<"But on the way home, you and your master are separated"<<endl;Sleep(yan);
		cout<<"You have to get home before the battery runs out"<<endl;Sleep(yan);
		cout<<"Or you will be forced to shut down on the road"<<endl;Sleep(yan);
		cout<<"And then you'll be picked up and sold by the garbage collectors"<<endl;Sleep(yan);
		stop,qing;
		cout<<"You should be familiar with the terrain around here"<<endl;Sleep(yan);
		cout<<"You should have the map here in your memory"<<endl;Sleep(yan);
		cout<<"Okay, you have 70 grids of electricity left"<<endl;Sleep(yan);
		cout<<"Each step requires a grid of electricity"<<endl;Sleep(yan);
		cout<<"Let's go"<<endl;Sleep(yan);
		stop;qing;
	}
	else cout<<"Let's go"<<endl;
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
			cout<<"Diddle Du, your electricity is exhausted, and you are in a dark﹞﹞﹞﹞﹞﹞"<<endl;
			stop;
//			shibai(2);
			return ;
		}
	}
}
void zouy(char bu)
{
	if(bu=='q') xjpf(2,1),dian++;
	cout<<"Remaining electricity"<<dian<<"   Press the Q key to change the skin"<<endl;
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
			cout<<"I got the food. Now I'm going home"<<endl;
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
		cout<<"Welcome to the human world, your number is 89757, your master named you \"xiaoji\""<<endl;Sleep(yan);
		cout<<"Since you were bought back by the owner"<<endl;Sleep(yan);
		cout<<"You do all kinds of housework"<<endl;Sleep(yan);
		cout<<"Today, you are going shopping"<<endl;Sleep(yan);
		cout<<"However, when you go out, you will find that﹞﹞﹞﹞﹞﹞"<<endl;Sleep(yan*5);
		cout<<"Master forgot to charge youㄐㄐㄐ"<<endl;Sleep(yan);stop;qing; 
		cout<<"But you can still go to the market"<<endl;Sleep(yan);
		cout<<"It's just that you need to save some electricity"<<endl;Sleep(yan);
		cout<<"So you decide not to walk the path you've taken"<<endl;Sleep(yan);
		cout<<"According to your special settings, this will consume only one grid of power per step"<<endl;Sleep(yan);
		cout<<"You still have 150 grids"<<endl;Sleep(yan);
		cout<<"So ﹞﹞﹞﹞﹞﹞"<<endl;Sleep(yan*5);
		cout<<"Let's goㄐㄐ"<<endl;Sleep(yan);stop;qing;
	}
	else cout<<"Let's goㄐㄐ"<<endl;
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
			cout<<"Diddle Du, your electricity is exhausted, and you are in a dark﹞﹞﹞﹞﹞﹞"<<endl;
			stop;
//			shibai(2);
			return ;
		}
	}
	qing;
	cout<<"Success in buying vegetables!!"<<endl;stop;
}
void zou3(char bu)
{
	if(bu=='q') xjpf(1,1),dian++;
	cout<<"Remaining electricity"<<dian<<"   Press the Q key to change the skin"<<endl;
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
		cout<<"Welcome to the human world, your number is 89757, your master named you \"xiaoji\""<<endl;Sleep(yan);
		cout<<"Since you were bought back by the owner"<<endl;Sleep(yan);
		cout<<"You do all kinds of housework"<<endl;Sleep(yan);
		cout<<"It's been several years now!! You're getting a little bit old"<<endl;Sleep(yan*5);
		cout<<"You need to fix it, but﹞﹞﹞﹞﹞﹞"<<endl;Sleep(yan);
		cout<<"The master is not at homeㄐㄐㄐ"<<endl;Sleep(yan);stop;qing; 
		cout<<"But you can still go to the repair shop"<<endl;Sleep(yan);
		cout<<"It's just that you need to save some electricity"<<endl;Sleep(yan);
		cout<<"You need to make some adjustments because of the wear"<<endl;Sleep(yan);
		cout<<"It takes 4 grids to go down, 3 grids to goright, 2 grids up, 1 grid to the left, and 5 grids to hit the wall"<<endl;
		Sleep(yan);cout<<"You still have 200 grids now"<<endl;Sleep(yan);
		cout<<"So﹞﹞﹞﹞﹞﹞"<<endl;Sleep(yan*5);
		cout<<"Let's goㄐㄐ"<<endl;Sleep(yan);stop;qing;
	}
	else cout<<"Let's goㄐ"<<endl;
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
			cout<<"Diddle Du, your electricity is exhausted, and you are in a dark﹞﹞﹞﹞﹞﹞"<<endl;
			stop;
//			shibai(2);
			return ;
		}
	}
	qing;
	cout<<"The repair was successfulㄐㄐ"<<endl;stop;
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
	else if(ditu[x][y]=='#') printf("↓"),re++;
	else if(ditu[x][y]=='@') printf("∴");
	else if(ditu[x][y]=='*') printf("Ｋ");
	else if(ditu[x][y]=='&') printf("∫");
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
//	cout<<"Remaining electricity:"<<dian<<endl;
	cout<<"Steps taken "<<100000-dian<<endl; 
	cout<<"Current coordinates:"<<"  ("<<heng<<","<<shu<<") "<<endl;
	for(int i=1;i<=kuan;++i)
	for(int j=1;j<=chang;++j)
	fang+=print(i,j);
	cout<<"Remaining boxes:"<<fang<<endl;
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
		cout<<"Sokoban"<<endl;Sleep(1000);
		cout<<"First push all the boxes to the star"<<endl;Sleep(1000);
		cout<<"And then walk to the stars"<<endl;Sleep(1000);
		cout<<"Is it easyˋ"<<endl;Sleep(1000);
	}
	else cout<<"Let's goㄐ"<<endl;
	cout<<"Please choose the difficulty"<<endl;
	cout<<"1.introduction"<<endl;
	cout<<"2.simple"<<endl;
	cout<<"3.middle"<<endl;
	cout<<"4.difficult"<<endl;
	cout<<"Note:∫means surrender. If you don't want to play or can't play,go in."<<endl;
	while(qwe<='0'||qwe>='5') qwe=getch();qwe-='0';
	kuan=ck[qwe][0],chang=ck[qwe][1];
	for(int i=1;i<=kuan;++i)
	for(int j=1;j<=chang;++j)
	ditu[i][j]=zditu[qwe][i][j];qing; 
//	cout<<"Remaining electricity:"<<dian<<endl;
	cout<<"Steps taken:  "<<100000-dian<<endl; 
	cout<<"Current coordinates:"<<"  ("<<heng<<","<<shu<<") "<<endl;
	for(int i=1;i<=kuan;++i)
	for(int j=1;j<=chang;++j)
	fang+=print(i,j);
	cout<<"Remaining boxes:"<<fang<<endl;
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
	if(win==1) cout<<"You win"<<endl;
	else cout<<"You surrendered"<<endl; 
	stop;
	return ; 
}
char O[1001][1001]={{}, {"O(n*n)     :"},{"O(n*﹟n)   :"},{"O(n*log(n)):"},
						{"O(n)       :"},{"O(﹟n)     :"},{"O(log(n))  :"}};
int sj()
{
	int a,b,c;
	qing;
	cout<<"Calculation time complexity"<<endl<<endl;
	cout<<"Please enter n in the question (enter 0 as exit):";
	cin>>a;
	long long int OO[1001]={0,(ll)a*a,(ll)a*sqrt(a),(ll)a*log2(a),(ll)a,(ll)sqrt(a),(ll)log2(a)};
	if(a==0) return 0; 
	cout<<"Please enter the result you want to output"<<endl;
	cout<<"1. Number of operations   2. Time (unit: ms)   3. Whether it will explode in one second"<<endl;
	b=getch();b-='0'; 
	for(int i=1;i<=6;++i)
	{
		cout<<O[i];
		if(b==1) cout<<OO[i]<<endl;
		if(b==2) cout<<(long double)OO[i]/140000.0<<endl;
		if(b==3)
		{
			bool tot=(long long)OO[i]/140000<=1000;
			if(tot) cout<<"It can't"<<endl;
			else cout<<"It can"<<endl;
		}
	}
	cout<<"Note: this result is for reference only."<<endl;
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
char mtc[101][101]={"","Obstacle:","Door    :","End     :","You     :","Key     :","up      :","down    :"},
    mtpfk[101][101][10]={
	{},
	{"","←","♂","↑","↓","♀","⊙","","",""},
	{"","↓","♀","⊙","←","♂","↑","","",""},
	{"","Ex","Et","Ot","","","","","",""},
	{"","Ｋ","Ｌ","Ｍ","Ｎ","Ｏ","Ｐ","Ｑ","Ｒ","Ｓ"},
	{"","Ye","Bu","Re","Gr","Pu","Bl","","",""},
	{"","→","↖","∥","行","","","","",""},
	{"","��","��","∣","衣","","","","",""},
	{"","","","","","","","","",""},
	};
int mtt[101]={1,1,1,1,1,1,1,1,1,1},mttm[101]={0,6,6,3,9,6,4,4};
int mtpf(int tot)
{
	qing;
	int n=7;
	cout<<"                     Change skin"<<endl;
	cout<<" ------------------------------------------------"<<endl;
	cout<<"|                                                |"<<endl;
	cout<<"|   Press W and S to decide which one to change  |"<<endl;
	cout<<"|                                                |"<<endl;
	cout<<"|   Press A and D to decide which one to use     |"<<endl;
	cout<<"|                                                |"<<endl;
	cout<<"|      Press newline to exit after changing      |"<<endl;
	cout<<"|                                                |"<<endl;
	for(int i=1;i<=n;++i)
	{
		cout<<"|           ";
		if(tot==i) printf(" -->   ");
		else printf("       ");
		cout<<mtc[i]<<mtpfk[i][mtt[i]];
		printf("  (%d/%d)",mtt[i],mttm[i]);shus(12);
//		↘↙
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
		if(tot==4) printf("↓");
		else if(tot==5) printf("♀");
		else if(tot==6) printf("⊙");
		else if(tot==1) printf("��");
		else if(tot==2) printf("♂");
		else if(tot==3) printf("↑");
	}
	else if(dqc[x][y]=='#')
	{
		int tot=mtt[2];
		if(tot==1) printf("↓"),re++;
		else if(tot==2) printf("♀"),re++;
		else if(tot==3) printf("⊙"),re++;
		else if(tot==4) printf("��"),re++;
		else if(tot==5) printf("♂"),re++;
		else if(tot==6) printf("↑"),re++;
	}
	else if(dqc[x][y]=='@')
	{
		int tot=mtt[3];
		if(tot==1) printf("Ex");
		else if(tot==2) printf("Et");
		else if(tot==3) printf("Ou");
	}
	else if(dqc[x][y]=='*')
	{
		int tot=mtt[4];
		if(tot==1) printf("Ｋ");
		else if(tot==2) printf("Ｌ");
		else if(tot==3) printf("Ｍ");
		else if(tot==4) printf("Ｎ");
		else if(tot==5) printf("Ｏ");
		else if(tot==6) printf("Ｐ");
		else if(tot==7) printf("Ｑ");
		else if(tot==8) printf("Ｒ");
		else if(tot==9) printf("Ｓ");
	}
	else if(dqc[x][y]=='Y')
	{
		int tot=mtt[5];
		if(tot==1) printf("Ye");
		else if(tot==2) printf("Bu");
		else if(tot==3) printf("Re");
		else if(tot==4) printf("Gr");
		else if(tot==5) printf("Pu");
		else if(tot==6) printf("Bl");
	}
	else if(dqc[x][y]=='U')
	{
		int tot=mtt[6];
		if(tot==1) printf("→");
		else if(tot==2) printf("↖");
		else if(tot==3) printf("∥");
		else if(tot==4) printf("行");
	}
	else if(dqc[x][y]=='D')
	{
		int tot=mtt[7];
		if(tot==1) printf("��");
		else if(tot==2) printf("��");
		else if(tot==3) printf("∣");
		else if(tot==4) printf("衣");
	}
	else if(dqc[x][y]=='&')
	{
		int tot=mtt[8];
		printf("ㄙ"); 
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
	printf("Floor:%d   (9 floors in total)      Remaining keys:%d\n               ",ceng,key);
	if(yo<=3) printf("Press E to change skin\n");
	else printf("Pay 10 yuan to change skin\n");
	for(int i=1;i<=10;++i)
	for(int j=1;j<=10;++j)
	pqc(i,j);
	if(ceng==8) printf("ㄙ only can go once\n");
	if(tot==true) dqc[x][y]='$';
}
void mota(int a)
{
	if(!que(a)) return ;qing;
	if(!queg())
	{
		cout<<"magic tower"<<endl;Sleep(1000);
		cout<<"You need to find the exit in the tower"<<endl;Sleep(1000);
		cout<<"↓is the door.It takes a key to open it"<<endl;Sleep(1000);
		cout<<"If you can't play, press Q to quit"<<endl;Sleep(1000);
		cout<<"You can win at the exit"<<endl;Sleep(1000);
		cout<<"Is it very easyˋˋ"<<endl;Sleep(1000);
		cout<<"Let's goㄐ"<<endl;Sleep(1000);
	}
	else cout<<"Let's goㄐ"<<endl;
	stop;qing;
	x=2,y=2;int i=1,q=0; 
	for(ceng=1;;i++)
	{
		printf("Current number of layers:%d(9 floors in total)      Remaining keys:%d\n               ",ceng,key);
		if(yo<=3) printf("Press E to change skin\n");
		else printf("Pay 10 yuan to change skin\n");
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
	if(win==100) cout<<"You failed﹞﹞﹞﹞﹞﹞"<<endl;
	else cout<<"You winㄐㄐㄐ"<<endl;
	printf("Score:%d\n",min(100,max(0,key*10+40-yo*10)));stop;
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
		printf("Question %d:%d%c%d=",i,a,f[l],b);
		cin>>ans;bool fl=false;
		if(l==1&&a+b==ans) fl=true;
		if(l==2&&a-b==ans) fl=true;
		if(l==2&&a*b==ans) fl=true;
		if(fl==true) r++,cout<<"Right"<<endl;
		if(fl==false) cout<<"Wrong"<<endl; 
	}
	qing;
	cout<<"     test result"<<endl;
	printf("Total number of questions : %d\n",n); 
	printf("Number of right questions : %d\n",r); 
	printf("Number of wrong questions : %d\n",n-r); 
	printf("Accuracy : %.2lf%\n",100.0*r/n); 
	printf("    The test is over\n");stop;
}
void js(int a)
{
	if(!que(a)) return ;qing;
	char cc[11][101]={{},{"addition"},{"subtraction"},{"multiplication"},{"division"}, {"division (with remainder)"}};
	cout<<"Calculation"<<endl;
	cout<<"As the name suggests, it is a calculation problem."<<endl;
	printf("Please enter the question you need to test\n");
	for(int i=1;i<=2;++i)
	printf("%7d.%s\n",i,cc[i]);
	while(a<'1'||a>'3') a=getch();qing;a-='0';
	printf("\nYou have selected%s\n",cc[a]);
	printf("Please input the number of questions you want to test (no more than 100):");
	int b;
	cin>>b;
	while(b>100)
	{
		qing;
		printf("The number of test items can't exceed 100ㄐㄐㄐ\n"); 
		printf("You have selected%s\n",cc[a]);
		printf("Please input the number of questions you want to test (no more than 100):");
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
	printf("Please input the prime factor as you want to exit(Enter 0 as exit):"); 
	scanf("%d",&n);
	if(n==0) return 0;
	fj(n,1);
	stop;
    zysfj(a);
}
int pss(int a)
{
	int n;qing; 
	printf("Please enter the number you want to determine whether it is a prime(Enter 0 as exit):"); 
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
		cout<<"Which OJ is you want to open, old Oj or new OJ?"<<endl;
		cout<<"1.New OJ    2.Old OJ    0.I don't need it now"<<endl;
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
	cout<<"Please enter two numbers of the GCD you require(Enter two zeros to exit):";
	cin>>a>>b;
	if(a==0&&b==0) return ;
	printf("(%d,%d)=%d\n",a,b,__gcd(a,b));
	stop;gcd();
}
void lcm()
{
	long long int a,b;qing;
	cout<<"Please enter two numbers of the LCM you require(Enter two zeros to exit):";
	cin>>a>>b;
	if(a==0&&b==0) return ;
	printf("[%d,%d]=%d\n",a,b,a/__gcd(a,b)*b);
	stop;lcm();
}
void hax()
{
	int a;qing;
	cout<<"Please enter the size of the love you want to draw:";
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
char yhm[101][101]= {{" pig"}   ,{" PJL"}   ,{" ZZR"}   ,{" DZW"}   ,{" ZSH"}   ,{" LGJ"}   ,{" XZC"}   ,{" LZY"}   ,{" ZTC"}   };
char yhmm[101][101]={{" 207101"},{" 123456"},{" 123456"},{" asd123"},{" 123456"},{" 123456"},{" 123456"},{" 123456"},{" 123456"}};
void pmm()
{
	system("cls");int chang=5;
	cout<<endl<<endl<<endl;tou();shuk();
	cout<<"   |                                        Sign in";shus(45);
	for(int i=1;i<=chang-1;++i) shuk();
	cout<<"   |       Please enter your user name and password     Confirm by line break.";shus(18);
	for(int i=1;i<=chang-2;++i) shuk();
	cout<<"   |             user name:";
	for(int i=1;i<=ly;++i) cout<<yong[i];shus(69-ly);shuk(); 
	cout<<"   |             password:";
	for(int i=1;i<=lm;++i) cout<<"*";shus(70-lm);
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
	while(cnt<=4)
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
		cout<<"                  The user name does not existㄐㄐㄐ"<<endl;Sleep(5000);
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
		cout<<"                           Password errorㄐㄐㄐ"<<endl;Sleep(5000);
		return true;
	}
	if(yo<=3) zye=4;else zye=3;
	qing;cout<<"                    Successful landingㄐㄐㄐ"<<endl;stop;
	return false;
}
int ye=1,ans,ansb;
char ss[100001],f;
void jsj(int a)
{
	qing;
	cout<<"Please enter the formula you want to calculate(Enter 0 to exit):"<<endl<<"           ";
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
	cout<<"           Sequence sorting"<<endl;
	cout<<"Please enter the length of the sequence to be sorted (enter 0 as exit):";cin>>n;
	if(n==0) return;
	cout<<endl<<"Please input the sequence to be sorted:";for(int i=1;i<=n;++i) scanf("%d",aa+i);
	sort(aa+1,aa+n+1);
	cout<<"Sequence after sorting:";for(int i=1;i<=n;++i) printf("%d ",aa[i]);printf("\n");
	stop;
	slpx();
	return;
}
struct tim1{
	int y,m,d;
	void read(int tot,tim1 a)
	{
		if(tot==1) cout<<"Please enter the start time:";
		else if(tot==2) cout<<"Please enter the end time:";
		else if(tot==3) cout<<"Please enter how long it took:";
		scanf("%d %d %d",&y,&m,&d);
		if(y>=24||m>=60||d>=60)
		{
			qing;cout<<"Illegal inputㄐㄐㄐ"<<endl;Sleep(4000);qing;
			if(tot!=1)
			{
				printf("Please enter the start time:%d %d %d\n",a.y,a.m,a.d);
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
	cout<<"You answer:";ans.print();
	return ;
}
void sjh()
{
	tim1 a,b,a1,b1,ans;
	jiazai();
	a.read(1,a),b.read(3,a);
	if(!bi(a,b)) swapp(a,b);
	ans=he(a,b);
	cout<<"You answer:";ans.print();
	return ;
}
char wen[101][201]={"","What is this?              ","What can it doˋ                                        ",
					   "How to use itˋ            ","Do you need any software to use it?                     ","","","",""},
     da[101][201]= {"","Intelligent service system.  ","Help you in many ways, such as entertainment, math, etc.",
	                   "Just follow his instructions.","No, a computer is enough.                               ","","","",""};
int ti=7;
void QA(int ye)
{
	qing;cout<<endl<<endl<<endl;kuan=22;
	tou();
	shuk();cout<<"   |                                       FAQ                            ";shus(kuan);
	shuk();cout<<"   |                                                                      ";shus(kuan);
	shuk();
	for(int i=1+ye*4-4;i<=ye*4;++i)
	{
		printf("   |      %2d.  Q: ",i);cout<<wen[i];shus(kuan+56-strlen(wen[i]));
		cout<<"   |           A: ";cout<<da[i];shus(kuan+56-strlen(da[i]));shuk();
	}
	shuk();shuk();cout<<"   |         0.Exit                                                       ";shus(kuan);
	shuk();printf("   |             Page %d (1 page in total)     (Press A or D to other page)",ye);shus(kuan);
	shuk();tou();
	int a;
	while(!pshu(a,0)) a=getch();
	if(a=='d'&&ye!=1) QA(ye+1);
	else if(a=='a'&&ye!=1) QA(ye-1);
	else if(a=='0') return;
	else QA(ye);
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
		else if(a==4) js(a);
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
		else if(a==15) sj();
		else if(a==16) caishu(a);
		else if(a==17) xj(a);
		else if(a==18) xj2(a);
		else if(a==19) xj3(a);
		else if(a==20) txz(a);
		else if(a==21) mota(a);
		else if(a==22) dk(7);
		else if(a==23) dk(8);
		else if(a==24) hax();
		else if(a==25) slpx();
		else if(a==26) sjc();
		else if(a==27) sjh();
		else if(a==28) QA(1);
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
