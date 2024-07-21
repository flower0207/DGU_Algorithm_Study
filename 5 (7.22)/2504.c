#include <stdio.h>

char	str[31];
int cart = 1, row_left = 0, row_right = 0, high_left = 0, high_right = 0, result = 0, f = 0;
int main(void)
{
	scanf("%s", str);
	for(int i = 0; str[i]; i++)
	{
		if (str[i] == '(')
		{
			f = 1;
			row_left++;
			cart *= 2;
		}
		else if (str[i] == '[')
		{
			f = 2;
			high_left++;
			cart *= 3;
		}
		else if (str[i] == ')')
		{
			row_right++;
			if (row_right > row_left)            // "[)(]" 예외 처리
				break ;
			if (f == 1)
				result += cart;
			if (f == 2)                          // 이전 괄호가 대괄호인 경우 예외 처리
			{
				result = 0;
				break ;
			}
			cart /= 2;
			f = 0;
		}
		else if (str[i] == ']')
		{
			high_right++;
			if (high_right > high_left)            // "(][)" 예외 처리
				break ;
			if (f == 2)
				result += cart;
			if (f == 1)                            // 이전 괄호가 소괄호인 경우 예외 처리
			{
				result = 0;
				break ;
			}
			cart /= 3;
			f = 0;
		}
		else
			break ;
	}
    // 괄호 대칭이 서로 맞지 않는다면 예외 처리
	if (row_left != row_right || high_left != high_right)
		result = 0;
	printf("%d\n", result);
	return (0);
}
