#include <stdio.h>

int main() {
  int month, day, n=0, i;
  
  scanf("%d%d", &month, &day);
  
  switch(month)  //입력받은 개월수에 따라 일수를 계산하는 스위치문
  {
    case 1:
      for(i = 1; i <= day; i++, n++); break;
    case 2 : n = 31;
      for(i = 1; i <= day; i++, n++); break;
    case 3 : n = 59;
      for(i = 1; i <= day; i++, n++); break;
    case 4 : n = 90;
      for(i = 1; i <= day; i++, n++); break;
    case 5 : n = 120;
      for(i = 1; i <= day; i++, n++); break;
    case 6 : n = 151;
      for(i = 1; i <= day; i++, n++); break;
    case 7 : n = 181;
      for(i = 1; i <= day; i++, n++); break;
    case 8 : n = 212;
      for(i = 1; i <= day; i++, n++); break;
    case 9 : n = 243;
      for(i = 1; i <= day; i++, n++); break;
    case 10 : n = 273; //?
      for(i = 1; i <= day; i++, n++); break;
    case 11 : n = 304;
      for(i = 1; i <= day; i++, n++); break;
    default : n = 334;
      for(i = 1; i <= day; i++, n++); break;
  }
  
  switch(n % 7)  //총 n값에 7의 나머지를 구해서 어떤 요일인지 구하는 스위치문
  {
    case 0:
      printf("SUN"); break;
    case 1:
      printf("MON"); break;
    case 2:
      printf("TUE"); break;
    case 3:
      printf("WED"); break;
    case 4:
      printf("THU"); break;
    case 5:
      printf("FRI"); break;
    case 6:
      printf("SAT"); break;			
  }
  
  return 0;
}
