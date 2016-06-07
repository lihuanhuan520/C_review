1.用c语言编写程序，在屏幕上输出“hello world”

#include<stdio.h>

int main()
{
	printf("hello world!!!\n");
	return 0;
}

2.使用c语言编写程序，计算1,2,3,4,5···100这100个数的和。

#include<stdio.h>
int main()
{
	int i = 1;
	int sum = 0;
	for (; i <= 100; i++)
	{
		sum += i;
	}
	printf("The sum is %d \n", sum);
	return 0;
}

3.使用c语言编写程序，在屏幕打印 9 * 9乘法表

#include<stdio.h>

int main()
{
	int i = 0;
	int j = 0;
	for (i = 1; i < 10; i++)
	{
		for (j = 1; j <= i; j++)  //注意条件的判断
		{
			printf("\t%d*%d =%d", i, j, i*j);//垂直制表符 用于各列对齐
		}
		printf("\n");
	}
	printf("\n");
	return 0;
}

4.使用c语言编写程序，求10个整数中的最大值

#include<stdio.h>

int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	int max = 0;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	printf("The max is %d \n", max);
	return 0;
}

6.使用c语言编写程序，求100以内的所有素数(质数)

#include<stdio.h>

int main()
{
	int i = 2;
	int count = 0;
	printf("100内的素数有：\n");
	for (i = 2; i <= 100; i++)
	{
		int j = 2;
		while (j < i)
		{
			if (i % j != 0)
			{
				j++;
			}
			else
			{
				break;
			}
		}
		if (j >= i )
		{
			count++;
			printf("%d ", i);
		}
	}

	printf("\n总个数为: %d 个", count);
	printf("\n");
	return 0;
}

7.使用c语言编写程序，求两个数的最大公约数

#include<stdio.h>

void swap(int* m, int* n)
{
	int tmp = 0;
	tmp = *m;
	*m = *n;
	*n = tmp;
}
int main()
{
	int m = 0;
	int n = 0;
	int r = 1;
	int j = 0;
	printf("请输入两个数：\n");
	scanf("%d %d", &m, &n);
	j = m*n;
	if (m<n)
	{
		swap(&m, &n);
	}

	if (m % n == 0 && n != 0)
	{
			printf("最大公约数为: %d\n", n);
		return 0;
	}
	else
	{
		while (m % n != 0 && n !=0)
		{
			r = m%n;
			m = n;
			n = r;
		}
		
	}
	printf("最大公约数为: %d\n",r);
	return 0;
}

8.使用C语言编写程序，求两个数的最小公倍数

#include<stdio.h>

void swap(int* a, int* b)
{
	int tmp = 0;
	if (*a < *b)
	{	
		tmp = *a;
		*a = *b;
		*b = tmp;
	}
}

int main()
{
	int a = 0;
	int b = 0;
	int r = 1;
	int m = 0;
	printf("请输入两个数：\n");
	scanf("%d %d", &a, &b);
	m = a*b;
	if (a < b)
	{
		swap(&a, &b);
	}
	if (a % b == 0 && b != 0)
	{
		if (a == b)
		{
			printf("a,b 的最小公倍数为：%d \n", a);
		}
		return 1;
	}
	else
	{
		while (a % b != 0 && b !=0)
		{
			r = a%b;
			a = b;
			b = r;
		}
		m = m / r;
		printf("a,b 的最小公倍数为 ：%d\n", m);
	}

	return 0;
}

 9、使用c语言编写程序，交换两整数的值

#include<stdio.h>

