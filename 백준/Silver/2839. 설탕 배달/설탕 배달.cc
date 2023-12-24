#include <iostream>

int sugarNum(int);

int main() {
    int N = 0;  // N킬로그램 배달
    int minN = 0;  // 배달하는 봉지의 최소 개수 or -1

    std::cin >> N;  // N 입력받기
    minN = sugarNum(N);

    std::cout << minN;

    return 0;
}

int sugarNum(int num) {
    int x;  // x는 3kg 봉지 개수
    int y = 0;  // y는 5kg 봉지 개수
    int minN_saved = 0;  // num = x*3 + y*5 및 x,y 정수 조건을 만족 시 가능한 경우의 수 중 x+y의 최솟값을 찾아야 함

    for (x = 0; x <= (num / 3); x++) {  // x에 대해 0~num/3까지 돌림
        if ((num - x * 3) % 5 == 0) {  // y 정수 판정, y*5를 5로 나누었을 때 나머지가 0이면 정수
            // 현재까지 도출한 최솟값과 비교해 최소 봉투 개수 저장
            y = (num - x * 3) / 5;
            if (minN_saved == 0) {  // 맨 처음 대입 시에만
                minN_saved = x + y;
            } else {
                // 현재까지 도출한 최솟값과 비교해 더 작거나 같으면 대입
                if (minN_saved >= x + y) {
                    minN_saved = x + y;
                }
            }
        }
    }

    // X에 대해 for문 돌렸을 때 만족하는 정수 y가 없다면? (minN_saved == 0)
    if (minN_saved == 0) {
        minN_saved = -1;  // 정확하게 N킬로그램을 만들 수 없다면 -1 출력
    }

    return minN_saved;
}