#define _CRT_SECURE_NO_WARNINGS 1

/*�����嵥1.1--ѯ���û��м�ֻ��*/
//#include<stdio.h>
//int main(void)
//{
//	int dogs = 0;
//	printf("How many dogs do you have?\n");
//	scanf("%d", &dogs);
//	printf("So you have %d dog(s)!\n",dogs);
//
//	return 0;
//}



/*�����嵥1.2*/
//#include<stdio.h>
//int main(void)
//{
//	printf("Concret contains grave1 and cement.\n");
//
//	return 0;
//}



/*�����嵥2.1--��ϲ��������*/
//#include<stdio.h>
//int main(void)
//{
//	int num = 0;
//	printf("I am a simple computer\n");
//	scanf("%d", &num);
//	printf("My favorite number is %d because it is first.\n", num);
//
//	return 0;
//}



/*�����嵥2.2--��2ӢѰת����Ӣ��*/
//#include<stdio.h>
//int feet,fathoms;
//fathoms = 2;
//int main(void)
//{
//	feet = 6 * fathoms;
//	printf("There are %d feet in %d fathoms!\n", feet, fathoms);
//	printf("Yes,i said %d feet!\n", 6 * fathoms);
//
//	return 0;
//}



/*�����嵥2.3--��ƽ��ֵ������ֵ*/
//#include<stdio.h>
//int main(void)
//{
//	int n, n2, n3;
//	printf("Please enter a integer.\n");
//	scanf("%d", &n);
//	n2 = n*n;
//	n3 = n*n*n;
//	printf("n=%d,n squared = %d,n cubed = %d\n", n, n2, n3);
//
//	return 0;
//}



/*����ģ�����*/

/*1.���д�ӡ����Ԫ�أ�ÿ��ʮ��*/
//for(int i = 0; i < n; i++) 
//{
//	printf("%d%c", a[i], (i % 10 == 9 || i == n - 1) ? '\n' : ' ');
//}

/*2.��ӡӢ�ﵥ�ʵĸ�����ʽ*/
//printf("You have %d item%s.\n", n, n == 1 ? "" : "s");

///*3.���ֲ���*/
//int binsearch(int x, int v[], int n) 
//{
//	int low, high, mid;
//	low = 0;
//	high = n - 1;
//	while (low <= high) 
//	{
//		mid = (low + high) / 2;
//		if (x < v[mid])
//			high = mid - 1;
//		else if (x > v[mid])
//			low = mid + 1;
//		else
//			return mid;
//	}
//
//	return -1;
//}

/*4.shell����*/
//void shellsort(int v[], int n) 
//{
//	int gap, i, j, temp;
//
//	for (gap = n / 2; gap > 0; gap /= 2) 
//	{
//		for (i = gap; i < n; i++) 
//		{
//			for (j = i - gap; j >= 0 && v[j] > v[j + gap]; j -= gap) 
//			{
//				temp = v[j];
//				v[j] = v[j + gap];
//				v[j + gap] = temp;
//			}
//		}
//	}
//}

/*5.��������*/
//void reverse(char s[]) 
//{
//	int c, i, j;
//	for (i = 0, j = strlen(s) - 1; i < j; i++, j--) 
//	{
//		c = s[i];
//		s[i] = s[j];
//		s[j] = c;
//	}
//}

/*6.��������*/
//void qsort(int v[], int left, int right) 
//{
//	int i, last;
//	void swap(int v[], int i, int j);
//
//	if (left >= right) return;
//
//	swap(v, left, (left + right) / 2);
//	last = left;
//	for (i = left + 1; i <= right; i++) 
//	{
//		if (v[i] < v[left])
//			swap(v, ++last, i);
//	}
//	swap(v, left, last);
//	qsort(v, left, last - 1);
//	qsort(v, last + 1, right);
//}
//
//void swap(int v[], int i, int j) 
//{
//	int temp;
//	temp = v[i];
//	v[i] = v[j];
//	v[j] = temp;
//}



/*�����嵥3.1--your weight in platinum*/
//#include<stdio.h>
//int main(void)
//{
//	float weight;
//	float value;
//	printf("Are you worth your weight in platinum?\n");
//	printf("Let's check it out.\n");
//	printf("Please enter your weight in pound.\n ");
//	//��ȡ�û�������
//	scanf("%f", &weight);
//	//����׽�ļ۸���ÿ��˾$1700
//	//14.5833���ڰ�Ӣ�����ⰻ˾ת���ɽ�ⰻ˾
//	value = 1700.0*weight*14.5833;
//	printf("Your weight in platinum is worth $%.2f.\n",value);
//	printf("You are easily worth that!If platinum price drop,\n");
//	printf("eat more to maintain your value.\n");
//
//	return 0;
//}



/*�����嵥3.2*/
//#include<stdio.h>
//int main(void)
//{
//	int ten = 10;
//	int two = 2;
//	printf("Doing it right:");
//	printf("%d minus %d is %d\n", ten, two, ten - two);
//	printf("Doing it wrong:");
//	printf("%d minus %d is %d\n", ten);//ת��˵�������������ӡֵ�����������
//	return 0;
//}



/*�����嵥3.3--��ʮ���ơ�ʮ�����ơ��˽��ƴ�ӡʮ��������100*/
//#include<stdio.h>
//int main(void)
//{
//	int i = 100;
//	printf("dec=%d hex=%x octal=%o\n", i, i, i);
//	printf("dec=%d hex=%#x octal=%#o\n", i, i, i);
//
//	return 0;
//}



/*�����嵥3.4--ʹ��printf������ӡ��ͬ��������*/
//#include<stdio.h>
//int main(void)
//{
//	unsigned int un = 3000000000;//intΪ32λ��shortΪ16λϵͳ
//	short end = 200;
//	long big = 65537;
//	long long verybig = 12345678908642;
//
//	printf("un=%u and not %d\n", un, un);
//	printf("end=%hd and %d\n", end, end);
//	printf("bid=%ld and not %hd\n", big, big);
//	printf("verybig=%lld and not %ld\n", verybig, verybig);
//
//	return 0;
//}



