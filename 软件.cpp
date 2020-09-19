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
	cout<<"   |                                        登录";shus(48);
	for(int i=1;i<=chang-1;++i) shuk();
	cout<<"   |                  请输入您的用户名和密码              按换行确定。";shus(26);
	for(int i=1;i<=chang-2;++i) shuk();
	cout<<"   |             用户名：";
	for(int i=1;i<=ly;++i) cout<<yong[i];shus(71-ly);shuk(); 
	cout<<"   |             密码：";
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
		cout<<"                              该用户名不存在！！！"<<endl;Sleep(5000);
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
		cout<<"                                 密码错误！！！"<<endl;Sleep(5000);
		return true;
	}
	if(yo<=3) zye=5;else zye=4;
	qing;cout<<"                          登陆成功！！！"<<endl;stop;
	return false;
}
char zjms[101][101]={{},{"系统      查看更新日志"},{"系统      查看版权"},{"系统      查看版权人"}
					   ,{"系统      常见问题Q&A"},{"实用      打开洛谷"},{"实用      打开百度"},{"实用      打开广附oj"}
					   ,{"实用      计算年月日差（计算两个日期之间相差多少日期）"},{"实用      计算一个日期过了一定时间后，现在是多久"}
					   ,{"数学      求最大公因数"},{"数学      求最小公倍数"},{"数学      判断素数"},{"数学      质因数分解"}
					   ,{"数学      计算器"},{"测试      计算"},{"游戏      猜数"},{"游戏      小机Ⅰ"},{"游戏      小机Ⅱ"}
					   ,{"游戏      小机Ⅲ"},{"游戏      推箱子"},{"游戏      魔塔"},{"实用      计算时间复杂度"}
					   ,{"实用      打开人教版教科书"},{"实用      打开Konnyaku OJ"},{"实用      画爱心"},{"实用      数列排序"}
					   ,{"实用      计算时分秒差（计算两个时间之间相差多少时间）"},{"实用      计算一个时间过了一定时间后，现在是多久"}
					   ,{"软件      寻宝"},{""}};
