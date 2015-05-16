#include "Array.h"
/*
template <int size, class Elem> Array<size, Elem>:: Array(size_t size) : _size(size),  _data(new Elem[_size]) 
{
	#ifndef NDEBUG
	#endif
};


template <int size, class Elem> Array<size, Elem>:: Array(const Array& anArray) : _data(anArray._data), _size(anArray._size) 
{
	#ifndef NDEBUG
	#endif
};

template <int size, class Elem> Array<size, Elem>::BadArray::BadArray (string message, size_t index) : _message(message), _index(index) {};

template <int size, class Elem> void Array<size, Elem>::BadArray:: diagnose() const
	{
		cerr<<_message;
		if (_index != 0)
		{
			cerr<<' '<<_index;
		}
			cerr<<endl;
		return;
	}
	
template <int size, class Elem> Array<size, Elem>:: ~Array()
	{
		delete[] _data;
	}


template <int size, class Elem> Elem& Array<size, Elem>:: operator[](const size_t index)
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

 template <int size, class Elem> const Elem& Array<size, Elem>:: operator[] (const size_t index) const
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

template <int size, class Elem> size_t Array<size, Elem>:: size() 
	{
		return _size;
	}

template <int size, class Elem> const size_t Array<size, Elem>:: size() const
	{
		return _size;
	} 

template <int size, class Elem> bool Array<size, Elem>:: isEmpty()
	{
		return _size > 0;
	}

template <int size, class Elem> bool Array<size, Elem>:: contains(const Elem& elem)
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

template <int size, class Elem> void Array<size, Elem>:: showData()
	{
		for (size_t i = 0; i < _size; i++)
		{
			cout<<_data[i]<<' | ';
		}
	}


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
}*/