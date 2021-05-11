//Example1 - using the stack
//to call subroutines
//New instructions:
//push, pop, call, ret, mov
int sub() {
	return 0xbeef;
}
int main() {
	sub();
	return 0xf00d;
}