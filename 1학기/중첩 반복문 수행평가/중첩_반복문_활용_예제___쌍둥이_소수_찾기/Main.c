#include <stdio.h>
int main()
{
	int N;
	int a = 0, b = 0;
	int cnt = 0;
	int q;

	scanf("%d", &N);

	for (int p = 2; p <= N; p++) {
		
		for (int i = 2; i < p; i++) { // 일반적인 상태에서 소수구하고 a++
			if (p%i == 0) {
				a++;
				break;
			}
		}
		
		q = p + 2; // 쌍둥이 소수를 구하므로 2를 더해줌

		for (int j = 2; j < q; j++) { // 2를 더한 값에서 소수 구하고 b++
			if (q%j == 0) {
				b++;
				break;
			}
		}

		// 만약 a == b면 (3,5), ... 와 같은 식으로
		// 소수가 a에서 n개 b에서 n개 나왔다는 것을 알 수 있으므로
		// 이는 결국 두 소수가 쌍둥이 소수임을 암시
		if (a == 0 && b == 0)
			cnt++; // 개수를 구하므로 카운트변수 ++

		// 몇개 있는지 알기 위함이었을 뿐이므로 한번 돌았을 때 초기화 시켜줘야됨.
		a = 0;
		b = 0;
		
	}

	printf("%d", cnt);

	return 0;
}