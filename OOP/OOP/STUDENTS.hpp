
#ifndef _STUDENTS_HPP_
#define _STUDENTS_HPP_
#include <string>

using namespace std;

typedef enum {
	MALE,
	FEMALE
}Gender;

typedef enum {
	EXCELLENT,
	GOOD,
	AVERAGE,
	WEAK
}Rank;

class Sinhvien {
private:
	int id;
	
	string name;
	int ages;
	Gender gender;
	double score_math;
	double score_chemistry;
	double score_physical;
public:
	Sinhvien(string name, int age, Gender gender, int math, int chemistry, int physical) :
		name(name), ages(age), gender(gender), score_math(math), score_chemistry(chemistry), score_physical(physical) {
		static int ID = 21075291;
		id = ID;
		ID++;
	}
	
	string getName();
	
	int getAge();
	int getID();

	double getMath();

	double getPhysical();

	double getChemistry();

	Gender getGender();
	Rank getRank();
};

#endif // !_STUDENTS_HPP_