/*�����嵥3.5--��ʾ�ַ��Ĵ�����*/
//#include<stdio.h>
//int main(void)
//{
//		char ch;
//		printf("Please enter a character.\n");
//		scanf("%c", &ch);//�û������ַ�
//		printf("The code for %c is %d.\n", ch, ch);
//
//	return 0;
//}



/*�����嵥4.1--��ʾ���û�����*/
//#include<stdio.h>
//#include<string.h>
//#define DENSITY 62.4
//int main(void)
//{
//	float weight, volume;
//	int size, letters;
//	char name[40];
//	printf("Hi,what's your first name?\n");
//	scanf("%s", name);
//	printf("%s,what's your weight in pounds?\n", name);
//	scanf("%f", &weight);
//	size = sizeof(name);
//	letters = strlen(name);
//	volume = weight / DENSITY;
//	printf("Well,%s,your volume is %2.2f cubic feet.\n",name,volume);
//	printf("Also,your first name has %d letters,",letters);
//	printf("and we have %d bytes to store it.\n", size);
//
//
//	return 0;
//}



/*�����嵥4.2--ʹ�ò�ͬ���͵��ַ���*/
//#include<stdio.h>
//#define PRAISE "You are an extraordinary being"
//int main(void)
//{
//	char name[40];
//	printf("What's your name?");
//	scanf("%s", name);
//	printf("Hello,%s,%s", name, PRAISE);
//
//	return 0;
//}



/*�����嵥4.3--sizeof()������strlen()������*/
//#include<stdio.h>
//#include<string.h>
//#define PRAISE "You are an extraordinary being"
//int main(void)
//{
//	char name[40];
//	printf("What's your name?");
//	scanf("%s", name);
//	printf("Hello,%s,%s\n", name, PRAISE);
//	printf("Your name of %u letters occupies %u memory cells.\n",
//		strlen(name), sizeof(name));
//	printf("The phase of praise has %u letters ", strlen(PRAISE));
//	printf("and occupies %u memory cells.\n", sizeof(PRAISE));
//
//	return 0;
//}



/*�����嵥4.4--��������������ʹ���Ѷ���ĳ���*/
//#include<stdio.h>
//#define PI 3.14159
//int main(void)
//{
//	float radius, area, circum;
//	printf("Please enter the radius of your pizza:");
//	scanf("%f", &radius);
//	circum = 2 * PI*radius;
//	area = PI*radius*radius;
//	printf("The parameter of your pizza as follow.\n");
//	printf("radius		circum		area		  \n");
//	printf("%.2f		%.2f		%.2f\n", radius, circum, area);
//
//	return 0;
//}



/*�����嵥4.5--ʹ��limit.h��float.hͷ�ļ��ж������ʾ����*/
//#include<stdio.h>
//#include<limits.h>
//#include<float.h>
//
//int main(void)
//{
//	printf("Some number limits for this system:\n");
//	printf("One byte=%d bits on this system.\n", CHAR_BIT);
//	printf("Biggest char=%d\n", CHAR_MAX);
//	printf("Smallest char=%d\n", CHAR_MIN);
//	printf("Biggest signed char=%d\n", SCHAR_MAX);
//	printf("Smallest signed char=%d\n", SCHAR_MIN);
//	printf("Biggest unsigned char=%d\n", UCHAR_MAX);
//	printf("Biggest short=%d\n", SHRT_MAX);
//	printf("Smallest short=%d\n", SHRT_MIN);
//	printf("Biggest unsigned short=%d\n", USHRT_MAX);
//	printf("Biggest int=%d\n", INT_MAX);
//	printf("Smallest int=%d\n", INT_MIN);
//	printf("Biggest unsigned int=%lld\n", UINT_MAX);
//	printf("Biggest long=%ld\n", LONG_MAX);
//	printf("Smallest long=%ld\n", LONG_MIN);
//	printf("Biggest unsigned long=%lld\n", ULONG_MAX);
//	printf("Biggest long long=%lld\n", LLONG_MAX);
//	printf("Smallest long long=%lld\n", LLONG_MIN);
//	printf("Biggest unsigned long long=%lld\n", ULLONG_MAX);
//
//	printf("Float main=%d\n", FLT_MANT_DIG);
//	printf("Float precision=%d digits\n", FLT_DIG);
//	printf("Biggest float=%f\n", FLT_MAX);
//	printf("Smallest float=%f\n", FLT_MIN);
//	printf("Float epsilon=%e\n", FLT_EPSILON);
//
//	return 0;
//}



/*�����嵥4.9--��ʾһЩ��ʽ��� */
//#include <stdio.h>
//int main(void)
//{
//	printf("%x %X %#x\n", 31, 31, 31);
//	printf("**%d**% d**% d**\n", 42, 42, -42);
//	printf("**%5d**%5.3d**%05d**%05.3d**\n", 6, 6, 6, 6);
//
//	return 0;
//}



/*�����嵥4.16--ʹ�ñ������ֶ�*/
//#include <stdio.h>
//int main(void)
//{
//	unsigned width, precision;
//	int number = 256;
//	double weight = 242.5;
//	printf("Enter a field width:\n");
//	scanf("%d", &width);
//	printf("The number is :%*d:\n", width, number);
//	printf("Now enter a width and a precision:\n");
//	scanf("%d %d", &width, &precision);
//	printf("Weight = %*.*f\n", width, precision, weight);
//	printf("Done!\n");
//	return 0;
//}



/*�����嵥5.1--��Ь��ת����Ӣ��*/
//#include<stdio.h>
//#define ADJUST 7.31
//int main(void)
//{
//	const double SCALE = 0.333;
//	double shoe, foot;
//	shoe = 9.0;
//	foot = SCALE*shoe + ADJUST;
//	printf("Shoe size(men's) foot length\n");
//	printf("%10.1f %15.2f inches\n", shoe, foot);
//
//	return 0;
//}



/*�����嵥5.2--��������ͬЬ���Ӧ�Ľų�*/
//#include<stdio.h>
//#define ADJUST 7.31
//int main(void)
//{
//		const double SCALE = 0.333;
//		double shoe;
//		double foot = 0l;
//		shoe = 3.0;
//		printf("Shoe size(men's) foot length\n");
//		while (shoe < 18.5)
//		{
//				foot = SCALE*shoe + ADJUST;
//				printf("%10.1f %15.2f inches\n", shoe, foot);
//				shoe = shoe + 1.0;
//		}
//		printf("If the shoe fits,wear it.\n");
//
//	return 0;
//}









