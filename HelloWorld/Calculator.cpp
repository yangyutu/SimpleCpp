#include <pybind11/pybind11.h>

namespace py = pybind11;

// do complicated calculation
struct Calculate {
	Pet(const std::string &name) : name(name) { }
	void setName(const std::string &name_) { name = name_; }
	const std::string &getName() const { return name; }
	long factorial(int n);
	std::string name;
};

	long Calculate::factorial(int n)
	{ 
		return factorialHelper(n);
	}
	
	long factorialHelper(int n)
	{
		if (n == 1) {
			return n;
		} else{
			return n*factorHelper(n-1);
		}
	}
	
	
	PYBIND11_MODULE(Calculator, m) {
		py::class_<Pet>(m, "Pet")
			.def(py::init<const std::string &>())
			.def("setName", &Pet::setName)
			.def("getName", &Pet::getName)
			.def("factorial", &Calculate::factorial);
	}