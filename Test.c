1.��c���Ա�д��������Ļ�������hello world��

#include<stdio.h>

int main()
{
	printf("hello world!!!\n");
	return 0;
}

2.ʹ��c���Ա�д���򣬼���1,2,3,4,5������100��100�����ĺ͡�

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

3.ʹ��c���Ա�д��������Ļ��ӡ 9 * 9�˷���

#include<stdio.h>

int main()
{
	int i = 0;
	int j = 0;
	for (i = 1; i < 10; i++)
	{
		for (j = 1; j <= i; j++)  //ע���������ж�
		{
			printf("\t%d*%d =%d", i, j, i*j);//��ֱ�Ʊ�� ���ڸ��ж���
		}
		printf("\n");
	}
	printf("\n");
	return 0;
}

4.ʹ��c���Ա�д������10�������е����ֵ

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

6.ʹ��c���Ա�д������100���ڵ���������(����)

#include<stdio.h>

int main()
{
	int i = 2;
	int count = 0;
	printf("100�ڵ������У�\n");
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

	printf("\n�ܸ���Ϊ: %d ��", count);
	printf("\n");
	return 0;
}

7.ʹ��c���Ա�д�����������������Լ��

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
	printf("��������������\n");
	scanf("%d %d", &m, &n);
	j = m*n;
	if (m<n)
	{
		swap(&m, &n);
	}

	if (m % n == 0 && n != 0)
	{
			printf("���Լ��Ϊ: %d\n", n);
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
	printf("���Լ��Ϊ: %d\n",r);
	return 0;
}

8.ʹ��C���Ա�д����������������С������

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
	printf("��������������\n");
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
			printf("a,b ����С������Ϊ��%d \n", a);
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
		printf("a,b ����С������Ϊ ��%d\n", m);
	}

	return 0;
}

 9��ʹ��c���Ա�д���򣬽�����������ֵ

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

10��ʹ��C���Ա�дһ�������������Ĺ����ǣ���������������ֵ

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


11.��1 2 3 4  �ĸ����֣�����ɶ��ٻ�����ͬ�����ظ����ֵ� ��λ�������Ƕ��٣�

��������������ڰ�λ��ʮλ����λ�����ֶ���1 2 3 4 ������е����к���ȥ��������������


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
		k = arr[j] % 10;		//��λ
		n = arr[j] / 100;		//��λ
		l = arr[j] % 100 / 10;	//ʮλ
		if (k != n && k != l && n != l )
		{
			count++;
			printf("%d ", arr[j]);
		}
	}

	printf("\n count : %d \n", count);
	return 0;
}


12.ʹ��C���Ա�д��������Ļ���2000֮ǰ���������������ĸ���

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


13��д���� ���2/1,3/2,5/3,8/5,21/13...��������е�ǰ20��֮�͡�

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

���� �¶�   �����¶�  ת��
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

14�����s = a+aa+aaa+����+aaa..a��ֵ a��n�ɼ����������
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

15��һ���100�׸߶����£�ÿ�η����߶�Ϊԭ�߶ȵ�һ�룻�����£����ʮ�����ʱ�������������ף���ʮ�η�����ߣ�

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
	printf("�ܹ����� %d ��\n", count);
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


16�����ӳ������⣺��һ��ժ���������ӣ�����һ�룬û��񫣬�ֶ����һ�����Ժ�ÿ����ˣ�����ʮ��ʱ��ֻʣһ�����ӣ����ܹ��������ӣ�
����x�����ӣ�x - ((x/2+1) + ((x/2+1)/2 +1) +����+1 )= 0

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


17����ֵ: 1-1/2+1/3-1/4+����-1/100	����

#include<stdio.h>
int main()
{
	float sum = 0;
	for (int i = 1; i <= 100; i++)
	{
		if (i % 2 != 0)
		{
			sum += (float)1 / i; //ǿת
		}
		else
		{
			sum -= (float)1 / i;
		}
	}
	printf("sum is %f \n", sum);
	return 0;
}

18����ֵ�� !1+!2+����+!20

#include<stdio.h>

int main()
{
	int n = 5;
	int mul = 1;
	int sum = 0;
	for (int i = 1; i <= n; i++)
	{
		mul = 1;						//ע��ÿ�ν���mul��1
		for (int j = 1; j <= i; j++)
		{
			mul *= j;
		}
		sum += mul;
	}
	printf("sum is %d \n", sum);
	return 0;
}

