#ifndef EMPLOYEE_H
#define EMPLOYEE_H
class Employee {
	public:
		int id;
		int total_calls;
		int pos_calls;
		int neg_calls;
		int ps;
		Employee(){
			id = 0;
			total_calls = 0;
			pos_calls = 0;
			neg_calls = 0;
			ps = 0;
		}
		void createEmployee(int id, int total_calls, int pos_calls, int neg_calls) {
			this->id = id;
			this->total_calls = total_calls;
			this->pos_calls = pos_calls;
			this->neg_calls = neg_calls;
			this->ps = 2 * this->total_calls + this->pos_calls - this->neg_calls;
		}
};
#endif