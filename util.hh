#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <stdexcept>



template <size_t COLS, size_t ROWS, unsigned INT>
struct ppm_t {

        // portable pixel map

        std::ofstream fhandle_;

        ppm_t(std::string fname) {
                fhandle_ = std::ofstream(fname, std::ios::out);
                if ( ! fhandle_.is_open()) throw std::runtime_error("failed to open");
                fhandle_ << "P3" << std::endl;
                fhandle_ << COLS << " " << ROWS << std::endl;
                fhandle_ << INT << std::endl;
        }

        ~ppm_t(){ 
		fhandle_.close();
	}

};

template <size_t COLS, size_t ROWS, unsigned INT, typename T>
ppm_t<COLS,ROWS,INT>& operator<<(ppm_t<COLS,ROWS,INT>& ppm, T val) {
        ppm.fhandle_ << val << std::endl;
        return ppm;
}
