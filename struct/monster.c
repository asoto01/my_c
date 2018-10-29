#include <stdio.h>
struct monster {
	double size;
};
int main() {
	struct monster *m;
	struct monster m1;
	m = &m1;
	m1.size = 100.00;
	printf("%f\n", m->size);
	return 0;
}
