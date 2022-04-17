#pragma once
#include <iostream>
#include <string>

class BigInteger {
    int value_[256];
    int size_;
    bool sign_;
public:
    BigInteger(); // ����������� ��������� (����� ����� ����) DONE!
    BigInteger(int); // ����������� �������������� �� �������� ������ ����� DONE!
    BigInteger(const std::string&); // ����������� �������������� �� ������ DONE! //TODO

    void reverse();
    void deleteZero();

    BigInteger(const BigInteger&); // ����������� ����������� DONE!

    // ������� ���� � �����
    BigInteger operator+() const; //DONE
    BigInteger operator-() const; //DONE


    // �������� ���������
    bool operator==(const BigInteger& X);  //DONE
    bool operator!=(const BigInteger&);//DONE

    bool operator<(const BigInteger&); //DONE
    bool operator>(const BigInteger&); //DONE
    bool operator<=(const BigInteger&);//DONE
    bool operator>=(const BigInteger&);//DONE

    // �������� ������������ 
    BigInteger& operator=(const BigInteger&); //DONE
    BigInteger& operator=(BigInteger&&); //DONE


    // �������������� ��������
    BigInteger operator+(const BigInteger&) const; //DONE
    BigInteger operator-(const BigInteger&) const; //DONE
    BigInteger operator*(const BigInteger&) const; //DONE
    BigInteger operator/(const BigInteger&) const;
    BigInteger operator%(const BigInteger&) const;


    // ������� ����� ��������
    BigInteger& operator+=(const BigInteger&); //DONE
    BigInteger& operator-=(const BigInteger&); //DONE
    BigInteger& operator*=(const BigInteger&); //DONE
    BigInteger& operator/=(const BigInteger&);
    BigInteger& operator%=(const BigInteger&);


    //TODO
    // ���������� �����
    BigInteger& operator++(); // ++v //DONE
    BigInteger& operator--(); // --v //DONE

    // ����������� �����
    BigInteger operator++(int); // v++ //DONE
    BigInteger operator--(int); // v-- //DONE


    friend std::ostream& operator<<(std::ostream&, const BigInteger&); // ����� ����� � �������� ����� DONE!  //TODO
    friend std::istream& operator>>(std::istream&, BigInteger&); // ���� ����� �� �������� ������
};
