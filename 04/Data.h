#pragma once
#include "Serializer.h"
#include "Deserializer.h"
#include "Error.h"
#include <cstdint>

struct Data
{
	uint64_t a;
	bool b;
	uint64_t c;

	// � serialize �������� ������ �� Serializer
	// ��������� ��� �������� ()
	// ������� �������� ����� process
	// ������� ��������� ���� Data � �������� ����������
	template <class Serializer>
	Error serialize(Serializer& serializer)
	{
		return serializer(a, b, c);
	}

	// ����� �� ���������� � �����. ����
	// �����. ������ �� ������
	template <class Deserializer>
	Error deserialize(Deserializer& deserializer)
	{
		return deserializer(a, b, c);
	}
};