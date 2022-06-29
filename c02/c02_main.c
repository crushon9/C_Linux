#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "./ex00/ft_strcpy.c"
#include "./ex01/ft_strncpy.c"
#include "./ex02/ft_str_is_alpha.c"
#include "./ex03/ft_str_is_numeric.c"
#include "./ex04/ft_str_is_lowercase.c"
#include "./ex05/ft_str_is_uppercase.c"
#include "./ex06/ft_str_is_printable.c"
#include "./ex07/ft_strupcase.c"
#include "./ex08/ft_strlowcase.c"
#include "./ex09/ft_strcapitalize.c"
#include "./ex10/ft_strlcpy.c"
#include "./ex11/ft_putstr_non_printable.c"
#include "./ex12/ft_print_memory.c"

int main()
{
    //ex00
    printf("ex00\n");
    char ex00_src[] = "hello world!";
	char ex00_dest[20];
    printf("src : %s\n", ex00_src);
	ft_strcpy(ex00_dest, ex00_src);
	printf("ft_strcpy : %s\n\n", ex00_dest);

    //ex01
    printf("ex01\n");
    char ex01_src[] = "123456789";
	char ex01_dest[20];
	printf("src : %s\nn = 5\n", ex01_src);
	ft_strncpy(ex01_dest, ex01_src, 5);
	printf("ft_strncpy : %s\n\n", ex01_dest);

    //ex02
    printf("ex02\n");
    char ex02_arr1[] = "asdg";
	char ex02_arr2[] = " a663dtsljljk at;kzcgk";
	char ex02_arr3[] = "51235 sdtlna ;kl";
	char ex02_arr4[] = "";
	printf("arr1 : %s\n%d\n", ex02_arr1, ft_str_is_alpha(ex02_arr1));
    printf("arr2 : %s\n%d\n", ex02_arr2, ft_str_is_alpha(ex02_arr2));
    printf("arr3 : %s\n%d\n", ex02_arr3, ft_str_is_alpha(ex02_arr3));
    printf("arr4 : %s\n%d\n\n", ex02_arr4, ft_str_is_alpha(ex02_arr4));

    //ex03
    printf("ex03\n");
    char ex03_arr1[] = "asdg";
	char ex03_arr2[] = " a663dtsljljk at;kzcgk";
	char ex03_arr3[] = "12125136";
	char ex03_arr4[] = "";
    printf("arr1 : %s\n%d\n", ex03_arr1, ft_str_is_numeric(ex03_arr1));
    printf("arr2 : %s\n%d\n", ex03_arr2, ft_str_is_numeric(ex03_arr2));
    printf("arr3 : %s\n%d\n", ex03_arr3, ft_str_is_numeric(ex03_arr3));
    printf("arr4 : %s\n%d\n\n", ex03_arr4, ft_str_is_numeric(ex03_arr4));

    //ex04
    printf("ex04\n");
    char ex04_arr1[] = "asdg";
	char ex04_arr2[] = "atsljljkSDTNL";
	char ex04_arr3[] = "51235 sdtlna ;kl";
	char ex04_arr4[] = "";
    printf("arr1 : %s\n%d\n", ex04_arr1, ft_str_is_lowercase(ex04_arr1));
    printf("arr2 : %s\n%d\n", ex04_arr2, ft_str_is_lowercase(ex04_arr2));
    printf("arr3 : %s\n%d\n", ex04_arr3, ft_str_is_lowercase(ex04_arr3));
    printf("arr4 : %s\n%d\n\n", ex04_arr4, ft_str_is_lowercase(ex04_arr4));

    //ex05
    printf("ex05\n");
    char ex05_arr1[] = "asdg";
	char ex05_arr2[] = "ASNLTLKAT";
	char ex05_arr3[] = "51235 ASTNKSKLsdtlna ;kl";
	char ex05_arr4[] = "";
    printf("arr1 : %s\n%d\n", ex05_arr1, ft_str_is_uppercase(ex05_arr1));
    printf("arr2 : %s\n%d\n", ex05_arr2, ft_str_is_uppercase(ex05_arr2));
    printf("arr3 : %s\n%d\n", ex05_arr3, ft_str_is_uppercase(ex05_arr3));
    printf("arr4 : %s\n%d\n\n", ex05_arr4, ft_str_is_uppercase(ex05_arr4));

    //ex06
    printf("ex06\n");
    char ex06_arr1[] = "asdg";
	char ex06_arr2[] = "ASNLTLKAT";
	char ex06_arr3[] = "한국";
	char ex06_arr4[] = "";
    printf("arr1 : %s\n%d\n", ex06_arr1, ft_str_is_printable(ex06_arr1));
    printf("arr2 : %s\n%d\n", ex06_arr2, ft_str_is_printable(ex06_arr2));
    printf("arr3 : %s\n%d\n", ex06_arr3, ft_str_is_printable(ex06_arr3));
    printf("arr4 : %s\n%d\n\n", ex06_arr4, ft_str_is_printable(ex06_arr4));

    //ex07
    printf("ex07\n");
    char ex07_str[] = "Hello I'm hunpark!!";
    printf("before str : %s\n", ex07_str);
	printf("after str : %s\n\n", ft_strupcase(ex07_str));

    //ex08
    printf("ex08\n");
    char ex08_str[] = "Hello I'm hunpark!!";
    printf("before str : %s\n", ex08_str);
	printf("after str : %s\n\n", ft_strlowcase(ex08_str));

    //ex09
    printf("ex09\n");
    char str1[] = " salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    char str2[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    char str3[] = " Salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    char str4[] = " sAlut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    char str5[] = "Salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    char str6[] = " salut, d comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    
    printf("before str : %s\n", str1);
    printf("after str : %s\n\n", ft_strcapitalize(str1));  
    printf("before str : %s\n", str2);
    printf("after str : %s\n\n", ft_strcapitalize(str2)); 
    printf("before str : %s\n", str3);
    printf("after str : %s\n\n", ft_strcapitalize(str3));  
    printf("before str : %s\n", str4);
    printf("after str : %s\n\n", ft_strcapitalize(str4));
    printf("before str : %s\n", str5);
    printf("after str : %s\n\n", ft_strcapitalize(str5));  
    printf("before str : %s\n", str6);
    printf("after str : %s\n\n", ft_strcapitalize(str6));
    
	//ex10
    printf("ex10\n");

    char ex10_src[] = "hello my name is hunpark!";
	char ex10_dest[30];
    printf("src : %s, size = 10\n", ex10_src);
	printf("ft_strlcpy : %d\n", ft_strlcpy(ex10_dest, ex10_src, 10));
	printf("dest : %s\n\n", ex10_dest);

    //ex11
    printf("ex11\n");
    char ex11_str[] = "Coucou*tu vas bien ?";
	ex11_str[6] = 127;
    printf("str : %s\n", ex11_str);
	ft_putstr_non_printable(ex11_str);
    printf("\n\n");

	//ex12
	printf("ex12\n");
	char string[92] = "Bonjour les aminches***c est fou*tout*ce qu on peut faire avec***print_memory*****lol*lol* ";
	string[20] = 9;
	string[21] = 10;
	string[22] = 9;
	string[32] = 5;
	string[37] = 9;
	string[62] = 24;
	string[63] = 10;
	string[64] = 9;
	string[77] = 10;
	string[78] = 30;
	string[79] = 10;
	string[80] = 9;
	string[81] = 10;
	string[85] = 10;
	string[89] = 9;
	ft_print_memory(string, 92);
	printf("Address\n");
	for (int i = 0; i < 6; i++)
	{
		printf("%p\n", string + 16 * i);
	}
}