char wei[101]={"暂未开启    此功能暂未开启"};
void jm1(int ye)
{
	int kuan=25;
	qing;
	cout<<endl<<endl<<endl;
	tou();
	shuk();cout<<"   |    尊敬的用户您好，欢迎使用智能服务系统6.0.1，请问您需要什么服务？";shus(kuan);
	shuk();cout<<"   |         功能类型           功能名称        用户名："<<yhm[yo]<<"           ";shus(kuan);
	for(int i=-6+ye*7;i<=ye*7;++i)
	{
		int tot=0;
		shuk();
		printf("   |       %d.",i+7-ye*7);
		if(strlen(jms[i])==0) cout<<wei,shus(57-tot);
		else cout<<"  "<<jms[i],shus(81-strlen(jms[i])-tot);
	}
	shuk();cout<<"   |       0.  退出登录                                                ";shus(kuan);
	shuk();printf("   |       创作人：PJL         第%d页（共%d页）      （按A或D翻页）",ye,zye);shus(kuan+6);
	shuk();tou();
}
void geng(int ye)
{
	int kuan=14;
	qing;
	cout<<endl<<endl<<endl;
	tou();
	shuk();cout<<"   |                          更新日志                                            ";shus(kuan);
	shuk();cout<<"   |                                                                              ";shus(kuan);
	if(ye==1)
	{
		shuk();cout<<"   |   版本 1.0   最初的程序，只有两个选项。                         2020.02.09   ";shus(kuan);
		shuk();cout<<"   |   版本 1.0.1 新增猜数，计算年月和功能。                         2020.02.10   ";shus(kuan);
		shuk();cout<<"   |   版本 1.1   部分程序增加了getch()函数。                        2020.02.11   ";shus(kuan);
		shuk();cout<<"   |   版本 1.1.1 新增小机游戏。                                     2020.02.12   ";shus(kuan);
		shuk();cout<<"   |   版本 1.1.2 优化小机游戏界面，构思推箱子游戏。                 2020.02.13   ";shus(kuan);
		shuk();cout<<"   |   版本 1.1.3 推箱子进入调试阶段，小机游戏回炉重造。             2020.02.14   ";shus(kuan);
		shuk();cout<<"   |   版本 1.1.4 游戏推箱子，小机上线，修复部分bug。                2020.02.15   ";shus(kuan);
	}
	else if(ye==2)
	{
		shuk();cout<<"   |   版本 2.0   新增翻页功能。                                     2020.02.15   ";shus(kuan);
		shuk();cout<<"   |   版本 2.0.1 新增计算时间复杂度功能                             2020.02.16   ";shus(kuan);
		shuk();cout<<"   |   版本 2.1   新增版权说明。                                     2020.02.16   ";shus(kuan);
		shuk();cout<<"   |   版本 2.1.1 新增游戏魔塔，优化部分代码。                       2020.02.17   ";shus(kuan);
		shuk();cout<<"   |   版本 2.2   新增版权人说明，首次授权给其他人。                 2020.02.17   ";shus(kuan);
		shuk();cout<<"   |   版本 2.2.1 修复部分bug                                        2020.02.18   ";shus(kuan);
		shuk();cout<<"   |   版本 2.2.2 优化推箱子界面                                     2020.02.19   ";shus(kuan);
	}
	else if(ye==3)
	{
		shuk();cout<<"   |   版本 2.2.3 推箱子新增一个难度，魔塔新增一层。                 2020.02.20   ";shus(kuan);
		shuk();cout<<"   |   版本 2.3   开始策划测试系列。                                 2020.02.21   ";shus(kuan);
		shuk();cout<<"   |   版本 2.3.1 推出计算测试。                                     2020.02.22   ";shus(kuan);
		shuk();cout<<"   |   版本 2.4   推出质因数分解功能。                               2020.02.22   ";shus(kuan);
		shuk();cout<<"   |   版本 3.0   版面大改版，加入类别功能。                         2020.02.23   ";shus(kuan);
		shuk();cout<<"   |   版本 3.0.1 修复部分bug。                                      2020.02.23   ";shus(kuan);
		shuk();cout<<"   |   版本 3.1   推箱子新增投降功能。                               2020.02.24   ";shus(kuan);
	}
	else if(ye==4)
	{
		shuk();cout<<"   |   版本 3.1.1 修复部分bug，主界面重新改版。                      2020.02.24   ";shus(kuan);
		shuk();cout<<"   |   版本 3.1.2 小机回炉重造新增剧情。                             2020.02.24   ";shus(kuan);
		shuk();cout<<"   |   版本 3.2   小机重新上线，新增买菜剧情。                       2020.02.25   ";shus(kuan);
		shuk();cout<<"   |   版本 3.2.1 代码突破1000行，修复部分bug。                      2020.02.25   ";shus(kuan);
		shuk();cout<<"   |   版本 3.2.2 小机拆分成小机Ⅰ和小机Ⅱ。                         2020.02.26   ";shus(kuan);
		shuk();cout<<"   |   版本 3.3   新增打开百度功能                                   2020.02.26   ";shus(kuan);
		shuk();cout<<"   |   版本 3.3.1 新增打开OJ功能                                     2020.02.26   ";shus(kuan);
	}
	else if(ye==5) 
	{
		shuk();cout<<"   |   版本 3.3.2 新增打开教科书功能                                 2020.02.27   ";shus(kuan);
		shuk();cout<<"   |   版本 3.4   魔塔新增退出功能                                   2020.02.27   ";shus(kuan);
		shuk();cout<<"   |   版本 3.4.1 魔塔新增一层                                       2020.02.28   ";shus(kuan);
		shuk();cout<<"   |   版本 3.4.2 推箱子新增一个难度                                 2020.02.28   ";shus(kuan);
		shuk();cout<<"   |   版本 3.4.3 各大游戏新增询问功能                               2020.02.29   ";shus(kuan);
		shuk();cout<<"   |   版本 3.5   新增数学类别，新增计算最大公因数和最小公倍数       2020.02.29   ";shus(kuan);
		shuk();cout<<"   |   版本 3.5.1 新增画爱心功能                                     2020.02.29   ";shus(kuan);
	}
	else if(ye==6) 
	{
		shuk();cout<<"   |   版本 4.0   智能服务系统正式发售，调试阶段结束                 2020.03.01   ";shus(kuan);
		shuk();cout<<"   |   版本 4.0.1 定价10元，只卖“探访者”，发售第一天即卖出5份。    2020.03.01   ";shus(kuan);
		shuk();cout<<"   |   版本 4.0.2 开始微调阶段，短时间内将不会出新程序与新功能       2020.03.02   ";shus(kuan);
		shuk();cout<<"   |   版本 4.0.3 售卖使用者，定价5元。                              2020.03.02   ";shus(kuan);
		shuk();cout<<"   |   版本 4.1   优化部分设定，修复部分bug。                        2020.03.03   ";shus(kuan);
		shuk();cout<<"   |   版本 4.1.1 共卖出10份，构思密码系统。                         2020.03.03   ";shus(kuan);
		shuk();cout<<"   |   版本 4.1.2 魔塔新增4层                                        2020.03.05   ";shus(kuan);
	}
	else if(ye==7) 
	{
		shuk();cout<<"   |   版本 5.0   密码系统上线                                       2020.03.05   ";shus(kuan);
		shuk();cout<<"   |   版本 5.1   总界面第二次大改版                                 2020.03.10   ";shus(kuan);
		shuk();cout<<"   |   版本 5.1.1 增加计算器功能                                     2020.03.14   ";shus(kuan);
		shuk();cout<<"   |   版本 5.1.2 增加数列排序功能                                   2020.04.06   ";shus(kuan);
		shuk();cout<<"   |   版本 5.2.3 增加计算年月和功能2.0                              2020.04.12   ";shus(kuan);
		shuk();cout<<"   |   版本 5.2.4 以同样思路增加计算年月差功能2.0                    2020.04.15   ";shus(kuan);
		shuk();cout<<"   |   版本 5.3   “计算年月和功能2.0”改名为“计算时间和功能”      2020.04.18   ";shus(kuan);
	}
	else if(ye==8) 
	{
		shuk();cout<<"   |   版本 5.3.1 “计算年月差功能2.0”改名为“计算时间差功能”      2020.04.19   ";shus(kuan);
		shuk();cout<<"   |   版本 5.3.2 修复bug，游戏整改开始                              2020.04.20   ";shus(kuan);
		shuk();cout<<"   |   版本 5.4   小机Ⅰ游戏推出更改皮肤功能                         2020.04.24   ";shus(kuan);
		shuk();cout<<"   |   版本 5.4.1 更改皮肤功能更新                                   2020.04.26   ";shus(kuan);
		shuk();cout<<"   |   版本 5.4.2 更改皮肤功能在小机Ⅰ和Ⅱ皆可使用                   2020.04.28   ";shus(kuan);
		shuk();cout<<"   |   版本 5.4.3 魔塔，推箱子新增更改皮肤功能                       2020.04.29   ";shus(kuan);
		shuk();cout<<"   |   版本 5.5   小机新增维修剧情，命名为小机Ⅲ                     2020.05.01   ";shus(kuan);
	}
	else if(ye==8) 
	{
		shuk();cout<<"   |   版本 5.5.1 魔塔新增2层                                        2020.05.02   ";shus(kuan);
		shuk();cout<<"   |   版本 5.6   修复众多bug                                        2020.05.09   ";shus(kuan);
		shuk();cout<<"   |   版本 5.6.1 构思英文版软件                                     2020.05.16   ";shus(kuan);
		shuk();cout<<"   |   版本 5.6.2 开始做英文版的前期准备                             2020.05.23   ";shus(kuan);
		shuk();cout<<"   |   版本 5.7   开始制作英文版软件，并修复中文版众多bug            2020.06.08   ";shus(kuan);
		shuk();cout<<"   |   版本 5.7.1 优化中文版部分操作。                               2020.06.15   ";shus(kuan);
		shuk();cout<<"   |   版本 5.7.2 英文版进入最后的调试                               2020.07.08   ";shus(kuan);
	}
	else if(ye==9) 
	{
		shuk();cout<<"   |   版本 6.0   新增英文版，欢迎大家购买                           2020.07.09   ";shus(kuan);
		shuk();cout<<"   |   版本 6.0.1 英文版版本与中文版统一                             2020.07.09   ";shus(kuan);
		shuk();cout<<"   |   版本 6.1   新增打开洛谷和打开Konnyaku OJ功能                  2020.07.10   ";shus(kuan);
		shuk();cout<<"   |   版本 6.1.1 新增常见问题Q&A                                    2020.07.10   ";shus(kuan);
		shuk();cout<<"   |   版本 6.1.2 版面第三次大改版                                   2020.07.11   ";shus(kuan);
		shuk();cout<<"   |   版本 6.2   投入进行子软件开发                                 2020.07.27   ";shus(kuan);
		shuk();cout<<"   |   版本 6.2.1 子软件上线调试                                     2020.08.02   ";shus(kuan);
	}
	else if(ye==10) 
	{
		shuk();cout<<"   |   版本 6.2.2 主界面可显示用户名                                 2020.08.07   ";shus(kuan);
		shuk();cout<<"   |   版本 6.3   第一个子软件正式上线                  （当前版本） 2020.08.29   ";shus(kuan);
		shuk();cout<<"   |                                                                              ";shus(kuan);
		shuk();cout<<"   |                                                                              ";shus(kuan);
		shuk();cout<<"   |                                                                              ";shus(kuan);
		shuk();cout<<"   |                                                                              ";shus(kuan);
		shuk();cout<<"   |                                                                              ";shus(kuan);
	}
	shuk();cout<<"   |       0.退出                                                                 ";shus(kuan);
	shuk();printf("   |                      第%d页（共9页）             （按A或D翻页）         ",ye);shus(kuan+6);
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
{"使用者：","XZY","","","","","","","",""},
{"观察者：","","","","","","","","",""},
{"探访者：","DZW","ZZR","LDD","LCH","","","","",""},
{"发言者：","CYH","ZCH","","","","","","",""},
{"创作者：","PJL","","","","","","","",""},
};
void bqr()
{
	int kuan=25,a;
	qing;
	cout<<endl<<endl<<endl;
	if(zye==4)
	{
		tou();
		shuk();cout<<"   |                        版权人说明                                 ";shus(kuan);
		shuk();cout<<"   |   使用者：XZY                                                     ";shus(kuan);
		shuk();cout<<"   |   观察者：                                                        ";shus(kuan);
		shuk();cout<<"   |   探访者：DZW ZZR LDD LCH                                         ";shus(kuan);
		shuk();cout<<"   |   发言者：CYH ZCH                                                 ";shus(kuan);
		shuk();cout<<"   |   创作者：PJL                                                     ";shus(kuan);
		shuk();cout<<"   |                                                                   ";shus(kuan);
		shuk();cout<<"   |   以上所有人请勿将此软件给任何人！                                ";shus(kuan);
		shuk();cout<<"   |                                                                   ";shus(kuan);
		shuk();cout<<"   |                                                                   ";shus(kuan);
		shuk();cout<<"   |   按1查看版权说明，按0退出。                                      ";shus(kuan);
		shuk();tou();
	}
	else printf("您没有权限！！！\n\n按1查看版权说明，按0退出。\n");
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
	shuk();cout<<"   |                          版权说明                                 ";shus(kuan);
	shuk();cout<<"   |   此程序由创造者PJL创作而成，请勿侵权。                           ";shus(kuan);
	shuk();cout<<"   |   但是并不意味着不可使用此软件，其他人员可按以下规定使用。        ";shus(kuan);
	shuk();cout<<"   |     想使用者可以找PJL购买软件，并授予一定权力。                   ";shus(kuan);
	shuk();cout<<"   |     权力大小如下：（每一个都具有上面的所有权利加上自己的权利）    ";shus(kuan);
	shuk();cout<<"   |       使用者：只允许使用软件；                                    ";shus(kuan);
	shuk();cout<<"   |       观察者：可以向创作者反馈；                                  ";shus(kuan);
	shuk();cout<<"   |       探访者：可以观看部分源代码；                                ";shus(kuan);
	shuk();cout<<"   |       发言者：可修改部分源代码，可以查看版权所有者；              ";shus(kuan);
	shuk();cout<<"   |       创作者：拥有一切权利。                                      ";shus(kuan);
	shuk();cout<<"   |   按1查看版权所有者，按0退出。                                    ";shus(kuan);
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
		cout<<"此功能尚未开启！！！";
		cout<<"（"<<6-i<<"）"<<endl; 
		Sleep(950);
	}
}
bool flag=true;
void jie()
{
	qing;
	cout<<"你真了要走了么？？？"<<endl;
	cout<<"1.真的   其他键.不小心点的"<<endl;
	int a=getch();
	if(a==1) flag=false;
}
bool que(int a)
{
	qing;
	cout<<"您确定要玩“";
	cout<<jms[a];
	cout<<"”？？？"<<endl;
	cout<<"1.真的   其他键.不小心点的"<<endl;
	char x;
	x=getch();qing;
	if(x!='1') return false;
	return true;
}
bool queg()
{ 
	cout<<"请问您知道规则吗？"<<endl;
	cout<<"1.知道   其他键.不知道"<<endl;
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
		printf("系统加载中");
		cout<<ji[i]<<endl;
		Sleep(100);
	}
	qing;
	cout<<"加载成功！！！"<<endl;
	Sleep(3000); 
}
void jia(int a)
{
	int n=5;
	while(n--)
	for(int i=1;i<=3;++i)
	{
		qing;
		printf("请等待");
		if(a!=0) printf("重新"); 
		printf("加载");
		for(int j=1;j<=i;++j) cout<<".";cout<<endl;
		Sleep(333);
	}
	qing;
	cout<<"加载成功！！！"<<endl;
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
	cout<<"请输入起始日期：";a.read();
	cout<<"请输入结束日期：";b.read();
	if(!bi(a,b)) swapp(a,b);
	ans=cha(a,b);
	cout<<"您的答案是：";ans.print();
	return ;
}
void nyh()
{
	tim a,b,a1,b1,ans;
	jiazai();
	cout<<"请输入起始日期：";a.read();
	cout<<"请输入过了多久：";b.read();
	if(!bi(a,b)) swapp(a,b);
	ans=he(a,b);
	cout<<"您的答案是：";ans.print();
	return ;
}
void shibai(int gme)
{
	cout<<"游戏失败了，你要重来吗？？"<<endl;
	cout<<"1.重来！！！ 其他键.不用了谢谢"<<endl; 
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
			printf("再猜对%d次就能通关了！\n",3-caishu2);
			stop;
			caishu(a);
		}
		else cout<<"恭喜你通关！"<<endl;
		stop;
	}
	if(a==0)
	{
		cout<<"你也可以获得奖励"<<endl;
		cout<<"那就是···"<<endl;
		cout<<"再来一次吧！"<<endl;
	}
}
void caishu(int qwe)
{
	qing;
	if(caishu2==0)
	{
		if(!que(qwe)) return ; 
		srand((int)time(0));
		cout<<"猜数游戏"<<endl;Sleep(2000);
		cout<<"在1~1000之中来猜一个数，每猜一个数，我便会告诉你大了还是小了。"<<endl;Sleep(2000);
		cout<<"每一局一共有12次猜数机会，答对3局即可通关。"<<endl;Sleep(2000);
	}
	cout<<"开始吧！"<<endl;Sleep(2000);
	int a,b;
	a=rand()%1000+1;
	for(int i=1;;++i)
	{
		cin>>b;
		if(a==b)
		{
			cout<<"答对了"<<endl;
			caishu1(1);
			break;
		}
		if(a!=b)
		{
			if(b<a) cout<<"小了"<<endl;
			if(b>a) cout<<"大了"<<endl;
			if(i==12)
			{
				cout<<"你失败了"<<endl<<"不过······"<<endl;
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
char bu[1000],dt[101][101],xjc[101][101]={"","障碍物：","终点  ：","本机  ：","路径  ：","",""},
    xjpfk[101][101][10]={
	{},
	{"","□","○","◇","■","●","◆","","",""},
	{"","★","▲","☆","△","","","","",""},
	{"","①","②","③","④","⑤","⑥","⑦","⑧","⑨"},
	{"","■","●","◆","□","○","◇","","",""}
	};
int xjt[101]={1,1,1,1,1,1,1,1,1,1},xjtm[101]={0,6,4,9,6};
int kuan=22,chang=25,x=2,y=2,win,dian=100;
int xjpf(int a,int tot)
{
	qing;
	int n;
	if(a==1) n=3;
	else n=4;
	cout<<"                     更改皮肤"<<endl;
	cout<<" ------------------------------------------------"<<endl;
	cout<<"|                                                |"<<endl;
	cout<<"|           按w和s决定要更改哪一个               |"<<endl;
	cout<<"|                                                |"<<endl;
	cout<<"|                                                |"<<endl;
	cout<<"|                                                |"<<endl;
	cout<<"|                                                |"<<endl;
	cout<<"|           按a和d决定具体哪一个中用哪一个       |"<<endl;
	cout<<"|                                                |"<<endl;
	cout<<"|           更改完毕后按换行退出                 |"<<endl;
	cout<<"|                                                |"<<endl;
	cout<<"|                                                |"<<endl;
	if(n==3) cout<<"|                                                |"<<endl;
	for(int i=1;i<=n;++i)
	{
		cout<<"|           ";
		if(tot==i) printf(" -->   ");
		else printf("       ");
		cout<<xjc[i]<<xjpfk[i][xjt[i]];
		printf("  （%d/%d）",xjt[i],xjtm[i]);shus(12);
//		←→
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
		if(tot==1) printf("□"),re++;
		else if(tot==2) printf("○"),re++;
		else if(tot==3) printf("◇"),re++;
		else if(tot==4) printf("█"),re++;
		else if(tot==5) printf("●"),re++;
		else if(tot==6) printf("◆"),re++;
	}
	else if(dt[x][y]=='@')
	{
		int tot=xjt[2];
		if(tot==1) printf("★");
		else if(tot==2) printf("▲");
		else if(tot==3) printf("☆");
		else if(tot==4) printf("△");
	}
	else if(dt[x][y]=='*')
	{
		int tot=xjt[3];
		if(tot==1) printf("①");
		else if(tot==2) printf("②");
		else if(tot==3) printf("③");
		else if(tot==4) printf("④");
		else if(tot==5) printf("⑤");
		else if(tot==6) printf("⑥");
		else if(tot==7) printf("⑦");
		else if(tot==8) printf("⑧");
		else if(tot==9) printf("⑨");
	}
	else if(dt[x][y]=='$')
	{
		int tot=xjt[4];
		if(tot==4) printf("□");
		else if(tot==5) printf("○");
		else if(tot==6) printf("◇");
		else if(tot==1) printf("█");
		else if(tot==2) printf("●");
		else if(tot==3) printf("◆");
	}
	else printf("  ");
	if(y==chang) printf("\n");
	return re;
}
void zoux(char bu)
{
	if(bu=='q'&&yo<=3) xjpf(1,1),dian++;
	cout<<"剩余电量"<<dian<<"      ";
	if(yo<=3) printf("按Q键更改皮肤\n");
	else printf("支付10元即可更改皮肤\n");
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
		cout<<"你赢了"<<endl;
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
	if(cr==da) cout<<"正确"<<endl;
	else
	{
		cout<<"错误，你居然没有配备完整的三大法则,你现在要回厂处理！"<<endl; 
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
		cout<<"欢迎来到人类的世界，你的编号为89757，你的主人把你命名为“小机”"<<endl;
		Sleep(yan);
		cout<<"好了，身为机器人的你，先来回顾一下机器人三大法则吧！"<<endl;Sleep(yan);
		cout<<"请问机器人第一法则是什么？"<<endl;Sleep(yan);
		cout<<"A、机器人不得伤害人类，但可以因不作为而使人类受到伤害。"<<endl;Sleep(yan);
		cout<<"B、机器人不得伤害人类，也不可因不作为而使人类受到伤害。"<<endl;Sleep(yan);
		cout<<"C、机器人不得因不作为而使人类受到伤害，但可以伤害人类。"<<endl;Sleep(yan);
		cout<<"D、机器人可以伤害人类，也可以因不作为而使人类受到伤害。"<<endl;Sleep(yan);
		ce('B');stop;qing;
		cout<<"欢迎来到人类的世界，你的编号为89757，你的主人把你命名为“小机”"<<endl; 
		cout<<"好了，身为机器人的你，先来回顾一下机器人三大法则吧！"<<endl;
		cout<<"请问机器人第二法则是什么？"<<endl;Sleep(yan);
		cout<<"A、机器人可以有选择的听从人类的命令"<<endl;Sleep(yan);
		cout<<"B、机器人可以有选择的违反人类的命令"<<endl;Sleep(yan);
		cout<<"C、机器人必须听从人类的命令"<<endl;Sleep(yan);
		cout<<"D、机器人必须违反人类的命令"<<endl;Sleep(yan);
		ce('C');stop,qing;
		cout<<"欢迎来到人类的世界，你的编号为89757，你的主人把你命名为“小机”"<<endl;
		cout<<"好了，身为机器人的你，先来回顾一下机器人三大法则吧！"<<endl;
		cout<<"请问机器人第三法则是什么？"<<endl;Sleep(yan);
		cout<<"A、机器人可以有选择的伤害自己"<<endl;Sleep(yan);
		cout<<"B、机器人可以有选择的保护自己"<<endl;Sleep(yan);
		cout<<"C、机器人必须伤害自己"<<endl;Sleep(yan);
		cout<<"D、机器人必须保护自己"<<endl;Sleep(yan);
		ce('D');stop,qing;
		cout<<"可是你却在回家的路上和主人走散了"<<endl;Sleep(yan);
		cout<<"你要在电量耗尽之前赶回家"<<endl;Sleep(yan);
		cout<<"否则你就会在路上强制关机"<<endl;Sleep(yan);
		cout<<"然后被收垃圾的人收走卖掉"<<endl;Sleep(yan);
		stop,qing;
		cout<<"这附近的地形你应该熟悉吧"<<endl;Sleep(yan);
		cout<<"你的记忆库里应该有"<<endl;Sleep(yan);
		cout<<"好了，你还剩70格的电量"<<endl;Sleep(yan);
		cout<<"每走一步需要一格电量"<<endl;Sleep(yan);
		cout<<"开始吧！"<<endl;Sleep(yan);
		stop;qing;
	}
	else cout<<"开始吧！"<<endl;
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
			cout<<"滴嘟，你的电量耗尽了，眼前一片昏暗······"<<endl;
			stop;
//			shibai(2);
			return ;
		}
	}
}
void zouy(char bu)
{
	if(bu=='q') xjpf(2,1),dian++;
	cout<<"剩余电量"<<dian<<"      按Q键改变皮肤"<<endl;
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
			cout<<"买到菜了，现在就是要回家了"<<endl;
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
		cout<<"欢迎来到人类的世界，你的编号为89757，你的主人把你命名为“小机”"<<endl;Sleep(yan);
		cout<<"自从你被主人买回来之后"<<endl;Sleep(yan);
		cout<<"你就兼任起了各种各样的家务活"<<endl;Sleep(yan);
		cout<<"今天，你要去买菜"<<endl;Sleep(yan);
		cout<<"可是，等你出门了之后你才发现……"<<endl;Sleep(yan*5);
		cout<<"主人忘记给你充电啦！！！"<<endl;Sleep(yan);stop;qing; 
		cout<<"但是你发现还是可以去菜市场的"<<endl;Sleep(yan);
		cout<<"只是你需要省一些电"<<endl;Sleep(yan);
		cout<<"所以你决定走过的路不再走过"<<endl;Sleep(yan);
		cout<<"根据你的特殊设定，这样可以每一步只耗一格电"<<endl;Sleep(yan);
		cout<<"你现在还有150格电呢"<<endl;Sleep(yan);
		cout<<"所以……"<<endl;Sleep(yan*5);
		cout<<"开始行动吧！！"<<endl;Sleep(yan);stop;qing;
	}
	else cout<<"开始吧！"<<endl;
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
			cout<<"滴嘟，你的电量耗尽了，眼前一片昏暗······"<<endl;
			stop;
//			shibai(2);
			return ;
		}
	}
	qing;
	cout<<"买菜成功！！"<<endl;stop;
}
void zou3(char bu)
{
	if(bu=='q') xjpf(1,1),dian++;
	cout<<"剩余电量"<<dian<<"      按Q键改变皮肤"<<endl;
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
		cout<<"欢迎来到人类的世界，你的编号为89757，你的主人把你命名为“小机”"<<endl;Sleep(yan);
		cout<<"自从你被主人买回来之后"<<endl;Sleep(yan);
		cout<<"你就兼任起了各种各样的家务活"<<endl;Sleep(yan);
		cout<<"至今已经好几年了！！你变得有点旧了"<<endl;Sleep(yan*5);
		cout<<"你需要修理一下，可是……"<<endl;Sleep(yan);
		cout<<"主人居然不在家！！！"<<endl;Sleep(yan);stop;qing; 
		cout<<"但是你发现还是可以去修理店的"<<endl;Sleep(yan);
		cout<<"只是你需要省一些电"<<endl;Sleep(yan);
		cout<<"你因为磨损原因需要做一些调整"<<endl;Sleep(yan);
		cout<<"向下走一步需要用4格电，向右3格，向上2格，向左1格，而撞到墙要耗费5格电"<<endl;Sleep(yan);
		cout<<"你现在还有200格电呢"<<endl;Sleep(yan);
		cout<<"所以……"<<endl;Sleep(yan*5);
		cout<<"开始行动吧！！"<<endl;Sleep(yan);stop;qing;
	}
	else cout<<"开始吧！"<<endl;
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
			cout<<"滴嘟，你的电量耗尽了，眼前一片昏暗······"<<endl;
			stop;