int main()
{
	int a = 2;
	int b = 3;
	printf("a: %d	b: %d\n", a, b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("a: %d	b: %d\n", a, b);

	printf("a: %d	b: %d\n", a, b);
	a = a * b;
	b = a / b;
	a = a / b;
	printf("a: %d	b: %d\n", a, b);

	printf("a: %d	b: %d\n", a, b);
	a = a ^ b;  //10 ^ 11 = 01
	b = a ^ b;  //01 ^ 11 = 10
	a = a ^ b;	//01 ^ 10 = 11
	printf("a: %d	b: %d\n", a, b);
	return 0;
}

10、使用C语言编写一个函数，函数的功能是：交换两个整数的值

#include<stdio.h>
void Swap(int* s, int* p)
{
	int tmp = *s;
	*s = *p;
	*p = tmp;
}
int main()
{
	int a = 2;
	int b = 3;
	printf("before change:	a: %d	b: %d\n", a, b);
	Swap(&a, &b);
	printf("after change:	a: %d	b: %d\n", a, b);
	return 0;
}


11.有1 2 3 4  四个数字，能组成多少互不相同且无重复数字的 三位数？都是多少？

程序分析：可填在百位，十位，个位的数字都是1 2 3 4 组成所有的排列后再去掉不满足条件的


#include<stdio.h>

int main()

{
	int n = 0;
	int m = 0;
	int k = 0;
	int i = 5;
	int h = 5;
	int l = 5;
	int j = 0;
	int count = 0;
	int arr[100];
	for (i = 1; i <= 4;i++)
	{
		n = i * 100;
		for (h = 1; h <= 4; h++)
		{
			m = h * 10;
			for (l = 1; l <= 4; l++)
			{
				k = l * 1;
				arr[j] = n + m + k;
				j++;
			}
		}
	}

	for (j = 0; j < 64; j++)//123
	{
		k = arr[j] % 10;		//个位
		n = arr[j] / 100;		//百位
		l = arr[j] % 100 / 10;	//十位
		if (k != n && k != l && n != l )
		{
			count++;
			printf("%d ", arr[j]);
		}
	}

	printf("\n count : %d \n", count);
	return 0;
}


12.使用C语言编写程序，在屏幕输出2000之前的所有闰年和闰年的个数

#include<stdio.h>

int main()
{
	int year = 0;
	int count = 0;
	for (year = 1; year <= 2000; year++)
	{
		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		{
			count++;
			printf("%d ", year);
		}
	}
	printf("\n");
	printf("count : %d\n", count);
	printf("\n");
	return 0;
}


13、写程序 求解2/1,3/2,5/3,8/5,21/13...求这个数列的前20项之和。

#include<stdio.h>

int main()
{
	int m = 1;
	int n = 2;
	int sum = 0;
	for (int i = 0; i < 20; i++)
	{
		sum = sum + n / m;
		m = n;
		n = m + n;
	}
	printf("sum is %d\n", sum);
	return 0;
}

华氏 温度   摄氏温度  转换
#include<stdio.h>

int main()
{
	float F;
	float C;
	printf("Please input Fahrenheit:\n");
	scanf("%f", &F);
	C = 5 * (F - 32) / 9;
	printf("Centidegree is %.2f \n", C);
	return 0;
}


#include<stdio.h>

int main()
{
	int score = 0;
	printf("Input score(0-100):\n");
	scanf("%d", &score);
	if (score < 60)
	{
		printf("%c\n", 'E');
		return;
	}
	if (score >= 60 && score <= 69)
	{
		printf("%c\n", 'D');
		return;
	}
	if (score >= 70 && score <= 79)
	{
		printf("%c\n", 'C');
		return;
	}
	if (score >= 80 && score <= 89)
	{
		printf("%c\n", 'B');
		return;
	}
	if (score >= 90 && score <= 100)
	{
		printf("%c\n", 'A');
		return;
	}
	else
	{
		printf("Input error!\n");
	}
	return 0;
}

14、求解s = a+aa+aaa+……+aaa..a的值 a和n由键盘输入控制
#include<stdio.h>

int Sum(int a, int n)
{
	int A = 0;
	int Sum = 0;
	for (int i = 1; i <= n; i++)
	{
		A = A * 10 + a;
		Sum = Sum + A;
	}
	return Sum;
}

int main()
{
	int a = 0;
	int n = 0;
	printf("Please input a and n\n");
	scanf("%d %d", &a, &n);
	int ret = Sum(a, n);
	printf("%d\n", ret);
	return 0;
}

15、一球从100米高度落下，每次反弹高度为原高度的一半；在落下，求第十次落地时，共经过多少米？第十次反弹多高？

#include<stdio.h>

int main()
{
	int H = 100;
	int i = H;
	int n = 10;
	int sum = 0;
	int count = 0;
	while (i)
	{
		count++;
		i /= 2;
	}
	printf("总共能跳 %d 次\n", count);
	while (n--)
	{
		sum += H;
		H /= 2;

		if (H == 0)
		{
			break;
		}
	}
	printf("sum is %d \n", sum);
	printf("H is %d \n", H);
	return 0;
}


16、猴子吃桃问题：第一天摘下若干桃子，吃了一半，没过瘾，又多吃了一个，以后每天如此，到第十天时，只剩一个桃子，求总共多少桃子？
设有x个桃子，x - ((x/2+1) + ((x/2+1)/2 +1) +……+1 )= 0

#include<stdio.h>
int main()
{
	int day = 9;
	int sum = 1;
	while (day--)
	{
		sum= (sum + 1) * 2;
	}
	printf("sum is %d\n", sum);
	return 0;
}


17、求值: 1-1/2+1/3-1/4+……-1/100	★★★

#include<stdio.h>
int main()
{
	float sum = 0;
	for (int i = 1; i <= 100; i++)
	{
		if (i % 2 != 0)
		{
			sum += (float)1 / i; //强转
		}
		else
		{
			sum -= (float)1 / i;
		}
	}
	printf("sum is %f \n", sum);
	return 0;
}

18、求值： !1+!2+……+!20

#include<stdio.h>

int main()
{
	int n = 5;
	int mul = 1;
	int sum = 0;
	for (int i = 1; i <= n; i++)
	{
		mul = 1;						//注意每次进来mul置1
		for (int j = 1; j <= i; j++)
		{
			mul *= j;
		}
		sum += mul;
	}
	printf("sum is %d \n", sum);
	return 0;
}

19、判断一个数是不是回文数 (回文数也是一个数字，特点是正反序是同一个数字 如：1234321 1331就是回文数)
思路：因为是整数，所以可以求出该整数的翻转后的数值，看是否与原来整数相等。如果相等，则是回文数，否则不是。
		翻转整数代码如下，返回值为翻转后的整数。

#include<stdio.h>

int main()
{
	int a = 0;
	int rev = 0;
	printf("Please input :\n");			//1、itoa() 转换为字符串
	scanf("%d", &a);
	int b = a;
/****************************************************************************/
	//while (a != 0)
	//{
	//	rev = rev * 10 + a % 10;	//2、数字反转法
	//	a /= 10;
	//}
	//if (b == rev)
	//{
	//	printf("是回文数！\n");
	//	return 0;
	//}
	//printf("不是回文数！\n");
/****************************************************************************/
	//比较第一位和最后一位 相等 继续比较  不相等返回
	int div = 1;
	while (a / div >= 10)
	{
		div *= 10;
	}
	while (a != 0)
	{
		int left = a / div;
		int right = a % 10;		//3、数字位判断
		if (left != right)
		{
			printf("不是回文数！\n");
			return 0;
		}
		a = (a % div) / 10;
		div /= 100;
	}

	printf("是回文数！\n");
/****************************************************************************/
	return 0;
}


20、判断一个字符串是不是回文字符串

#include<stdio.h>
#include<string.h>
int main()
{
	char s[50];
	printf("Please input :\n");			
	scanf("%s", s);
	int len = strlen(s) -1;
	char* begin = s;
	char* end = s + len;

	while (begin <= end)
	{
		if (*begin != *end)
		{
			printf("不是回文字符串！\n");
			return 0;
		}
		begin++;
		end--;
	}
	printf("是回文字符串！\n");
	return 0;
}

21、求一个3*3矩阵对角线元素之和

#include<stdio.h>
int main()
{
	int arr[3][3] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
	int i = 0;
	int j = 0;
	int sum = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (i == j || i+2 ==j || j+2 ==i)
			{
				sum += arr[i][j];
			}
		}
	}
	printf("对角线之和为： %d\n", sum);
	return 0;
}

