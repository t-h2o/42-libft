#include	"libtest.h"
#define		ARR		11
void	atoi_test(void)
{
	printf("\n\n\n\n\tATOI TEST\n\n");	




	const char *strings[ARR] = {
		"1",
		"a1",
		"--1",
		"++1",
		"+1",
		"-1",
		"0",
		"+42Lozz",
		"+101",
		"2147483647",
		"-2147483648",
	};
	
//	ft_str_int(strings, ft_atoi, atoi);

	int i = -1;
	while (++i < ARR)
		printf("%d.)\t%s\nft\t%d\natoi\t%d\n\n", i, strings[i], ft_atoi(strings[i]), atoi(strings[i]));

}

/*
 * 	* 1 * check(ft_atoi((e + "1").c_str()) == 1); showLeaks();
xxx* check(ft_atoi((e + "a1").c_str()) == 0); showLeaks();
* 3 * check(ft_atoi((e + "--1").c_str()) == 0); showLeaks();
* 4 * check(ft_atoi((e + "++1").c_str()) == 0); showLeaks();
* 5 * check(ft_atoi((e + "+1").c_str()) == 1); showLeaks();
* 6 * check(ft_atoi((e + "-1").c_str()) == -1); showLeaks();
* 7 * check(ft_atoi((e + "0").c_str()) == 0); showLeaks();
* 8 * check(ft_atoi((e + "+42lyon").c_str()) == 42); showLeaks();
* 9 * check(ft_atoi((e + "+101").c_str()) == 101); showLeaks();
 10 * check(ft_atoi((e + to_string(INT_MAX)).c_str()) == INT_MAX); showLeaks();
 11 * check(ft_atoi((e + to_string(INT_MIN)).c_str()) == INT_MIN); showLeaks();
 12 * check(ft_atoi("-+42") == 0); showLeaks();
 13 * check(ft_atoi("+-42") == 0); showLeaks();
 14 * check(ft_atoi((string("+") + e + "42").c_str()) == 0); showLeaks();
 15 * check(ft_atoi((string("-") + e + "42").c_str()) == 0); showLeaks();
 16 * check(ft_atoi((string("1") + e + "42").c_str()) == 1); showLeaks();
 17 * check(ft_atoi((string("-1") + e + "42").c_str()) == -1); showLeaks();
	write(1, "\n", 1);
	
*/
