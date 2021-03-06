#include <stdio.h>
#include <stdlib.h>

int	ft_print_unid(char *unid[], char *prins[], char a[], int n)
{
	printf("%s ", unid[a[n] - '0']);
	if (n / 3 > 0)
	{
		printf("%s ", prins[(n / 3) - 1]);
		n--;
	}
	else
		n = -1;
	return (n);
}

int	ft_print_dec_ten(char a[], char *tens[], char *prins[], int n)
{
	printf("%s ", tens[(a[n] - '0') - 1]);
	n--;
	if (n / 3 > 0)
	{
		printf("%s ", prins[(n / 3) - 1]);
		n--;
	}
	else
		n = -1;
}

int ft_print_dec(char a[], char *tens[], char *prins[], char *teens[], int n)
{
	if (a[n] == '1')
	{
		if (a[n - 1] == '0')
		{
			n = ft_print_dec_ten(a, tens, prins, n);
		}
		else
		{
			printf("%s ", teens[(a[n - 1] - '0') - 1]);
			n--;
			if (n / 3 > 0)
			{
				printf("%s ", prins[(n / 3) - 1]);
				n--;
			}
			else
				n = -1;
		}
	}
	else
	{
		printf("%s ", tens[(a[n] - '0') - 1]);
		n--;
	}
	return (n);
}

int	ft_print_esp(char a[], char *prins[], int n)
{
	if (n % 3 == 0 && n / 3 > 0 && (a[n + 1] != '0' || a[n + 2] != '0'))
	{
		printf("%s ", prins[(n / 3) - 1]);
	}
	n--;
	return (n);
}

void	ft_imprimir_nombre(char *a)
{
	int		n;
	int		cifra_terna;
	char	*dcc_unid[10];
	char	*dcc_tens[9];
	char	*dcc_teens[9];
	char	*dcc_prins[12];

	dcc_unid[0] = "zero";
	dcc_unid[1] = "one";
	dcc_unid[2] = "two";
	dcc_unid[3] = "three";
	dcc_unid[4] = "four";
	dcc_unid[5] = "five";
	dcc_unid[6] = "six";
	dcc_unid[7] = "seven";
	dcc_unid[8] = "eight";
	dcc_unid[9] = "nine";
	dcc_teens[0] = "eleven";
	dcc_teens[1] = "twelve";
	dcc_teens[2] = "thirteen";
	dcc_teens[3] = "fourteen";
	dcc_teens[4] = "fifteen";
	dcc_teens[5] = "sixteen";
	dcc_teens[6] = "seventeen";
	dcc_teens[7] = "eighteen";
	dcc_teens[8] = "nineteen";
	dcc_tens[0] = "ten";
	dcc_tens[1] = "twenty";
	dcc_tens[2] = "thirty";
	dcc_tens[3] = "forty";
	dcc_tens[4] = "fifty";
	dcc_tens[5] = "sixty";
	dcc_tens[6] = "seventy";
	dcc_tens[7] = "eighty";
	dcc_tens[8] = "ninety";
	dcc_prins[0] = "thousand";
	dcc_prins[1] = "million";
	dcc_prins[2] = "billion";
	dcc_prins[3] = "trillion";
	dcc_prins[4] = "quadrillion";
	dcc_prins[5] = "quintillion";
	dcc_prins[6] = "sextillion";
	dcc_prins[7] = "septillion";
	dcc_prins[8] = "octillion";
	dcc_prins[9] = "nonillion";
	dcc_prins[10] = "decillion";
	dcc_prins[11] = "undecillion";
	n = 9;
	while (n >= 0)
	{
		if (a[n] == '0')
		{
			ft_print_esp(a, dcc_prins, n);
		}
		else
		{
			cifra_terna = n % 3;
			if (cifra_terna == 2)
			{
				printf("%s hundread ", dcc_unid[a[n] - '0']);
				n--;
			}
			if (cifra_terna == 1)
				n = ft_print_dec(a, dcc_tens, dcc_prins, dcc_teens, n);
			if (cifra_terna == 0)
				n = ft_print_unid(dcc_unid, dcc_prins, a, n);
		}
	}
}

int	main(void)
{
	char a[] = "9220051216";
	ft_imprimir_nombre(a);
	return (0);
}


