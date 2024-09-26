#include "HashMap.h"

int main()
{
	int my_value;
	HashMap map;
	map.Add(21, 21);
	map.Add(11, 11);
	cout << "count : " << map.count << endl;
	my_value = map.GetValue(21);
	cout << my_value << endl;

	map.Remove(21);
	my_value = map.GetValue(11);
	cout << "count : " << map.count << endl;
	cout << my_value << endl;
	
	map.Clear();
	map.Add(11, 111);
	my_value = map.GetValue(11);
	cout << "count : " << map.count << endl;
	cout << my_value << endl;

}