/*�����嵥11.1--��ʾ�ַ����ļ��ַ�ʽ*/
//#include<stdio.h>
//#define MSG "I am a symbolic string constant."
//#define MAXLENGTH 81
//int main(void)
//{
//	char words[MAXLENGTH] = "I am a string in an array.";
//	const char* pt1 = "something is pointing at me.";
//	puts("Here are some strings:");
//	puts(MSG);
//	puts(words);
//	puts(pt1);
//	words[8] = 'p';
//	puts(words);
//	char greeting[50] = "Hello,and"" how are you"
//		"today!";
//	puts(greeting);
//	printf("%s,%p,%c\n", "We", "are", *"space farers");
//	printf("%s,%p,%s\n", "We", "are", "space farers");
//	char ch[] = "space farers";
//	puts(ch);
//	puts("space farers");
//	char nuu[20] = { 0 };
//	scanf("%s",nuu );
//	gets("space farers");
//	puts(nuu);
//	gets(nuu);
//	puts(nuu);
//
//	return 0;
//}



/*�����嵥11.3--�ַ����ĵ�ַ*/
//#include<stdio.h>
//#define MSG "I am special"
//int main(void)
//{
//	char ar[] = MSG;
//	const char * pt = MSG;
//	printf("address of \"I'm special\": %p \n", "I am special");
//	printf("              address ar: %p\n", ar);
//	printf("              address pt: %p\n", pt);
//	printf("          address of MSG: %p\n",MSG);
//	printf("address of \"I'm special\": %p \n", "I am special");
//
//	return 0;
//}



/*�����嵥11.4--ָ�����飬�ַ�������*/
//#include<stdio.h>
//#define SLEN 40
//#define LIM 5
//int main(void)
//{
//	const char* mytalents[LIM] = {
//		"Adding numbers swiftly", "Multiplying accurately", "Stashing data",
//		"Following instructions to the letter", "Understanding the C language"
//	};
//	char yourtalents[LIM][SLEN] = {
//		"Walking in a straight line", "Sleeping", "Watching television",
//		"Mailing letters", "Reading email"
//	};
//	int i;
//	puts("Let's compare talents.\n");
//	printf("%-36s  %-25s\n", "My Talents", "Your Talents");
//	for (i = 0; i < LIM;i++)
//		printf("%-36s  %-25s\n", mytalents[i], yourtalents[i]);
//	printf("\nsizeof mytalents: %zd,sizeof yourtalents: %zd\n", sizeof(mytalents), sizeof(yourtalents));
//
//	return 0;
//}



/*11.5--ָ����ַ���*/
//#include<stdio.h>
//int main(void)
//{
//	const char* mesg = "Don't be a fool!";
//	const char* copy;
//	copy = mesg;
//	printf("%s\n", copy);
//	printf("mesg=%s; &mesg=%p; value=%p\n", mesg, &mesg, mesg);
//	printf("copy=%s; &copy=%p; value=%p\n", copy, &copy, copy);
//
//	return 0;
//}



/*11.6--ʹ�� gets() �� puts() */
//#include<stdio.h>
//#include<string.h>
//#define STLEN 81
//int main(void)
//{
//	char words[STLEN];
//	puts("Enter a string,please.");
//	gets(words);
//	printf("Your string twice:\n");
//	printf("%s\n", words);
//	puts(words);
//	putchar('\n');
//
//	fgets(words,81,stdin);
//	printf("Your string twice:\n");
//	printf("%s\n", words);
//	fputs(words,stdout);
//
//	puts("Done.");
//
//	return 0;
//}



/*11.7--ʹ��fgets()��fputs()*/
//#include<stdio.h>
//#define STLEN 14
//int main(void)
//{
//	char words[STLEN];
//	puts("Enter a string,please.");
//	fgets(words, STLEN, stdin);
//	printf("Your string twice (puts(),then fputs():\n");
//	puts(words);
//	fputs(words, stdout);
//	puts("Enter another string,please.");
//	fgets(words, STLEN, stdin);
//	printf("Your string twice (puts(),then fputs():\n");
//	puts(words);
//	fputs(words, stdout);
//	puts("\nDone.\n");
//
//	return 0;
//}



/*�����嵥11.8--ʹ�� fgets() �� fputs() */
//#include<stdio.h>
//#define STLEN 10
//int main(void)
//{
//	char words[STLEN];
//	puts("Enter strings (empty line to quit):");
//	while(fgets(words, STLEN, stdin) != NULL&&words[0] != '\n')
//		fputs(words, stdout);
//	puts("Done.");
//
//	return 0;
//}


/*�����嵥11.9--ʹ�� fgets() �� fputs()���������з��Ͷ����ַ�*/
//#include<stdio.h>
//#define STLEN 10
//int main(void)
//{
//	char words[STLEN];
//	puts("Enter strings (empty line to quit):");
//	while (fgets(words, STLEN, stdin) != NULL&&words[0] != '\n')
//	{
//		int i = 0;
//		while (words[i] != '\n'&&words[i] != '\0')
//			i++;
//		if (words[i] == '\n')
//			words[i] = '\0';
//		else
//			while (getchar() != '\n')
//				continue;
//		puts(words);
//	}
//	puts("Done.");
//
//	return 0;
//}


/*�����嵥11.11--��scanf������ָ���ֶο��*/
//#include<stdio.h>
//int main(void)
//{
//	char name1[11], name2[11];
//	int count;
//	while (1)
//	{
//		printf("Please enter 2 names.\n");
//		count = scanf("%5s %10s", name1, name2);
//		printf("I read %d names %s and %s.\n", count, name1, name2);
//	}
//	return 0;
//}


/*�����嵥11.12--puts������һЩ�÷�*/
//#include<stdio.h>
//#define DEF "I am a #define string."
//int main(void)
//{
//	char str1[80] = "AN array was initialized to me.";
//	const char* str2 = "A pointer was initialized to me.";
//	puts("I'm an argument to puts().");
//	puts(DEF);
//	puts(str1);
//	puts(str2);
//	puts(&str1[5]);
//	puts(str2 + 4);
//	return 0;
//}