22、整型数组逆序

#include<stdio.h>
void Swap(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int main()
{
	int arr[] = { 1, 2, 3, 4, 5 };
	int len = sizeof(arr) / sizeof(arr[0]);
	int* begin = arr;
	int* end = arr + len - 1;
	for (int i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	while (begin < end)
	{
		Swap(begin, end);
		begin++;
		end--;
	}
	for (int i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}

23、冒泡排序 2016-5-31 23:43:26

#include<stdio.h>

int main()
{
	int arr[] = { 2, 4, 3, 1, 0, 6, 9, 7, 8, 5 };
	int len = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	for (int i = 0; i < len ; i++)
	{
		int flag = 0;
		for (int j = i; j < len; j++)	//★★★★
		{
			if (arr[j] < arr[i])
			{
				int tmp = arr[j];
				arr[j] = arr[i];
				arr[i] = tmp;
				flag = 1;
			}
		}
		if (flag == 0)
		{
			break;
		}
	}

	for (int i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}


24、将多个字符串排序输出

#include<stdio.h>
#include<assert.h>
void Compare(char* p, char* q)
{
	assert(p);
	assert(q);
	char* str = q;
	char* ptr = p;
	while (*str++ != '\0' && *ptr++ != '\0')
	{
		if (*str > *ptr)
		{
			printf("%s\n", q);
			printf("%s\n", p);
			break;
		}
		else if (*str < *ptr)
		{
			printf("%s\n", p);
			printf("%s\n", q);
			break;
		}
	}
	if (*str == '\0' && *ptr != '\0')

	{
		printf("%s\n", p);
		printf("%s\n", q);

	}
	else if (*ptr == '\0' && *str != '\0')
	{
		printf("%s\n", q);
		printf("%s\n", p);
	}
}

int main()
{
	char* p = "hello";
	char* s = "bit-tech";
	Compare(s, p);
	return 0;
}

25、递归求斐波那契数列第n个值
int Fibonacci(int n)
{
	int i = 1;
	int j = 1;
	if (n == 0)
	{
		printf("input error!\n");
		return -1;
	}
	if (n == 1)
	{
		return i;
	}
	if (n == 2)
	{
		return j;
	}

	return Fibonacci(n - 1) + Fibonacci(n - 2);
}


int main()
{
	int x = 0;
	printf("Please Enter a number:\n");
	scanf("%d", &x);
	int ret = Fibonacci(x);
	printf("%d\n", ret);
	return 0;
}

26、非递归求斐波那契数列第n个值
#include<stdio.h>
int Fibonacci(int n)
{
	int i = 1;
	int j = 1;
	int sum = 0;
	if (n == 1)
	{
		i = 1;
		return i;
	}
	if (n == 2)
	{
		j = 1;
		return j;
	}
	while (n > 2)
	{
		sum = i + j;
		i = j;
		j = sum;
		n--;
	}
	return sum;
}
int main()
{
	int x = 0;
	printf("Please Enter a number:\n");
	scanf("%d", &x);
	int ret = Fibonacci(x);
	printf("%d\n", ret);
	return 0;
}


27、编写一个函数，求字符串的长度
#include<stdio.h>
#include<assert.h>

int my_strlen(const char* p)
{
	assert(p);
	char* s = p;
	int count = 0;
	while (*s++ != '\0')
	{
		count++;
	}
	return count;
}

int main()
{
	char* str = "abcdefgh";
	int ret = my_strlen(str);
	printf("The length of str is  %d \n", ret);
	return 0;
}


28、不允许使用临时变量，求一个字符串的长度  递归
#include<stdio.h>
#include<assert.h>
int my_strlen(char* p)
{
	assert(p);
	if (*p == '\0')
	{
		return 0;
	}
	return my_strlen(p + 1) + 1;
}

int main()
{
	char* str = "abcdefgh";
	int ret = my_strlen(str);
	printf("The length of str is  %d \n", ret);
	return 0;
}

29、对一个整型数组排序 选择排序

#include<stdio.h>

void SelectSort(int* arr, int len)
{
	int min = 0;
	for (int i = 0; i < len; i++)
	{
		min = i;
		for (int j = i; j < len; j++)
		{
			if (arr[j] < arr[min])
			{
				min = j;
			}
		}
		if (min != i)
		{
			int tmp = arr[min];
			arr[min] = arr[i];
			arr[i] = tmp;
		}
	}
}

int main()
{
	int i = 0;
	int* arr[] = { 4, 8, 0, 9, 6, 2, 1, 0, 1, 7, 3, 5 };
	int len = sizeof(arr) / sizeof(arr[0]);
	SelectSort(arr, len);
	for (int i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}

30、谷歌笔试题  求一个数二进制序列中1的个数 (可不断优化)

#include<stdio.h>

int main()
{
	int a = 255;
	int n = 32;
	int count = 0;
	while (n--)
	{
		if (a & 1 == 1)
		{
			count++;
		}
		a >>= 1;
	}
	printf("%d\n", count);
	return 0;
}

31、百度笔试题 编写程序判断你的电脑是大端存储还是小端存储

/***********************************************************/
#include<stdio.h>

int main()
{
	int a = 1;
	char* c = (char*)&a;			//指针法
	
	if (*c == 1)
	{
		printf("小端存储\n");
	}
	else
	{
		printf("大端存储\n");
	}
	return 0;
}
/***********************************************************/
#include<stdio.h>

union UN
{
	int a;
	char c;
};
int main()
{
	union UN un;
	un.a = 1;
	if (un.c == 1)
	{
		printf("小端存储\n");
	}
	else
	{
		printf("大端存储\n");
	}
	return 0;
}

求1-100这100个整数中9出现的次数

#include<stdio.h>

int main()
{
	int count = 0;
	for (int i = 1; i <= 100; i++)
	{
		if (i % 10 == 9 )
		{
			printf("%d ", i);
			count++;
		}
		if (i / 10 == 9)
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\n9出现的次数为： %d\n", count);
	return 0;
}

34、程序输入一个整数，输出该整数的每一位

#include<stdio.h>

int main()
{
	int a = 0;
	int arr[20];
	int i = 0;
	printf("Please Enter a Number: \n");
	scanf("%d",&a);

	while (a)
	{
		arr[i] = a % 10;
		a /= 10;
		i++;
	}

	for (int j = i - 1; j >= 0; j--)
	{
		printf("%d ", arr[j]);
	}
	printf("\n");
	return 0;
}


35、在字符串查找一个指定的字符第一次出现的位置，并返回字符所在的位置，如果不存在则返回NULL

#include<stdio.h>
#include<assert.h>
char* FindChar(const char* s, const char c)
{
	assert(s);
	char* p = s;
	while (*p++ != '\0')
	{
		if (*p == c)
		{
			break;
		}
	}
	if (*p == '\0')
	{
		return NULL;
	}
	return p;
}

int main()
{
	char* str = "abcedefghe";
	char c = 'e';
	char* ret = FindChar(str,c);
	printf("%s\n", ret);
	return 0;
}


36、字符数组内容逆序

#include<stdio.h>
#include<assert.h>
void Reverse(char* ptr,int len)
{
	assert(ptr);
	int begin = 0;
	int end = len - 2;
	while (begin < end)
	{
		char tmp = ptr[begin];
		ptr[begin] = ptr[end];
		ptr[end] = tmp;
		begin++;
		end--;
	}
	ptr[len - 1] = '\0';
}
int main()
{
	char arr[] = "bit-tech";
	int len = sizeof(arr) / sizeof(arr[0]);
	Reverse(arr,len);
	printf("%s\n", arr);
	return 0;
}

37、使用C语言编写一个函数，它从一个字符串提取一个子字符串，函数原型如下：
int sub(char dst[],char src[],int start,int len)
从src向后偏移start个字符的位置开始，最多复制len个非空字符 ，复制完毕后，以NULL结尾，返回值为dst的长度

#include<stdio.h>
#include<assert.h>
int substr(char dst[], char src[], int start, int len)
{
	assert(dst);
	assert(src);
	char* d = dst;
	char* s = src;
	int count = 0;
	while (start--)
	{
		s++;
	}
	while (len--)
	{
		while (*s == ' ')//★★★注意此处
		{
			s++;
		}
		*d = *s;
		s++;
		d++;
		count++;
	}
	*d = '\0';
	return count;
}
int main()
{
	char str[] = "hello  world,   change world";
	char ptr[50];
	int length = sizeof(str) / sizeof(str[0]);
	int start = 3;
	int len = 12;
	if (length < start + len)
	{
		printf("input error!\n");
		return -1;
	}
	int ret = substr(ptr, str, 3, 12);
	printf("%d\n", ret);
	printf("%s\n", ptr);
	return 0;
}


38、从标准输入读入字符，并把它们写到标准输出，除了大写字母变成小写字母之外，其他的原样输出

#include<stdio.h>

int main()
{
	while (1)
	{
	
		char c;
		printf("Please Enter a char: \n");

		scanf(" %c", &c);//取消输入的回车 在%c 前面加空格

		if (c >= 'A' && c <= 'Z')
		{
			printf("%c\n", c + 32);
		}
		else
		{
			printf("%c\n", c);
		}
	}
	return 0;
}


39、当输如入a，输出Z，输入b，输出Y，以此类推，输入z，输出A
           
#include<stdio.h>

int main()
{
	while (1)
	{
		char c;
		printf("Please Enter a char: \n");

		scanf(" %c", &c);//取消输入的回车 在%c 前面加空格

		if (c >= 'a' && c <= 'z')
		{
			printf("%c\n", 187-c);
		}
		else
		{
			printf("%c\n", c);
		}
	}
	return 0;
}

40、字符串拷贝函数

#include<stdio.h>
#include<assert.h>
char* my_strcpy(char* dst, const char* src)
{
	assert(dst);
	assert(src);
	char* d = dst;
	char* s = src;
	while (*s != '\0')
	{
		*d++ = *s++;
	}
	*d = '\0';
}
int main()
{
	const char* str = "hello,bit";
	char ptr[20];
	char* ret = my_strcpy(ptr, str);
	printf("%s\n", ret);
	return 0;
}

41、实现字符串连接，类似于strcat

#include<stdio.h>
#include<assert.h>

char* my_strcat(char* dst, const char* src)
{
	assert(dst);
	assert(src);
	char* d = dst;
	char* s = src;
	
	while (*d != '\0')
	{
		d++;
	}
	while (*s != '\0')
	{
		*d++ = *s++;
	}
	*d = '\0';
	return dst;
}


int main()
{
	char str[20] = "hello ";
	const char* ptr = "bit";
	char* ret = my_strcat(str, ptr);
	printf("%s\n", ret);
	return 0;
}


42、实现字符串比较，类似于strcmp

#include<stdio.h>
#include<assert.h>

int my_strcmp(const char* str1,const char* str2)
{
	assert(str1);
	assert(str2);
	char* s1 = str1;
	char* s2 = str2;

	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 > *s2)
		{
			return 1;
		}
		else if (*s1 < *s2)
		{
			return -1;
		}
		else
		{
			s1++;
			s2++;
		}
	}
	if (*s1 == '\0' && *s2 == '\0')
	{
		return 0;
	}
	if (*s1 == '\0')
	{
		return -1;
	}
	if (*s2 != '\0')
	{
		return 1;
	}
}
int main()
{
	const char* str1 = "hello";
	const char* str2 = "hello";
	int ret = my_strcmp(str1, str2);
	printf("%d\n", ret);
	return 0;
}

43、实现内存拷贝，功能类似于memcpy，可以不实现内存重叠拷贝，不能使用任何库函数
dest比src低，则可以从s头开始拷贝； dest比src高，则为了保证s的数据不会被覆盖，所以要从s的末尾开始拷贝
#include<stdio.h>
#include<assert.h>

void* my_memcpy(void* dest,const void* src, size_t size)
{
	assert(dest);
	assert(src);

	if (dest <= src)
	{
		char* d = (char*)dest;
		char* s = (char*)src;
		while (size--)
		{
			*d++ = *s++;
		}
	}
	else             
	{
		char* d = (char*)dest + size;
		char* s = (char*)src + size;
		while (size--)
		{
			*d-- = *s--;
		}
	}
	return dest;
}
int main()
{
	char str[] = "hello world";
	char ptr[20];
	my_memcpy(ptr, str, 10);

	return 0;
}

实现内存的移动，功能类似于memmove，实现内存重叠拷贝，不能使用任何库函数
#include<stdio.h>
#include<assert.h>

void* my_memmove(void* dest, const void* src, size_t size)
{
	assert(dest);
	assert(src);

	if ((char*)dest <= (char*)src || (char*)dest >= ((char*)src + size))//不交叉
	{
		char* d = (char*)dest;
		char* s = (char*)src;
		while (size--)
		{
			*d++ = *s++;
		}
	}
	else					//交叉
	{
		char* d = (char*)dest + size -1;
		char* s = (char*)src + size -1;
		while (size--)
		{
			*d-- = *s--;
		}
	}
	return dest;
}
int main()
{
	char str[] = "hello world";
	char ptr[20];
	my_memmove(ptr, str, 10);

	return 0;
}


45、实现内存的设置，功能类似于memset，以字节设置内存的值

#include<stdio.h>
#include<assert.h>
void* my_memset(void* str,char c, size_t size)
{
	assert(str);
	char* s = (char*)str;
	while (size--)
	{
		*s++ = c;
	}
	return str;
}
int main()
{
	char s[] = "hello world";
	printf("%s\n", s);
	my_memset(s,'0', 11);
	printf("%s\n", s);
	return 0;
}





47、一元一瓶汽水，喝完后两个空瓶子换一瓶汽水，问：有20块钱，最多可以喝多少瓶水？
#include <stdio.h>
int money(double money, int sum)
{
	while (money >= 1)
	{
		sum = sum + (int)money;
		money = ((int)money) * 0.5 + money - (int)money;
		printf("money = %f\n", money);
	}
	return sum;
}
void main()
{
	int sum = 0;
	sum = money(20.0, 0);
	printf("%d\n", sum);
}


48、一个函数求任意多个整数的平均值(使用可变参数列表)
可变参数列表作用：可以处理任意多的参数。
可变参数列表实现方法：可变参数列表是通过宏来实现的，这些宏定义于stdarg.h头文件中，它是标准库的一部分。
这个头文件声明一个类型va_list 和三个宏va_start、va_arg和va_end。
我们可以声明一个类型为va_list的变量，与这几个宏配合使用，访问参数。
各个变量的作用：
声明一个va_list 类型的变量arg，它用于访问参数列表的未确定部分，这个变量是调用va_start来初始化的，
它的第一个参数是va_list的变量名，第2个参数是省略号前最后一个有名字的参数。
初始化过程把arg变量设置为指向可变参数部分的第一个参数。
为了访问参数，需要使用va_arg，这个宏接受两个参数：va_list变量和参数列表中下一个参数的类型。
va_arg返回这个参数的值，并使用va_arg指向下一个可变参数。
最后，当访问完毕最后一个可变参数之后，我们需要调用va_end。
#include<stdio.h>
#include<stdarg.h>

int average(int val, ...)
{
	va_list arg;
	int count = 0;
	int sum = 0;

	va_start(arg, val);
	for (count = 0; count < val; count++)
	{
		sum += va_arg(arg, int);
	}
	va_end(arg);
	
	return sum / val;
}
int main()
{
	int ret = average(3, 2, 4, 6);
	printf("平均数为：%d\n", ret);
	return 0;
}

49、有一个字符串是 student a am i ,现将字符串转换为 i am a student 空间复杂度为 :O(1)


#include<stdio.h>
#include<assert.h>
void my_reverse(char* left,char* right)
{
	assert(left);
	assert(right);

	while (left < right)
	{
		char tmp = *left;
		*left =  *right;
		*right = tmp;
		left++;
		right--;
	}
}

int my_strlen(char *str)//得到数组长度定义求取字符串长度的函数
{
	assert(str);
	int count = 0;
	while (*str++)
	{
		count++;
	}
	return count;
}

void Reverse(char s[])
{
	assert(s);
	char* start = s;
	char* end = s + my_strlen(s)-1;
	char* cur = NULL;

	my_reverse(start,end);

	while (*s)
	{
		cur = s;
		while (*s != '\0' && *s != ' ')
		{
			s++;
		}
		end = s - 1;
		my_reverse(cur, end);
		if (*s == ' ')
		{
			s++;
		}
	}
}

int main()
{
	char s[] = "student a am i";
	Reverse(s);
	printf("%s\n", s);
	return 0;
}


50、百度笔试题  使用c语言编写函数 unsigned int reverse_bit(unsigned int value);
这个函数的返回值value的二进制模式从左到右翻转后的值
00000000000000000000000000011001  翻转前  25
10011000000000000000000000000000  翻转后
程序结果返回： 2550136832  
#include<stdio.h>

int reverse_bit(unsigned int value)
{
	int ret = 0;
	int bit = 0;
	for (int i = 0; i < 32; i++)
	{
		ret = ret << 1;		//左移一位，保存前一位  
		bit = value & 1;	//取出最后一位  
		value = value >> 1;	//值右移，取下一位  
		ret = bit | ret;	//最后一位赋给ret  
	}
	return ret;
}

int main()
{
	unsigned int value = 25;
	unsigned int ret = reverse_bit(value);
	printf("%u\n", ret);
	return 0;
}




46、将一个数字字符串转换成对应的数字，不考虑溢出 功能库函数atof 考虑异常输入

#include<stdio.h>
#include<ctype.h>//★★★★★有问题
double my_atof(char* str)
{
	double val, power;
	int i, sign;

	for (i = 0; isspace(str[i]); i++)//提出前面的空格
	{
		;
	}
	sign = (str[i] == '-') ? -1 : 1;
	for (val = 0.0; isdigit(str[i]); i++)
	{
		val = 10.0 * val + str[i] - '0';
	}
	if (str[i] == '.')
	{
		i++;
	}
	for (power = 1.0; isdigit(str[i]); i++)
	{
		val = 10.0 * val + str[i] - '0';
		power = power / 10.0;
	}
	return sign * val / power;
}