//			shibai(2);
			return ;
		}
	}
	qing;
	cout<<"修理成功！！"<<endl;stop;
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
	if(ditu[x][y]=='$') printf("█");
	else if(ditu[x][y]=='#') printf("□"),re++;
	else if(ditu[x][y]=='@') printf("★");
	else if(ditu[x][y]=='*') printf("①");
	else if(ditu[x][y]=='&') printf("§");
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
	cout<<"剩余电量："<<dian<<endl;
	cout<<"当前坐标："<<"  ("<<heng<<","<<shu<<") "<<endl;
	for(int i=1;i<=kuan;++i)
	for(int j=1;j<=chang;++j)
	fang+=print(i,j);
	cout<<"剩余箱子："<<fang<<endl;
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
		cout<<"推箱子游戏"<<endl;Sleep(1000);
		cout<<"先将所有箱子推到星星处"<<endl;Sleep(1000);
		cout<<"然后自己再走到星星处即可"<<endl;Sleep(1000);
		cout<<"是不是很简单"<<endl;Sleep(1000);
	}
	else cout<<"开始吧！"<<endl;
	cout<<"请选择难度吧"<<endl;
	cout<<"1.入门"<<endl;
	cout<<"2.简单"<<endl;
	cout<<"3.中等"<<endl;
	cout<<"4.困难"<<endl;
	cout<<"注：§代表投降，如果你不想玩了或者不会玩了那就走进去。"<<endl;
	while(qwe<='0'||qwe>='5') qwe=getch();qwe-='0';
	kuan=ck[qwe][0],chang=ck[qwe][1];
	for(int i=1;i<=kuan;++i)
	for(int j=1;j<=chang;++j)
	ditu[i][j]=zditu[qwe][i][j];qing; 
	cout<<"剩余电量："<<dian<<endl;
	cout<<"当前坐标："<<"  ("<<heng<<","<<shu<<")"<<endl;
	for(int i=1;i<=kuan;++i)
	for(int j=1;j<=chang;++j)
	fang+=print(i,j);
	cout<<"剩余箱子："<<fang<<endl;
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
	if(win==1) cout<<"你赢了"<<endl;
	else cout<<"你投降了"<<endl; 
	stop;
	return ; 
}
char O[1001][1001]={{}, {"O(n*n)     :"},{"O(n*√n)   :"},{"O(n*log(n)):"},
						{"O(n)       :"},{"O(√n)     :"},{"O(log(n))  :"}};
