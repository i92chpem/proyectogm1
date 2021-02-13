#include "cute.h"
#include "ide_listener.h"
#include "xml_listener.h"
#include "cute_runner.h"

void testEsDni()
{
	string dni = 26829434A;
	Persona p = Persona();
	bool resultado = p.esDni(dni);
	ASSERT(resultado == true);
}

void testNoEsDni()
{
	string dni 26935365Y;
	Persona p = Persona();
	bool resultado = p.esDni(dni);
	ASSERT(resultado == false);
}

void thisIsATest() {
	ASSERTM("start writing tests", false);	
}

bool runAllTests(int argc, char const *argv[]) {
	cute::suite s { };
	//TODO add your test here
	s.push_back(CUTE(testEsDni));
	s.push_back(CUTE(testNoEsDni));
	cute::xml_file_opener xmlfile(argc, argv);
	cute::xml_listener<cute::ide_listener<>> lis(xmlfile.out);
	auto runner = cute::makeRunner(lis, argc, argv);
	bool success = runner(s, "AllTests");
	return success;
}

int main(int argc, char const *argv[]) {
    return runAllTests(argc, argv) ? EXIT_SUCCESS : EXIT_FAILURE;
}
