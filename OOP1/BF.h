#pragma once

class BF
{
private:
	int* values;

public:
	BF();
	BF(int* values);

	BF con(BF y);
	BF dis(BF y);
	void otr();
	void set_values(int* new_values);
	int* get_values();
	void show_values();
	void delete_values();

};