/*�����嵥11.16--��ӡһ���ַ�������ͳ�ƴ�ӡ���ַ���*/
//#include<stdio.h>
//void put1(const char*);
//int put2(const char*);
//int main(void)
//{
//	put1("If I'd as much money");
//	put1(" as i could spend,\n");
//	printf("I count %d characters.\n",
//		put2("I never would cry old chairs to mend."));
//
//	return 0;
//}
//
//void put1(const char* string)
//{
//	while (*string)
//		putchar(*string++);
//}
//
//int put2(const char* string)
//{
//	int count = 0;
//	while (*string)
//	{
//		putchar(*string++);
//		count++;
//	}
//	putchar('\n');
//
//	return(count);
//}


/*11.17--ʹ�������ַ������ȵĺ���*/
//#include<stdio.h>
//#include<string.h>
//void fit(char*, unsigned int);
//int main(void)
//{
//	char mesg[] = "Things should be as simple as possible,"
//		" but not simpler.";
//	puts(mesg);
//	fit(mesg, 38);
//	puts(mesg);
//	puts("Let's look at some more of the string.");
//	puts(mesg + 39);
//	return 0;
//}
//
//void fit(char *string, unsigned int size)
//{
//	if(strlen(string)>size)
//		string[size] = '\0';
//}


/*�����嵥11.18--ƴ�������ַ���*/
//#include<stdio.h>
//#include<string.h>
//#define SIZE 80
//char* s_gets(char* st, int n);
//int main(void)
//{
//	char flower[SIZE];
//	char addon[] = "s smell like old shoe.";
//	puts("What is your favorite flower?");
//	if (s_gets(flower, SIZE))
//	{
//		strcat(flower, addon);
//		puts(flower);
//		puts(addon);
//	}
//	else
//		puts("End��of��file��encountered!");
//	    puts("bye");
//	return 0;
//}
//
//char* s_gets(char* st, int n)
//{
//	char * ret_val;
//	int i = 0;
//	ret_val = fgets(st, n, stdin);
//	if (ret_val)
//	{
//		while(st[i] != '\n'&&st[i] != '\0')
//		i++;
//		if (st[i] == '\n')
//			st[i] = '\0';
//   else
//        while(getchar() != '\n')
//        continue;
//	}
//	return ret_val;
//}


/*�����嵥11.19--ƴ�������ַ���������1������Ĵ�С*/
//#include<stdio.h>
//#include<string.h>
//#define SIZE 30
//#define BUGSIZE 13
//char* s_gets(char* st, int n);
//int main(void)
//{
//	char flower[SIZE];
//	char addon [] = "s smell like old shoes.";
//	char bug[BUGSIZE];
//	int available;
//	puts("What's your favorite flower?");
//	s_gets(flower, SIZE);
//	if ((strlen(flower) + (strlen(addon))) < SIZE)
//		strcat(flower, addon);
//	puts(flower);
//	puts("What is your favorite bug?");
//	s_gets(bug, SIZE);
//	available= BUGSIZE- strlen(bug) - 1;
//	strncat(bug, addon, available);
//	puts(bug);
//
//	return 0;
//}
//char* s_gets(char*st, int n)
//{
//	char* ret_val;
//	int i = 0;
//	ret_val = fgets(st, n, stdin);
//	if (ret_val)
//	{
//		while (st[i] != '\0'&&st[i] != '\n')
//			i++;
//		if (st[i] == '\n')
//			st[i] = '\0';
//		else
//			while (getchar() != '\n')
//				continue;
//	}
//	return ret_val;
//}


/*�����嵥11.21--�Ƚ������ַ����Ĵ�С*/
//#include<stdio.h>
//#include<string.h>
//#define ANSWER "Grant"
//#define SIZE 40
//char* s_gets(char* st, int n);
//int main(void)
//{
//	char try[SIZE];
//	puts("Who is buried in Grant's tomb?");
//	s_gets(try, SIZE);
//	while (strcmp(try, ANSWER) != 0)
//	{
//		puts("No,that's wrong,Try again.!");
//		s_gets(try, SIZE);
//	}
//	puts("That's right!");
//
//	return 0;
//}
//char* s_gets(char* st, int n)
//{
//	char* ret_val;
//	int i = 0;
//	ret_val = fgets(st, n, stdin);
//	if (ret_val)
//	{
//		while (st[i] != '\n'&&st[i] != '\0')
//			i++;
//		if (st[i] == '\n')
//			st[i] = '\0';
//		else
//			while (getchar() != '\n')
//				continue;
//	}
//	return ret_val;
//}



/*�����嵥11.23--��strcmp�����������Ƿ�Ҫֹͣ��ȡ����*/
//#include<stdio.h>
//#include<string.h>
//#define SIZE 80
//#define LIM 3
//#define STOP "quit"
//char* s_gets(char* st, int n);
//int main(void)
//{
//	char input[LIM][SIZE];
//	int ct = 0;
//	printf("Enter up to %d lines(type quit to quit):\n", LIM);
//	while (ct < LIM&&s_gets(input[ct], SIZE) != NULL&&strcmp(input[ct], STOP) != 0)
//	{
//		ct++;
//	}
//	printf("%d strings entered\n", ct);
//
//	return 0;
//}
//
//char* s_gets(char* st, int n)
//{
//	char ret_val;
//	int i = 0;
//	ret_val = fgets(st, n, stdin);
//	if (ret_val)
//	{
//		while (st[i] != '\n'&&st[i] != '\0')
//			i++;
//		if (st[i] == '\n')
//			st[i] = '\0';
//		else
//			while (getchar() != '\n')
//				continue;
//	}
//	return ret_val;
//}


/*�����嵥11.24--strncmp()�����÷�*/
//#include<stdio.h>
//#include<string.h>
//#define LISTSIZE 6
//int main(void)
//{
//	const char*list[LISTSIZE] =
//	{
//		"astronomy", "astounding",
//		"astrophysics", "ostracize",
//		"asterism", "astrophobia"
//	};
//	int count = 0;
//	int i; 
//	for (i = 0; i < LISTSIZE; i++)
//		if (strncmp(list[i], "astro", 5) == 0)
//		{
//			printf("Found: %s\n", list[i]);
//			count++;
//		}
//	printf("The list contain %d words begining with astro.\n", count);
//
//	return 0;
//}


