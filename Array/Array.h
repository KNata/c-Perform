#ifndef _ARRAY_H
#define _ARRAY_H

#include <ostream>
#include <cstring>

using namespace std;

template <int size, class Elem> class Array 
{
private:
	const size_t _size;
	Elem*  _data;

	Array(const Array& anArray) : _data(anArray._data), _size(anArray._size) 
{
	#ifndef NDEBUG
	#endif
};
	Array& operator=(const Array& arr); // this

public:
	class BadArray
	{
		private:
			string _message;
			size_t _index;

		public:
			
			BadArray(string message, size_t index);
			void diagnose() const
			{
				{
					cerr<<_message;
					if (_index != 0)
					{
						cerr<<' '<<_index;
					}
						cerr<<endl;
					return;
				}
			}
		};

	explicit Array(const size_t size) : _size(size),  _data(new Elem[_size]) 
{
	#ifndef NDEBUG
	#endif
};
	
	

	~Array()
	{
		delete[] _data;
	}

	Elem& operator[](const size_t index)
		{
		if (index > 0 && index <= _size)
		{
			return _data[index];
		}
		else
		{
			throw new BadArray("Bad index (index < 0 || index > _size)", index);
		}
	} 

	const Elem& operator[] (const size_t index) const
		{
		if (index > 0 && index <= _size)
		{
			return _data[index];
		}
		else
		{
			throw new BadArray("Bad index (index < 0 || index > _size)", index);
		}
	} 

	size_t size()
		{
		return _size;
	}


	const size_t size() const
		{
		return _size;
	}


	bool isEmpty()
		{
		return _size > 0;
	}

	bool contains(const Elem& elem)
		{
		for (size_t i = 0; i < _size; i++) 
		{
			if (_data[i] == elem)
			{
				return true;
			}
		}
		return false;
	}

	void showData()
		{
		for (size_t i = 0; i < _size; i++)
		{
			cout<<_data[i]<<' | ';
		}
	}
};

template <size_t size, class Elem> ostream& operator<<(ostream& os, const Array <size, Elem>& arr)
	{
	char ch = ' ';
	cout<<"Array of "<<arr.size()<<':';
	for (size_t i = 0; i < arr.size(); i++)
	{
		cout<<ch<<arr[i];
		if (ch == ' ')
		{
			ch = ', ';
		}
	}
	cout<<'.'<<endl;
	return os;
}

#endif