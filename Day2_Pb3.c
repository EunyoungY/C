#include <stdio.h>

int main(void) {
  int num1, num2, num3;
  //세개의 정수를 입력하라고 말해! 그리고 &연산자가 마법의 지팡이처럼 &오른쪽에 쓰인 변수가 어디에 사는지 그 주소에 접근할 수 있다고 했지. 그 주소에 decimal 정수를 받아서 scanf로 똑똑똑 문을 두드리고 들어가서 아까 말했듯 b동 1402호에 값을 저장할거야. 
  printf("Input three integer numbers: ");
  scanf("%d %d %d", &num1, &num2, &num3);

//&&연산자는 수학에서의 and와 같은 의미야. ||는 or.  '='하나는 우항의 값을 좌항에 대입할 때 쓰는 연산자인 반면, '=='두개가 되면 좌항과 우항을 비교하는 연산자로 쓰여. 여기서 그럼 좌항과 우항을 비교했을 때 다른 값을 가졌으면 싶을 때도 있지? 그때는 '!='를 사용하면 돼
//너는 연산자들을 받아들일 때 순위가 정해져있어. if문의 시작에서 '('가 보이지? 괄호 안에 묶인 이 논리를 먼저 볼거고 ')' 표시가 나오면 그 이후에 ||을 비교할거야. 나는 가독성을 위해 비교식을 (괄호)로 묶었지만 괄호가 없어도 ==나 >, <가 || 또는 && 보다 우선순위에 있어.
  if((num1==num2) ||(num1==num3) || (num1==num2) ) {
    printf("1, ");
  }
  if((num1>50 && num2>50) ||(num1>50 && num3>50) || (num2>50 &num3>50)) {
    printf("2, ");
  }
  if((num1+num2==num3) || (num1+num3==num2) || (num2+num3==num1)){
    printf("3, ");
  }
  if( ((num1%num3==0) && (num2%num3==0)) || ((num1%num2==0) && (num3%num2==0)) || ((num2%num1==0) && (num3%num1==0))) {
    printf("4");
  }
}
