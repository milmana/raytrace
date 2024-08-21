#include "util.hh"

int main() {
	
	ppm_t<32,10,256> ppm_ ("hello.ppm");

        for (auto v: {1,2,3,4}) ppm_ << v;

	return 0;

}
