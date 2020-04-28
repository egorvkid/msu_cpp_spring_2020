
#include <cassert>
#include <iostream>
#include <string>
#include <cstdint>
#include <cstddef>
#include <algorithm>
#include <cmath>
#pragma once

class BigInt {

	static const uint8_t BASE = 10;
	const uint8_t offset = 48;
	bool sign_ = true; // true - �������������, false - �������������
	uint8_t* data_;
	size_t size_;


public:
	// ����������� �� ��������� (������� ������� BigInt)
	BigInt();

	// ����������� �� ��������� �� ������ uint8_t � �������
	BigInt(uint8_t* data, size_t size, bool sign);

	// ����������� �� ������
	BigInt(const std::string& str);

	// ����������� �����������
	BigInt(BigInt const& other);

	// ���������� 
	~BigInt();

	// ���������� int � BigInt
	BigInt(int x);

	// �������� ������������	
	BigInt& operator= (BigInt const& other);


	// ��������� ���������
	bool operator> (BigInt const& other) const;

	bool operator== (BigInt const& other) const;

	bool operator< (BigInt const& other) const;

	bool operator>= (BigInt const& other) const;

	bool operator<= (BigInt const& other) const;


	// ������� �����
	BigInt operator- () const;


	// ���. ��������� ��������� (�� ������)
	bool abs_gt(BigInt const& other) const;

	bool abs_eq(BigInt const& other) const;


	// �������� � ���������
	BigInt operator+ (BigInt const& other);
	BigInt operator- (BigInt const& other);

	// �������� � ��������� inplace
	const BigInt& operator+=(const BigInt& other);
	const BigInt& operator-=(const BigInt& other);


	// ���. ������ ��� ���������� �������� � ���������
	static BigInt _subtract(BigInt const& a, BigInt const& b);

	static BigInt _add(BigInt const& a, BigInt const& b);

	// �������� �� �������� �� ������ �������, ����������� �����
	static BigInt _abs_subtract(BigInt const& a, BigInt const& b);

	// ���������� �� ������
	static BigInt _abs_sum(BigInt const& a, BigInt const& b);


	std::string to_str() const;
	void set_sign(bool sign);
	bool get_sign() const;
	size_t get_size() const;

	friend std::ostream& operator<< (std::ostream& out, const BigInt& x);

};