/*�����嵥11.25--�ó�������뿽����һ����ʱ�����У������1 ����ĸ��q�������
strcpy()�������ַ�������ʱ���鿽����Ŀ��������*/
//#include<stdio.h>
//#include<string.h>
//#define SIZE 40
//#define LIM 5
//char* s_gets(char* st, int n);
//int main(void)
//{
//	char qwords[LIM][SIZE];
//	char temp[SIZE];
//	int i = 0;
//	printf("Enter %d words beginning with q:\n", LIM);
//	while (i < LIM&&s_gets(temp, SIZE))
//	{
//		if (temp[0] != 'q')
//			printf("%s don't beginning with q!\n", temp);
//		else
//		{
//			strcpy(qwords[i], temp);
//			i++;
//		}
//	}
//	puts("Here are words accepted:");
//	for (i = 0; i < LIM; i++)
//	{
//		puts(qwords[i]);
//	}
//
//	return 0;
//}
//char* s_gets(char* st, int n)
//{
//	char* ret_val;
//	int i = 0;
//	ret_val = fgets(st, n, stdin);
//	if (ret_val)
//	{
//		while (st[i] != '\n'&&st[i] != '\0')
//			i++;
//		if (st[i] == '\n')
//			st[i] = '\0';
//		else
//			while (getchar() != '\n')
//				continue;
//	}
//	return ret_val;
//}

//�����嵥11.26 copy2.c����
//#include <stdio.h>
//#include <string.h>����
//// �ṩstrcpy()�ĺ���ԭ��
//#define WORDS "beast"
//#define SIZE 40
//int main(void)
//{
//	const char * orig = WORDS;
//	char copy[SIZE] = "Be the best that you can be.";
//	char * ps;
//	puts(orig);
//	puts(copy);
//	ps = strcpy(copy + 7, orig);
//	puts(copy);
//	puts(ps);
//
//	return 0;
//}


/*�����嵥11.27--�ó�������뿽����һ����ʱ�����У������1 ����ĸ��q�������
strncpy()�������ַ�������ʱ���鿽����Ŀ��������*/
//#include<stdio.h>
//#include<string.h>
//#define SIZE 40
//#define TARGSIZE 7
//#define LIM 5
//char* s_gets(char* st, int n);
//int main(void)
//{
//	char qwords[LIM][TARGSIZE];
//	char temp[SIZE];
//	int i = 0;
//	printf("Enter %d words beginning with q:\n", LIM);
//	while (i < LIM&&s_gets(temp, SIZE))
//	{
//		if (temp[0] != 'q')
//			printf("%s don't beginning with q!\n", temp);
//		else
//		{
//			strncpy(qwords[i], temp, TARGSIZE-1);
//			qwords[i][TARGSIZE - 1] = '\0';
//			i++;
//		}
//	}
//	puts("Here are words accepted:");
//	for (i = 0; i < LIM; i++)
//	{
//		puts(qwords[i]);
//	}
//
//	return 0;
//}
//char* s_gets(char* st, int n)
//{
//	char* ret_val;
//	int i = 0;
//	ret_val = fgets(st, n, stdin);
//	if (ret_val)
//	{
//		while (st[i] != '\n'&&st[i] != '\0')
//			i++;
//		if (st[i] == '\n')
//			st[i] = '\0';
//		else
//			while (getchar() != '\n')
//				continue;
//	}
//	return ret_val;
//}



/*�����嵥11.28--��printf()��3��������ַ�����һ�����֣���ϳ�һ���ַ���*/
//#include<stdio.h>
//#define MAX 20
//char * s_gets(char * st, int n);
//int main(void)
//{
//	char first[MAX];
//	char last[MAX];
//	char formal[2 * MAX + 10];
//	double prize;
//	puts("Enter your first name:");
//	s_gets(first, MAX);
//	puts("Enter your last name:");
//	s_gets(last, MAX);
//	puts("Enter your prize money:");
//	scanf("%lf", &prize);
//	sprintf(formal,"%s, %-19s: $%6.2f.", last, first, prize);
//	puts(formal);
//	return 0;
//}
//char * s_gets(char * st, int n)
//{
//	char * ret_val;
//	int i= 0;
//	ret_val= fgets(st, n, stdin);
//	if (ret_val)
//	{
//		while(st[i] != '\n'&&st[i] != '\0')
//		i++;
//		if (st[i] == '\n')
//			st[i] = '\0';
//		else
//			while(getchar() != '\n')
//			continue;
//	}
//	return ret_val;
//}


/*�����嵥11.29--�����ַ������������ַ��� */
//#include<stdio.h>
//#include<string.h>
////�����ַ������ȣ�����\0
//#define SIZE 81
////�ɶ�����������
//#define LIM 5
////���ַ���ֹͣ����
//#define HALT ""
////�ַ���������
//void stsrt(char*strings[], int num);
//char *s_gets(char* st, int n);
//
//int main(void)
//{
//	//�洢���������
//	char input[LIM][SIZE];
//	//�ں�ָ�����������
//	char*ptstr[LIM];
//	//�������
//	int ct = 0;
//	//�������
//	int k;
//	printf("Input up to %d lines,and I will sort them.\n", LIM);
//	printf("To stop,press the Enter key at a line's start.\n");
//	while (ct < LIM&&s_gets(input[ct], SIZE) != NULL&&input[ct][0] != '\0')
//	{
//		//����ָ��ָ���ַ���
//		ptstr[ct] = input[ct];
//		ct++;
//	}
//	//�ַ���������������
//	stsrt(ptstr,ct);
//	puts("\nHere's the sorted list:\n");
//	for (k = 0; k < ct; k++)
//		puts(ptstr[k]);	//������ָ�롡������
//
//	return 0;
//}
//
///* �ַ���-ָ��-������ */
//void stsrt(char* strings[], int num)
//{
//	char* temp;
//	int top = 0;
//	int seek = 0;
//	for (top = 0; top < num - 1; top++)
//	{
//		for (seek = top+1; seek < num; seek++)
//		{
//			if (strcmp(strings[top], strings[seek]) > 0)
//			{
//				temp = strings[top];
//				strings[top] = strings[seek];
//				strings[seek] = temp;
//			}
//		}
//	}
//}
//
//char *s_gets(char* st, int n)
//{
//	char * ret_val;
//	int i= 0;
//	ret_val= fgets(st, n, stdin);
//	if (ret_val)
//	{
//		while(st[i] != '\n'&&st[i] != '\0')
//		i++;
//		if (st[i] == '\n')
//			st[i] = '\0';
//		else
//			while(getchar() != '\n')
//			continue;
//	}
//	return ret_val;
//}


