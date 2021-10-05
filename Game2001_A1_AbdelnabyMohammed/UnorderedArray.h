#pragma once
#include <cassert>

template<class T>
class UnorderedArry
{
public:
	UnorderedArry(int size, int growBy = 1) : m_arry(NULL), m_maxSize(0), m_growSize(0), m_numElements(0)
	{
		if (size >= 0)
		{
			m_maxSize = size;
			m_array = new T[m_maxSize];
			memset(m_array, 0, m_maxSize);
		}
	}
private:
	T* m_array;
	int m_maxSize;
	int m_growSize;
	int m_numElements;

};