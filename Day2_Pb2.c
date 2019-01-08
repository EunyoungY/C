//안녕 자비스 아까 너무 말을 많이해서 힘들다. 조금 간략하게 진행해 볼게.
//#include할거야 표준입출력을 가능하게 해주는 헤더파일을
#include <stdio.h>
//main함수 안에 내가 하고싶은 말을 구현해볼게
int main(void) {
  float m2_area;
  float pyung_area;

//너가 구현해야할 논리의 핵심을 정리해 줄게. 
//input = float형 m2_area ->아파트 분양 면적(m2단위),       
//output = float형 pyung_area ->아파트 분양 면적(평형단위) 
  printf("아파트의 분양 면적을 제곱미터(m2)단위로 입력하세요."); 
  scanf("%f", &m2_area);

//자바에서 +의 역할을 C에서는 ,가 하고 있네
  pyung_area = m2_area/3.305;
  printf("%.f", pyung_area,"평");
}





// float a() {
//   printf("Hello I'm a");
// } 

// int main(void){
//   printf("Hello");
//   a();
// }
