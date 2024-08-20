#include "Serializer.hpp"

int main(void)
{
	Data *data = new Data();
	data->name = "Elise";
	data->age = 26;

	uintptr_t raw = Serializer::serialize(data);
	Data *newData = Serializer::deserialize(raw);
	std::cout << "name: " << newData->name
	<< "\nage: " << newData->age << std::endl;
}
