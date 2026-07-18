#ifndef VECTOR_H
#define VECTOR_H // guaurd the problem not to include this file multiple times

const int DEFAULT_VECTOR_SIZE = 10;

template <typename T> class MyVector {
private:
  int size;
  int capacity;
  T *elements;

public:
  MyVector() {
    size = 0;
    capacity = DEFAULT_VECTOR_SIZE;
    elements = new T[DEFAULT_VECTOR_SIZE]; // new keyword to intialize heap,
                                           // malloc and call Constructor of the
                                           // type IMPORTANT!!!!
  };
  MyVector(int n, const T &value) {
    size = n;
    capacity = n * 2;
    elements = new T[capacity];
    for (int i = 0; i < size; i++) {
      elements[i] = value;
    }
  };

  // Vector<float> v(w);
  MyVector(const MyVector& rhs) { // structure of params Type
    size = rhs.size; // why not Size()
    capacity = rhs.capacity;
    elements = new T[capacity]; // I missed this
    for (int i = 0; i < rhs.size ; i++) {
      elements[i] = rhs.elements[i];
    }
  }; 

  ~MyVector() { delete[] elements; };

  // v.Size()
  int Size() const{
    return size;
  };
  
   // v.Capacity()
  int Capacity() const{
    return capacity;
  };

  // v.IsEmpty()
  bool IsEmpty() const{
    return size == 0;
  }; 

  // v[i] = x
  T &operator[](int index) { return elements[index]; };

  // x = v[i]
  const T &operator[](int index) const { return elements[index]; };

  MyVector &
  operator=(const MyVector &rhs); // v = x - 1 vector assign to other vector

  void PushBack(const T &object);  // v.PushBack('A');
  void PopBack();                  // v.PopBack();
  void Erase(int index);           // v.Erase(0);
  void Insert(int index, T value); // v.Insert(0, 'A');
  void Clear();                    // v.Clear();
};

#endif // !VECTOR_H
