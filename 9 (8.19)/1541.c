#include <stdio.h>

int main(void)
{
	int num[50] = {0};
 	int f[50] = {0};
 
	int i = 0, j = 0;
	int cnt = 0;
	char s = getchar(); //문자 형식으로 입력 받은 후 키보드 buffer에서 한 개씩 꺼냄
	while(1==1) 
	{
		static int tmp = 0; //부분합
		if(s == '\n') //줄바꿈 문자가 나오면 종료
       	 { num[i++] = tmp; //종료전까지 있던 수를 저장
			break; }
		
		if(s == '+' || s == '-') //기호
		{
			num[i++] = tmp; //그 전까지의 수 저장
			f[j++] = s; //기호 저장
			cnt = 0; //자릿수 초기화
			tmp = 0; //부분합 초기화
		} else {
			if(cnt == 0) {//1 자릿수
				tmp = s-48;
				cnt++; //자릿수 증가
			}
			else { //2 자릿수 이상
				tmp *= 10;
				tmp += s - 48;
			}
		}
		s = getchar(); //하나씩 입력 buffer에서 가져오기
	}
	
	int sum = 0; //최솟값을 담을 변수
	int n = i;
	for(i = 0; i<n; i++)
	{
		static int sw = 0; //'-'가 있으면 계속 1로 존재
		if(sw == 0) sum += num[i]; //'-'가 안 뜨는 경우 더해주고,
		else sum -= num[i]; //'-'가 한 번이라도 나왔다면, 다 빼준다.
	
		if(f[i] == '-' && i<n-1) sw = 1; //'-'일 경우 sw = 0 -> sw = 1
	}
	
	printf("%d", sum);
	return 0;
}
