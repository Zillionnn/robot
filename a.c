#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
/*
本程序实现自动搜索功能，首先是使用 ShellExecuteA() 打开浏览器，然后用键盘输入 
（调用search())keybd_event()进行输入，最后一个 keybd_event(0x0d, 0, 0, 0); 回车进行查询。
然后使用：clik()函数，先把鼠标定位到（SetCursorPos(200,200);） 要查询的位置，
再使用：mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0,0); 左键按下（即单击）完成查询工作。
*/
void openIE()
{	//异步打开浏览器
	//参数1：指定父窗口、参数2：操作动作 譬如: open、runas、print、edit、explore、find
	//参数3：指定要打开的文件或程序路径、 参数4：给要打开的程序的参数，如果要打开的是文件这里可以是NULL
	//参数5：缺省目录、 参数6：打开选项（0:隐藏。1：用最近的大小和位置，激活。2：最小化。3：最大化，激活。4：用最近的大小、位置，但不激活。6：最小化，不激活。
	ShellExecuteA(0, "open", "http://www.baidu.com", 0, 0, 1);
}
 
//鼠标点击
void click()
{
	//该函数把光标移到屏幕的指定位置
	SetCursorPos(200,250);
	//鼠标单击
	mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0,0); //左键按下
	mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);  //左键松开
}
//使用键盘输入要查询的关键词。
void search()
{
	//键盘输入
	keybd_event('J', 0, 0, 0); //按下
	keybd_event('J', 0, 2, 0); //松开
	Sleep(500);
	keybd_event('A', 0, 0, 0); //按下
	keybd_event('A', 0, 2, 0); //松开
	Sleep(500);
	keybd_event('V', 0, 0, 0); //按下
	keybd_event('V', 0, 2, 0); //松开
	Sleep(500);
	keybd_event('A', 0, 0, 0); //按下
	keybd_event('A', 0, 2, 0); //松开
	Sleep(500);
 
	//回车
	keybd_event(0x0d, 0, 0, 0);
	keybd_event(0x0d, 0, 2, 0);
	Sleep(500);
}
 
void main()
{
	//打开IE浏览器
	openIE();
	Sleep(3000);
	//输入要查询的关键字
	search();
	Sleep(1000);
	//设置位置点击查询
	click();
	Sleep(2000);
 
	system("pause");
}