19���ж�һ�����ǲ��ǻ����� (������Ҳ��һ�����֣��ص�����������ͬһ������ �磺1234321 1331���ǻ�����)
˼·����Ϊ�����������Կ�������������ķ�ת�����ֵ�����Ƿ���ԭ��������ȡ������ȣ����ǻ������������ǡ�
		��ת�����������£�����ֵΪ��ת���������

#include<stdio.h>

int main()
{
	int a = 0;
	int rev = 0;
	printf("Please input :\n");			//1��itoa() ת��Ϊ�ַ���
	scanf("%d", &a);
	int b = a;
/****************************************************************************/
	//while (a != 0)
	//{
	//	rev = rev * 10 + a % 10;	//2�����ַ�ת��
	//	a /= 10;
	//}
	//if (b == rev)
	//{
	//	printf("�ǻ�������\n");
	//	return 0;
	//}
	//printf("���ǻ�������\n");
/****************************************************************************/
	//�Ƚϵ�һλ�����һλ ��� �����Ƚ�  ����ȷ���
	int div = 1;
	while (a / div >= 10)
	{
		div *= 10;
	}
	while (a != 0)
	{
		int left = a / div;
		int right = a % 10;		//3������λ�ж�
		if (left != right)
		{
			printf("���ǻ�������\n");
			return 0;
		}
		a = (a % div) / 10;
		div /= 100;
	}

	printf("�ǻ�������\n");
/****************************************************************************/
	return 0;
}


20���ж�һ���ַ����ǲ��ǻ����ַ���

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
			printf("���ǻ����ַ�����\n");
			return 0;
		}
		begin++;
		end--;
	}
	printf("�ǻ����ַ�����\n");
	return 0;
}

21����һ��3*3����Խ���Ԫ��֮��

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
	printf("�Խ���֮��Ϊ�� %d\n", sum);
	return 0;
}

22��������������

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

23��ð������ 2016-5-31 23:43:26

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
		for (int j = i; j < len; j++)	//�����
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


24��������ַ����������

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

25���ݹ���쳲��������е�n��ֵ
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

26���ǵݹ���쳲��������е�n��ֵ
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


27����дһ�����������ַ����ĳ���
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


28��������ʹ����ʱ��������һ���ַ����ĳ���  �ݹ�
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

29����һ�������������� ѡ������

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

30���ȸ������  ��һ����������������1�ĸ��� (�ɲ����Ż�)

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

31���ٶȱ����� ��д�����ж���ĵ����Ǵ�˴洢����С�˴洢

/***********************************************************/
#include<stdio.h>

int main()
{
	int a = 1;
	char* c = (char*)&a;			//ָ�뷨
	
	if (*c == 1)
	{
		printf("С�˴洢\n");
	}
	else
	{
		printf("��˴洢\n");
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
		printf("С�˴洢\n");
	}
	else
	{
		printf("��˴洢\n");
	}
	return 0;
}

��1-100��100��������9���ֵĴ���

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
	printf("\n9���ֵĴ���Ϊ�� %d\n", count);
	return 0;
}

34����������һ�������������������ÿһλ

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


35�����ַ�������һ��ָ�����ַ���һ�γ��ֵ�λ�ã��������ַ����ڵ�λ�ã�����������򷵻�NULL

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


36���ַ�������������

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

37��ʹ��C���Ա�дһ������������һ���ַ�����ȡһ�����ַ���������ԭ�����£�
int sub(char dst[],char src[],int start,int len)
��src���ƫ��start���ַ���λ�ÿ�ʼ����ิ��len���ǿ��ַ� ��������Ϻ���NULL��β������ֵΪdst�ĳ���

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
		while (*s == ' ')//����ע��˴�
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


38���ӱ�׼��������ַ�����������д����׼��������˴�д��ĸ���Сд��ĸ֮�⣬������ԭ�����

#include<stdio.h>

