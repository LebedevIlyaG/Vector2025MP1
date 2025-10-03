// ННГУ, ВМК, Курс "Методы программирования-2", С++, ООП
//
// tbitfield.h - Copyright (c) Гергель В.П. 07.05.2001
//   Переработано для Microsoft Visual Studio 2008 Сысоевым А.В. (19.04.2015)
//
// Битовое поле

#ifndef __VECTOR_H__
#define __VECTOR_H__

#include <iostream>

template <class T>
class TVector
{
private:
  int  size; //к-во эл-тов Мем для представления бит.поля
  T *pMem; // память для представления битового поля


public:
  TVector(int len);                //                                   (#О1)
  TVector(const TVector &bf);    //                                   (#П1)
  ~TVector();                      //                                    (#С)

  // доступ к битам
  int GetLength(void) const;      // получить длину (к-во битов)           (#О)

  // битовые операции
  int operator==(const TVector &bf) const; // сравнение                 (#О5)
  int operator!=(const TVector &bf) const; // сравнение
  TVector& operator=(const TVector &bf); // присваивание              (#П3)
  TVector  operator+(const TVector &bf); // операция "или"            (#О6)
  TVector  operator-(const TVector &bf); // операция "и"              (#Л2)


  friend std::istream &operator>>(std::istream &istr, TVector &bf);       //      (#О7)
  friend std::ostream &operator<<(std::ostream &ostr, const TVector &bf); //      (#П4)
};
// Структура хранения битового поля
//   бит.поле - набор битов с номерами от 0 до BitLen
//   массив pМем рассматривается как последовательность MemLen элементов
//   биты в эл-тах pМем нумеруются справа налево (от младших к старшим)
// О8 Л2 П4 С2

// ввод/вывод
template<class T>
std::istream& operator>>(std::istream& istr, TVector<T>& bf) // ввод
{
  return istr;
}

template<class T>
std::ostream& operator<<(std::ostream& ostr, const TVector<T>& bf) // вывод
{
  return ostr;
}


#endif

template<class T>
inline TVector<T>::TVector(int len)
{
}

template<class T>
inline TVector<T>::TVector(const TVector& bf)
{
}

template<class T>
inline TVector<T>::~TVector()
{
}

template<class T>
inline int TVector<T>::GetLength(void) const
{
  return 0;
}

template<class T>
inline int TVector<T>::operator==(const TVector& bf) const
{
  return 0;
}

template<class T>
inline int TVector<T>::operator!=(const TVector& bf) const
{
  return 0;
}

template<class T>
inline TVector<T>& TVector<T>::operator=(const TVector<T>& bf)
{
  // TODO: insert return statement here
}

template<class T>
inline TVector<T> TVector<T>::operator+(const TVector<T>& bf)
{
  return TVector();
}

template<class T>
inline TVector<T> TVector<T>::operator-(const TVector<T>& bf)
{
  return TVector();
}