/*�����嵥11.30--�޸��ַ���*/
//#include<stdio.h>
//#include<string.h>
//#include<ctype.h>
//#define LIMIT 81
//void ToUpper(char*);
//int PunctCount(const char*);
//
//int main(void)
//{
//	char line[LIMIT];
//	char* find;
//	puts("Please enter a line:");
//	fgets(line, LIMIT, stdin);
//	//���һ��з�
//	find = strchr(line, '\n');
//	//�����ַ����NULL���ÿ��ַ��滻
//	if (find)
//		*find = '\0';
//	ToUpper(line);
//	puts(line);
//	printf("That line has %d punctuation characters.\n", PunctCount(line));
//	
//	return 0;
//}
//
//void ToUpper(char* str)
//{
//	while (*str)
//	{
//		*str = toupper(*str);
//		str++;
//	}
//}
//
//int PunctCount(const char* str)
//{
//	int ct = 0;
//	while (*str)
//	{
//		if (ispunct(*str))
//			ct++;
//		str++;
//	}
//	return ct;
//}


/*�����嵥11.31--�������� main() */
//#include<stdio.h>
//int main(int argc, char *argv[])
//{
//	int count;
//	printf("The command line has %d arguments:\n", argc- 1);
//	for (count = 1; count < argc; count++)
//		printf("%d:��%s\n", count, argv[count]);
//	printf("\n");
//	return 0;
//}


/*�����嵥11.32--�������в���ת��Ϊ����*/
//#include<stdio.h>
//#include<stdlib.h>
//int main(int argc, char *argv[])
//{
//	int i, times;
//	if(argc<2||(times= atoi(argv[1]))<1)
//		printf("Usage: %s positive-number\n", argv[0]);
//	else
//		for(i = 0;i<times;i++)
//		puts("Hello, good looking!");
//	return 0;
//}


/*�����嵥11.33--strtol() �������÷�*/
//#include<stdio.h>
//#include<stdlib.h>
//#define LIM 30
//char * s_gets(char * st, int n);
//int main()
//{
//	char number[LIM];
//	char * end;
//	long value;
//	puts("Enter a number(empty��line��to��quit):");
//	while(s_gets(number, LIM) && number[0] != '\0')
//	{
//		value = strtol(number, &end, 10);/* ʮ���� */
//		printf("base 10 input, base 10 output: %ld, stopped at %s(%d)\n",
//			value,end,*end);
//		value = strtol(number, &end, 16);/* ʮ������ */
//		printf("base 16 input, base 10 output: %ld, stopped at %s(%d)\n",
//			value, end, *end);
//		puts("Next number:");
//	}
//	puts("Bye!\n");
//	return 0;
//}
//
//char * s_gets(char * st, int n)
//{
//	char * ret_val;
//	int i= 0;
//	ret_val= fgets(st, n, stdin);
//	if (ret_val)
//	{
//		while(st[i] != '\n'&&st[i] != '\0')
//		i++;
//		if (st[i] == '\n')
//			st[i] = '\0';
//		else
//			while (getchar() != '\n')
//				continue;
//	}
//	return ret_val;
//}



/*�����嵥12.1--���еı���*/
//#include<stdio.h>
//int main(void)
//{
//	int x = 30;
//	printf("x int outer block: %d at %p\n", x, &x);
//	{
//		int x = 77;
//		printf("x int inner block : %d at %p\n", x, &x);
//	}
//	printf("x int outer block: %d at %p\n", x, &x);
//	while (x++ < 33)
//	{
//		int x = 100;
//		x++;
//		printf("x in while loop: %d at %p\n", x, &x);
//	}
//	printf("x int outer block: %d at %p\n", x, &x);
//
//	return 0;
//}


/*�����嵥12.2--�µ� C99 �����*/
//#include<stdio.h>
//int main()
//{
//	int n = 8;
//	printf("Initially,n= %d��at��%p\n",n,&n);
//		for(int n= 1;n<3;n++)
//		printf("loop1:��n= %d��at��%p\n",n,&n);
//		printf("After loop��1,��n��=��%d��at��%p\n", n, &n);
//	for(int n= 1;n<3;n++)
//	{
//		printf("loop 2 index��n��=��%d��at��%p\n", n, &n);
//		int n = 6;
//		printf("loop 2: n�� = %d��at��%p\n", n, &n);
//		n++;
//	}
//	printf("After loop 2, n��=��%d��at��%p\n", n, &n);
//		return 0;
//}


/*�����嵥12.3--ʹ�þֲ���̬����*/
//#include<stdio.h>
//void trystat(void);
//int main(void)
//{
//	int count;
//	for (count = 0; count < 3; count++)
//	{
//		printf("Here comes interation %d;\n", count);
//		trystat();
//	}
//	return 0;
//}
//
//void trystat(void)
//{
//	int fade = 1;
//	static int stay = 1;
//	printf("fade=%d and stay=%d \n", fade++, stay++);
//}


/*�����嵥12.4--ʹ���ⲿ����*/
//#include<stdio.h>
//int units = 0;
//void critic(void);
//int main(void)
//{
//	extern int units;
//	printf("How many pounds to a firkin of butter?\n");
//	scanf("%d", &units);
//	while (units != 56)
//		critic();
//	printf("You must have looked it up!\n");
//
//	return 0;
//}
//void critic(void)
//{
//	printf("No luck,my friend.Try again.\n");
//	scanf("%d", &units);
//}


