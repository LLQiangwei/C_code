//题目内容：编写程序，从键盘输入任意一个3位正整数，计算并输出它的逆序数。
//例如，输入123，由123分离出其百位1、十位2、个位3，然后计算3*100+2*10+1 = 321，并输出321。
//提示：用%10可以得到个位数，用/100可以得到百位数。
//输入格式:%d
//输出格式："y=%d\n"
//输入样例：123
//输出样例：y=321
//
//#include<stdio.h>
//
//int main()
//{
//	int x,y,a,b,c;
//    scanf("%d",&x);
//	a=x/100;
//	c=x%10;
//	b=(x-a*100-c)/10;
//	y=a+b*10+c*100;
//	printf("y=%d\n",y);
//}