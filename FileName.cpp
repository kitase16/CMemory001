#include <iostream>
#include <cstdint>

struct CMemory {
	typedef std::int16_t PinWord;
	enum ALU {None,Add,Sub,Mul,Div,Mod,And,Or,Nand,Nor,Not,Xor,Nxor};
	enum IO { in, out };
	enum Data { Int, Float, Char, Bool ,String};

	std::intmax_t Work[512] = {};
	std::int16_t Pool[2][128 * 1024] = { {} ,{} };

	PinWord Out = 0;
	PinWord In = 0;
	//Random number generator. so many.
};

void Process(CMemory& mem) {
	//Process the memory and do the operations.
}

void Setup(CMemory& mem,CMemory::PinWord PW) {
	//Setup the memory with the program and data.
	mem.In = PW;
}
void Run(CMemory& mem) {
	Process(mem);
	std::cout << "Output: " << mem.Out << std::endl;
}

int main() {
	CMemory mem;
	Setup(mem, 42); // Example input
	Run(mem);

	return 0;
}