/*�����嵥12.5--��ͬ�Ĵ洢��𣬺ͳ����嵥12.6һ�����*/
//#include<stdio.h>
//int count = 0;//�ļ��������ⲿ����
//void report_count();
//void accumulate(int k);
//int main(void)
//{
//	int value;//�Զ�����
//	register int i;//�Ĵ�������
//	printf("Enter a positive integer(0 to quit):");
//	while (scanf("%d", &value) == 1 && value > 0)
//	{
//		++count;//ʹ���ļ����������
//		for (i = value; i >= 0; i--)
//		{
//			accumulate(i);
//		}
//		printf("Enter a positive integer(0 to quit):");
//	}
//	report_count();
//
//	return 0;
//}
//void report_count()
//{
//	printf("Loop executed %d times\n", count);
//}



/*�����嵥12.8--�����������12.7һ�����*/
//#include<stdio.h>
//extern unsigned int rand0(void);
//int main(void)
//{
//	int count;
//	for (count = 0; count < 5; count++)
//	{
//		printf("%d\n", rand0());
//	}
//
//	return 0;
//}



/*12.9--�������������������*/
//#include<stdio.h>
//#include<stdlib.h>
//extern void srand1(unsigned int x);
//extern int rand1(void);
//int main(void)
//{
//	int count;
//	unsigned seed;
//	printf("Please your choice for seed.\n");
//	while (scanf("%u", &seed) == 1)
//	{
//		srand1(seed);
//		for (count = 0; count < 5; count++)
//			printf("%d\n", rand1());
//		printf("Please enter next seed(q to quit):\n");
//	}
//	printf("Done\n");
//
//	return 0;
//}



/*�����嵥12.13manydice.c�ļ�--��������ӵ�ģ�����*/
//������嵥12.11--������ģ�����һ�����
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//#include"Program_list.h"
//
//int main(void)
//{
//	int dice, roll;
//	int sides;
//	int status;
//	srand((unsigned int)time(0));//�������
//	printf("Enter the number of sides per die,0 t stop.\n");
//	while (scanf("%d", &sides) == 1 && sides > 0)
//	{
//		printf("How many dice?\n");
//		if ((status = scanf("%d", &dice)) != 1)
//		{
//			if (status == EOF)
//				break;//�˳�ѭ��
//			else
//			{
//				printf("You should have enter an integer.");
//				printf(" Let's begin again.\n");
//				while (getchar != '\n')
//					continue;//������������
//				printf("How many sides? Enter 0 to stop.\n");
//				continue;//����ѭ������һ�ε���
//			}
//		}
//		roll = roll_n_dice(dice, sides);
//		printf("You have rolled a %d using %d %d-sided dice.\n", roll, dice, sides);
//		printf("How many sides? enter 0 to stop.\n");
//
//	}
//	printf("The rollem() founction was called %d times.\n", roll_count);
//	printf("GOOD FORTUNE TO YOU!\n");
//
//	return 0;
//}



/*�����嵥12.14--��̬��������*/
//#include<stdio.h>
//#include<stdlib.h>//Ϊmalloc()��free()�ṩԭ��
//
//int main(void)
//{
//	double* ptd;
//	int max;
//	int number;
//	int i = 0;
//
//	printf("What's the maximum number of type double entries?");
//	if (scanf("%d", &max) != 1)
//	{
//		puts("Number not correctly entered -- bye.");
//		exit(EXIT_FAILURE);
//	}
//
//	ptd = (double*)malloc(max*sizeof(double));
//	if (ptd == NULL)
//	{
//		puts("Memory allocation failed.Goodbye.");
//		exit(EXIT_FAILURE);
//	}
//
//	//ptd����ָ����max��Ԫ�ص�����
//	puts("Enter the values(q to quit):");
//	while (i < max&&scanf("%lf", &ptd[i]) == 1)
//		++i;
//	printf("Here are you %d entries:\n", number = i);
//	for (i = 0; i < number; i++)
//	{
//		printf("%7.2f ", ptd[i]);
//		if (i % 7 == 6)
//			putchar('\n');
//	}
//	if (i % 7 != 0)
//		putchar('\n');
//	puts("Done.");
//	free(ptd);
//
//	return 0;
//}



/*�����嵥12.15--���ݱ�����ںδ���*/
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//int static_store = 30;
//const char* pcg = "String Literal";
//
//int main(void)
//{
//	int auto_store = 40;
//	char auto_string[] = "Auto char array";
//	int* pi;
//	char* pcl;
//	pi = (int*)malloc(sizeof(int));
//	*pi = 35;
//	pcl = (char*)malloc(strlen("Dynamic String") + 1);
//	strcpy(pcl, "Dynamic String");
//	printf("static_store: %d at %p\n", static_store, &static_store);
//	printf("auto_store: %d at %p\n", static_store, &auto_store);
//	printf("*pi:%d at %p\n", *pi, pi);
//	printf("%s at %p\n", pcg, pcg);
//	printf("%s at %p\n", auto_string, auto_string);
//	printf("%s at %p\n", pcl, pcl);
//	printf("%s at %p\n", "Quoted String", "Quoted String");
//	free(pi);
//	free(pcl);
//
//	return 0;
//}



/*�����嵥13.1--ʹ�ñ�׼I/O*/
//#include<stdio.h>
//#include<stdlib.h>//�ṩexit()����ԭ��
//int main(int argc,char* argv[])
//{
//	int ch;//��ȡ�ļ�ʱ���洢ÿ���ַ��ĵط�
//	FILE* fp;
//	unsigned long count = 0;
//	if (argc != 2)
//	{
//		printf("Usage: %s filename\n", argv[0]);
//		exit(EXIT_FAILURE);
//	}
//
//	if ((fp = fopen(argv[1], "r")) == NULL)
//	{
//		printf("Can not open %s.\n", argv[1]);
//		exit(EXIT_FAILURE);
//	}
//
//	while ((ch = getc(fp)) != EOF)
//	{
//		putc(ch, stdout);
//		count++;
//	}
//	fclose(fp);
//	printf("File %s have %d characters.\n", argv[1], count);
//
//	return 0;
//}