int main()
{
	while (1)
	{
	
		char c;
		printf("Please Enter a char: \n");

		scanf(" %c", &c);//ȡ������Ļس� ��%c ǰ��ӿո�

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


39����������a�����Z������b�����Y���Դ����ƣ�����z�����A
           
#include<stdio.h>

int main()
{
	while (1)
	{
		char c;
		printf("Please Enter a char: \n");

		scanf(" %c", &c);//ȡ������Ļس� ��%c ǰ��ӿո�

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

40���ַ�����������

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

41��ʵ���ַ������ӣ�������strcat

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


42��ʵ���ַ����Ƚϣ�������strcmp

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

43��ʵ���ڴ濽��������������memcpy�����Բ�ʵ���ڴ��ص�����������ʹ���κο⺯��
dest��src�ͣ�����Դ�sͷ��ʼ������ dest��src�ߣ���Ϊ�˱�֤s�����ݲ��ᱻ���ǣ�����Ҫ��s��ĩβ��ʼ����
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

ʵ���ڴ���ƶ�������������memmove��ʵ���ڴ��ص�����������ʹ���κο⺯��
#include<stdio.h>
#include<assert.h>

void* my_memmove(void* dest, const void* src, size_t size)
{
	assert(dest);
	assert(src);

	if ((char*)dest <= (char*)src || (char*)dest >= ((char*)src + size))//������
	{
		char* d = (char*)dest;
		char* s = (char*)src;
		while (size--)
		{
			*d++ = *s++;
		}
	}
	else					//����
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


45��ʵ���ڴ�����ã�����������memset�����ֽ������ڴ��ֵ

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





47��һԪһƿ��ˮ�������������ƿ�ӻ�һƿ��ˮ���ʣ���20��Ǯ�������Ժȶ���ƿˮ��
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


48��һ��������������������ƽ��ֵ(ʹ�ÿɱ�����б�)
�ɱ�����б����ã����Դ��������Ĳ�����
�ɱ�����б�ʵ�ַ������ɱ�����б���ͨ������ʵ�ֵģ���Щ�궨����stdarg.hͷ�ļ��У����Ǳ�׼���һ���֡�
���ͷ�ļ�����һ������va_list ��������va_start��va_arg��va_end��
���ǿ�������һ������Ϊva_list�ı��������⼸�������ʹ�ã����ʲ�����
�������������ã�
����һ��va_list ���͵ı���arg�������ڷ��ʲ����б��δȷ�����֣���������ǵ���va_start����ʼ���ģ�
���ĵ�һ��������va_list�ı���������2��������ʡ�Ժ�ǰ���һ�������ֵĲ�����
��ʼ�����̰�arg��������Ϊָ��ɱ�������ֵĵ�һ��������
Ϊ�˷��ʲ�������Ҫʹ��va_arg��������������������va_list�����Ͳ����б�����һ�����������͡�
va_arg�������������ֵ����ʹ��va_argָ����һ���ɱ������
��󣬵�����������һ���ɱ����֮��������Ҫ����va_end��
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
	printf("ƽ����Ϊ��%d\n", ret);
	return 0;
}

49����һ���ַ����� student a am i ,�ֽ��ַ���ת��Ϊ i am a student �ռ临�Ӷ�Ϊ :O(1)


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

int my_strlen(char *str)//�õ����鳤�ȶ�����ȡ�ַ������ȵĺ���
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


50���ٶȱ�����  ʹ��c���Ա�д���� unsigned int reverse_bit(unsigned int value);
��������ķ���ֵvalue�Ķ�����ģʽ�����ҷ�ת���ֵ
00000000000000000000000000011001  ��תǰ  25
10011000000000000000000000000000  ��ת��
���������أ� 2550136832  
#include<stdio.h>

int reverse_bit(unsigned int value)
{
	int ret = 0;
	int bit = 0;
	for (int i = 0; i < 32; i++)
	{
		ret = ret << 1;		//����һλ������ǰһλ  
		bit = value & 1;	//ȡ�����һλ  
		value = value >> 1;	//ֵ���ƣ�ȡ��һλ  
		ret = bit | ret;	//���һλ����ret  
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




46����һ�������ַ���ת���ɶ�Ӧ�����֣���������� ���ܿ⺯��atof �����쳣����

#include<stdio.h>
#include<ctype.h>//������������
double my_atof(char* str)
{
	double val, power;
	int i, sign;

	for (i = 0; isspace(str[i]); i++)//���ǰ��Ŀո�
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