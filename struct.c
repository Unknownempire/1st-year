#include <stdio.h>

struct student {
	char id;
	int roll_no; 

};

int main() {
	struct student a, b;

	a.id = 'b';
	a.roll_no = 27;
	
	b.id = 'a';
	
	b.roll_no = 543;

	printf("%c\n%d\n%c\n%d", a.id, a.roll_no, b.id, b.roll_no);
	return 0;
}