/*�����嵥13.2--���ļ�ѹ����ԭ����1/3!*/
//#include<stdio.h>
//#include<stdlib.h>//�ṩexit()����ԭ��
//#include<string.h>//�ṩstrcpy(),strcat()����ԭ��
//#define LEN 40
//int main(int argc,char* argv[])
//{
//	FILE *in, *out;//��������ָ���ļ���ָ��
//	int ch;
//	char name[LEN];//�洢����ļ���
//	int count=0;
//	//��������в���
//	if (argc < 2)
//	{
//		fprintf(stderr, "Usage:%s filename\n", argv[0]);
//		exit(EXIT_FAILURE);
//	}
//	//��������
//	if ((in = fopen(argv[1], "r")) == NULL)
//	{
//		fprintf(stderr, "I couldn't open the file \"%s\"\n", argv[1]);
//		exit(EXIT_FAILURE);
//	}
//	//�������
//	strncpy(name, argv[1], LEN - 5);//�����ļ���
//	name[LEN - 5] = '\0';
//	strcat(name, ".red");//�ļ��������.red
//	//��дģʽ���ļ�
//	if ((out = fopen(name, "w")) == NULL)
//	{
//		fprintf(stderr, "Can't creat output file.\n");
//		exit(3);
//	}
//	//��������
//	while ((ch = getc(in)) != EOF)
//		if (count++ % 3 == 0)
//			putc(ch, out);//��ӡ3���ַ��еĵ�1���ַ�
//   //��β����
//	if (fclose(in) != 0 || fclose(out) != 0)
//		fprintf(stderr, "Error in close files\n");
//
//	return 0;
//}


/*�����嵥13.3--ʹ�� fprintf()��fscanf() �� rewind() ����*/
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#define MAX 41
//
//int main(void)
//{
//	FILE* fp;
//	char words[MAX];
//	if ((fp = fopen("wordy", "a+")) == NULL)
//	{
//		fprintf(stderr, "Can't open \"wordy\"file.\n");
//			exit(EXIT_FAILURE);
//	}
//	puts("Enter words to add to the file; press the #");
//	puts("key at the beginning of a line to terminate.");
//	while ((fscanf(stdin, "%40s", words) == 1) && (words[0] != '#'))
//		fprintf(fp, "%s\n", words);
//	puts("File contents:");
//	rewind(fp);
//	/* ���ص��ļ���ʼ�� */
//	while (fscanf(fp, "%s", words) == 1)
//		puts(words);
//	puts("Done!");
//	if (fclose(fp) != 0)
//		fprintf(stderr, "Error closing file\n");
//
//	return 0;
//}



/*�����嵥13.4--������ʾ�ļ�����*/
//#include<stdio.h>
//#include<stdlib.h>
//#define CNTL_Z '\32'
//#define SLEN 81
//int main(void)
//{
//	char file[SLEN];
//	char ch;
//	FILE *fp;
//	long count, last;
//	puts("Enter the name of the file to be processed:");
//	scanf("%80s", file);
//	//ֻ��ģʽ
//	if ((fp = fopen(file, "rb")) == NULL)
//	{
//		printf("reverse can't open %s\n", file);
//		exit(EXIT_FAILURE);
//	}
//	//��λ���ļ�ĩβ
//	fseek(fp, 0L, SEEK_END);
//	last = ftell(fp);
//	for (count = 1L; count <= last; count++)
//	{
//		fseek(fp, -count, SEEK_END);
//		ch = getc(fp);
//		if (ch != CNTL_Z&&ch != 'r')
//			putchar(ch);
//	}
//	putchar('\n');
//	fclose(fp);
//
//	return 0;
//}



/*�����嵥13.5--���ļ����ӵ���һ���ļ�ĩβ*/
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#define BUFFSIZE 4096
//#define SLEN 81
//
//void append(FILE* source, FILE* dest);
//char* s_gets(char* st, int n);
//
//int main(void)
//{
//	//faָ��Ŀ���ļ���fsָ��Դ�ļ�
//	FILE *fa, *fs;
//	int files = 0;
//	char file_app[SLEN];
//	char file_src[SLEN];
//	int ch;
//	puts("Enter name of destination file:");
//	s_gets(file_app, SLEN);
//	if (fa = fopen(file_app, "a+") == NULL);
//	{
//		fprintf(stderr, "Can't open %s\n", file_app);
//		exit(EXIT_FAILURE);
//	}
//	if (setvbuf(fa, NULL, _IOFBF, BUFFSIZE) != 0)
//	{
//		fputs("Can't create output buffer\n", stderr);
//		exit(EXIT_FAILURE);
//	}
//	puts("Enter name of first source file(empty line to quit):");
//	while (s_gets(file_src, SLEN) && file_src[0] != '\0')
//	{
//		if (strcmp(file_src, file_app) == 0)
//			puts("Can't append file to itself\n", stderr);
//		else if ((fs = fopen(file_src, "r")) == NULL)
//			fprintf(stderr, "Can't open %s\n", file_src);
//		else
//		{
//			if (setvbuf(fs, NULL, _IOFBF, BUFFSIZE) != 0)
//			{
//				fputs("Can't create input buffer\n", stderr);
//				continue;
//			}
//			append(fs, fa);
//			if (ferror(fs) != 0)
//				fprintf(stderr, "Error in reading file %s.\n", file_src);
//			if (ferror(fa) != 0)
//				fprintf(stderr, "Error in writing file %s.\n", file_app);
//			fclose(fs);
//			files++;
//			printf("File %s appended.\n", file_src);
//			puts("Next file(empty line to quit):");
//		}
//	}
//	printf("Done appending %d files appended.\n", files);
//	rewind(fa);
//	printf("%s contents:\n", file_app);
//	while ((ch = getc(fa)) != EOF)
//		putchar(ch);
//	puts("Done displaying.");
//	fclose(fa);
//
//	return 0;
//}
//void append(FILE *source, FILE *dest)
//{
//	size_t bytes;
//	static char temp[BUFFSIZE]; // ֻ����һ��
//	while ((bytes = fread(temp, sizeof(char), BUFFSIZE, source)) > 0)
//		fwrite(temp, sizeof(char), bytes, dest);
//}
//char * s_gets(char * st, int n)
//{
//	char * ret_val;
//	char * find;
//	ret_val = fgets(st, n, stdin);
//	if (ret_val)
//	{
//		find = strchr(st, '\n');
//		if (find)
//			*find = '\0';
//		// ���һ��з�
//		// �����ַ����NULL��
//		// �ڴ˴�����һ�����ַ�
//		else
//			while (getchar() != '\n')
//				continue;
//	}
//	return ret_val;
//}