int sj()
{
	int a,b,c;
	qing;
	cout<<"计算时间复杂度"<<endl<<endl;
	cout<<"请输入题目中的n（输入0视为退出）：";
	cin>>a;
	long long int OO[1001]={0,(ll)a*a,(ll)a*sqrt(a),(ll)a*log2(a),(ll)a,(ll)sqrt(a),(ll)log2(a)};
	if(a==0) return 0; 
	cout<<"请输入您要输出的结果"<<endl;
	cout<<"1.运算次数   2.时间（单位：毫秒）   3.一秒钟内会不会爆"<<endl;
	b=getch();b-='0'; 
	for(int i=1;i<=6;++i)
	{
		cout<<O[i];
		if(b==1) cout<<OO[i]<<endl;
		if(b==2) cout<<(long double)OO[i]/140000.0<<endl;
		if(b==3)
		{
			bool tot=(long long)OO[i]/140000<=1000;
			if(tot) cout<<"不会"<<endl;
			else cout<<"会"<<endl;
		}
	}
	cout<<"注：此结果仅用于参考，出事不管。"<<endl;
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
char mtc[101][101]={"","障碍物：","门    ：","终点  ：","本人  ：","钥匙  ：","上    ：","下    ："},
    mtpfk[101][101][10]={
	{},
	{"","■","●","◆","□","○","◇","","",""},
	{"","□","○","◇","■","●","◆","","",""},
	{"","出","口","终","","","","","",""},
	{"","①","②","③","④","⑤","⑥","⑦","⑧","⑨"},
	{"","黄","蓝","红","绿","紫","黑","","",""},
	{"","△","▲","↑","︽","","","","",""},
	{"","▽","▼","↓","︾","","","","",""},
	{"","","","","","","","","",""},
	};
int mtt[101]={1,1,1,1,1,1,1,1,1,1},mttm[101]={0,6,6,3,9,6,4,4};
int mtpf(int tot)
{
	qing;
	int n=7;
	cout<<"                     更改皮肤"<<endl;
	cout<<" ------------------------------------------------"<<endl;
	cout<<"|                                                |"<<endl;
	cout<<"|           按w和s决定要更改哪一个               |"<<endl;
	cout<<"|                                                |"<<endl;
	cout<<"|           按a和d决定具体哪一个中用哪一个       |"<<endl;
	cout<<"|                                                |"<<endl;
	cout<<"|           更改完毕后按换行退出                 |"<<endl;
	cout<<"|                                                |"<<endl;
	for(int i=1;i<=n;++i)
	{
		cout<<"|           ";
		if(tot==i) printf(" -->   ");
		else printf("       ");
		cout<<mtc[i]<<mtpfk[i][mtt[i]];
		printf("  （%d/%d）",mtt[i],mttm[i]);shus(12);
//		←→
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
		if(tot==4) printf("□");
		else if(tot==5) printf("○");
		else if(tot==6) printf("◇");
		else if(tot==1) printf("█");
		else if(tot==2) printf("●");
		else if(tot==3) printf("◆");
	}
	else if(dqc[x][y]=='#')
	{
		int tot=mtt[2];
		if(tot==1) printf("□"),re++;
		else if(tot==2) printf("○"),re++;
		else if(tot==3) printf("◇"),re++;
		else if(tot==4) printf("█"),re++;
		else if(tot==5) printf("●"),re++;
		else if(tot==6) printf("◆"),re++;
	}
	else if(dqc[x][y]=='@')
	{
		int tot=mtt[3];
		if(tot==1) printf("出");
		else if(tot==2) printf("口");
		else if(tot==3) printf("终");
	}
	else if(dqc[x][y]=='*')
	{
		int tot=mtt[4];
		if(tot==1) printf("①");
		else if(tot==2) printf("②");
		else if(tot==3) printf("③");
		else if(tot==4) printf("④");
		else if(tot==5) printf("⑤");
		else if(tot==6) printf("⑥");
		else if(tot==7) printf("⑦");
		else if(tot==8) printf("⑧");
		else if(tot==9) printf("⑨");
	}
	else if(dqc[x][y]=='Y')
	{
		int tot=mtt[5];
		if(tot==1) printf("黄");
		else if(tot==2) printf("蓝");
		else if(tot==3) printf("红");
		else if(tot==4) printf("绿");
		else if(tot==5) printf("紫");
		else if(tot==6) printf("黑");
	}
	else if(dqc[x][y]=='U')
	{
		int tot=mtt[6];
		if(tot==1) printf("△");
		else if(tot==2) printf("▲");
		else if(tot==3) printf("↑");
		else if(tot==4) printf("︽");
	}
	else if(dqc[x][y]=='D')
	{
		int tot=mtt[7];
		if(tot==1) printf("▽");
		else if(tot==2) printf("▼");
		else if(tot==3) printf("↓");
		else if(tot==4) printf("︾");
	}
	else if(dqc[x][y]=='&')
	{
		int tot=mtt[8];
		printf("＊"); 
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
	printf("当前层数：%d（共9层）      剩余钥匙：%d\n               ",ceng,key);
	if(yo<=3) printf("按E键更改皮肤\n");
	else printf("支付10元即可更改皮肤\n");
	for(int i=1;i<=10;++i)
	for(int j=1;j<=10;++j)
	pqc(i,j);
	if(ceng==8) printf("＊只能走过一次哟\n");
	if(tot==true) dqc[x][y]='$';
}
void mota(int a)
{
	if(!que(a)) return ;qing;
	if(!queg())
	{
		cout<<"游戏——魔塔"<<endl;Sleep(1000);
		cout<<"你需要在魔塔中找到出口"<<endl;Sleep(1000);
		cout<<"□代表门，开启它需要一把钥匙"<<endl;Sleep(1000);
		cout<<"如果你玩不了了，按Q即可退出"<<endl;Sleep(1000);
		cout<<"到达出口即可胜利"<<endl;Sleep(1000);
		cout<<"是不是很简单？？"<<endl;Sleep(1000);
		cout<<"开始吧！"<<endl;Sleep(1000);
	}
	else cout<<"开始吧！"<<endl;
	stop;qing;
	x=2,y=2;int i=1,q=0; 
	for(ceng=1;;i++)
	{
		printf("当前层数：%d（共7层）      剩余钥匙：%d\n               ",ceng,key);
		if(yo<=3) printf("按e键更改皮肤\n");
		else printf("支付10元即可更改皮肤\n");
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
	if(win==100) cout<<"你输了……"<<endl;
	else cout<<"你赢了！！！"<<endl;
	printf("得分：%d\n",min(100,max(0,key*10+40-yo*10)));stop;
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
		printf("第%d题：%d%c%d=",i,a,f[l],b);
		cin>>ans;bool fl=false;
		if(l==1&&a+b==ans) fl=true;
		if(l==2&&a-b==ans) fl=true;
		if(l==2&&a*b==ans) fl=true;
		if(fl==true) r++,cout<<"正确"<<endl;
		if(fl==false) cout<<"错误"<<endl; 
	}
	qing;
	cout<<"     测试结果"<<endl;
	printf("  总题数：%d\n",n); 
	printf("  正确题数：%d\n",r); 
	printf("  错误题数：%d\n",n-r); 
	printf("  正确率：%.2lf%\n",100.0*r/n); 
	printf("    测试完毕\n");stop;
}
void js(int a)
{
	if(!que(a)) return ;qing;
	char cc[11][101]={{},{"加法"},{"减法"},{"乘法"},{"除法"},{"除法（带余数）"}};
	cout<<"测试——计算"<<endl;
	cout<<"顾名思义，就是计算题目。"<<endl;
	printf("请输入您需要测试的题目\n");
	for(int i=1;i<=2;++i)
	printf("%7d.%s\n",i,cc[i]);
	while(a<'1'||a>'3') a=getch();qing;a-='0';
	printf("\n您已选择%s\n",cc[a]);
	printf("请输入您要测试的题目数量(不得超过100):");
	int b;
	cin>>b;
	while(b>100)
	{
		qing;
		printf("测试题目数量不得超过100！！！\n"); 
		printf("您已选择%s\n",cc[a]);
		printf("请输入您要测试的题目数量(不得超过100):");
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
	printf("请输入您要质因数分解的数（输入0视为退出）："); 
	scanf("%d",&n);
	if(n==0) return 0;
	fj(n,1);
	stop;
    zysfj(a);
}
int pss(int a)
{
	int n;qing; 
	printf("请输入您要判断是否是素数的数（输入0视为退出）："); 
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
		cout<<"您要打开新oj还是旧oj？"<<endl;
		cout<<"1.新oj    2.旧oj   0.不用了"<<endl;
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
	cout<<"请输入您要求最大公因数的两个数（输入两个0视为退出）：";
	cin>>a>>b;
	if(a==0&&b==0) return ;
	printf("(%d,%d)=%d\n",a,b,__gcd(a,b));
	stop;gcd();
}
void lcm()
{
	long long int a,b;qing;
	cout<<"请输入您要求最小公倍数的两个数（输入两个0视为退出）：";
	cin>>a>>b;
	if(a==0&&b==0) return ;
	printf("[%d,%d]=%d\n",a,b,a/__gcd(a,b)*b);
	stop;lcm();
}
void hax()
{
	int a;qing;
	cout<<"请输入您要求画爱心的尺寸：";
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
	cout<<"请输入您要计算的算式(输入0退出)："<<endl<<"           ";
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
	cout<<"           数列排序"<<endl;
	cout<<"请输入待排序数列的长度（输入0视为退出）：";cin>>n;
	if(n==0) return;
	cout<<endl<<"请输入待排序数列：";for(int i=1;i<=n;++i) scanf("%d",aa+i);
	sort(aa+1,aa+n+1);
	cout<<"排序之后的数列：";for(int i=1;i<=n;++i) printf("%d ",aa[i]);printf("\n");
	stop;
	slpx();
	return;
}
struct tim1{
	int y,m,d;
	void read(int tot,tim1 a)
	{
		if(tot==1) cout<<"请输入起始时间：";
		else if(tot==2) cout<<"请输入结束时间：";
		else if(tot==3) cout<<"请输入过了多久：";
		scanf("%d %d %d",&y,&m,&d);
		if(y>=24||m>=60||d>=60)
		{
			qing;cout<<"输入不合法！！！"<<endl;Sleep(4000);qing;
			if(tot!=1)
			{
				printf("请输入起始时间：%d %d %d\n",a.y,a.m,a.d);
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
	cout<<"您的答案是：";ans.print();
	return ;
}
void sjh()
{
	tim1 a,b,a1,b1,ans;
	jiazai();
	a.read(1,a),b.read(3,a);
	if(!bi(a,b)) swapp(a,b);
	ans=he(a,b);
	cout<<"您的答案是：";ans.print();
	return ;
}
char wen[101][201]={"","这是什么东西？","它有什么用？                          ","怎么使用它呢？            ","使用它需要什么软件吗？",
					"","","","","","","","",""},
     da[101][201]= {"","智能服务系统。","在许多方面帮助你，比如：娱乐、数学等。","按照他提示你的去做就行啦。","不需要，一台电脑即可。",
					"","","","","","","","",""};
int ti=7;
void QA(int ye)
{
	qing;cout<<endl<<endl<<endl;kuan=22;
	tou();
	shuk();cout<<"   |                                    常见问题Q&A                       ";shus(kuan);
	shuk();cout<<"   |                                                                      ";shus(kuan);
	shuk();
	for(int i=1+ye*4-4;i<=ye*4;++i)
	{
		printf("   |      %2d.  Q: ",i);cout<<wen[i];shus(kuan+56-strlen(wen[i]));
		cout<<"   |           A: ";cout<<da[i];shus(kuan+56-strlen(da[i]));shuk();
	}
	shuk();shuk();cout<<"   |         0.退出                                                       ";shus(kuan);
	shuk();printf("   |                      第%d页（共1页）             （按A或D翻页）       ",ye);shus(kuan);
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
	cout<<"这是一个关于走迷宫加寻宝的软件"<<endl;
	cout<<"你需要在迷宫中找到宝藏并将其带回入口"<<endl;
	cout<<"没有步数限制，但是每一扇门走过之后都会关掉"<<endl;
	cout<<"加油，努力找到宝藏吧！！！"<<endl; 
	cout<<"效果图："<<endl;
	cout<<" -------------------------------------------- "<<endl;
	cout<<"|             □□                □□       |"<<endl;
	cout<<"|             □□                □□       |"<<endl;
	cout<<"|             □□                □□       |"<<endl;
	cout<<"|   □□□□□□□□□□□□□□□□□□□   |"<<endl;
	cout<<"|             □□                □□       |"<<endl;
	cout<<"|             □□                □□       |"<<endl;
	cout<<"|             □□                □□       |"<<endl;
	cout<<"|                 ①              □□       |"<<endl;
	cout<<"|             □□                □□       |"<<endl;
	cout<<"|             □□                □□       |"<<endl;
	cout<<"|             □□                □□       |"<<endl;
	cout<<"|   □□□□□□□□□□□□□□□□□□□   |"<<endl;
	cout<<"|             □□                □□       |"<<endl;
	cout<<"|             □□                □□       |"<<endl;
	cout<<"|             □□                □□       |"<<endl;
	cout<<"|             □□                           |"<<endl;
	cout<<"|             □□                □□       |"<<endl;
	cout<<"|             □□                □□       |"<<endl;
	cout<<"|             □□                □□       |"<<endl;
	cout<<"|   □□□□□□□□□□□□□□□□□□□   |"<<endl;
	cout<<"|             □□                □□       |"<<endl;
	cout<<" -------------------------------------------- "<<endl;
	cout<<"按1表示进入，其他键表示退出"<<endl;
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
