#include "Header.h"

std::ostream& operator<<(std::ostream& out, const BigInteger& X) {
	if (X.sign_ == false) {
		out << '-';
	}
	for (int i = 0; i < X.size_; ++i) {
		out << X.value_[i];
	}
	return out;
}

// êîíñòðóêòîðÛ
BigInteger::BigInteger() {
	for (int i = 0; i < 256; ++i) {
		value_[i] = 0;
		sign_ = true;
		size_ = 1;
	}
}

BigInteger::BigInteger(int X) {
	int i = 0;
	int temp[50];
	sign_ = true;
	if (X < 0) {
		sign_ = false;
		X *= (-1);
	}
	while ((X / 10 != 0) || (X < 10)) {  //ðàçáèåíèå íà ðàçðÿäû
		if (X < 10) {
			temp[i] = X;
			break;
		}
		temp[i] = X % 10;
		X = (X - X % 10) / 10;
		i++;
	}
	size_ = i + 1;                  //çàïîëíåíèå ìàññèâà
	int j = i;
	while (j > 0) {
		value_[i - j] = temp[j];
		j--;
	}
	value_[i] = temp[0];

}


BigInteger::BigInteger(const BigInteger& X) {
	for (int i = 0; i < 256; ++i) {
		value_[i] = X.value_[i];
		sign_ = X.sign_;
		size_ = X.size_;
	}
}

// óíàðíûå ïëþñ è ìèíóñ
BigInteger BigInteger::operator-() const {
	BigInteger tmp(*this);
	tmp.sign_ = !tmp.sign_;
	return tmp;
}


// îïåðàöèè ñðàâíåíèÿ
bool BigInteger::operator==(const BigInteger& X) {
	if (sign_ != X.sign_) {
		return false;
	}
	else if (size_ != X.size_) {
		return false;
	}
	else {
		for (int i = 0; i < size_; ++i) {
			if (value_[i] != X.value_[i]) {
				return false;
			}
			else {
				return true;
			}
		}
	}
}



BigInteger& BigInteger::operator=(const BigInteger& X) {
	if (*this == X) {
		return *this;
	}
	else {
		this->sign_ = X.sign_;
		this->size_ = X.size_;
		for (int i = 0; i < 256; ++i) {
			this->value_[i] = X.value_[i];
		}
	}
	return *this;
}
BigInteger& BigInteger::operator=(BigInteger&& X) {
	sign_ = X.sign_;
	size_ = X.size_;
	for (int i = 0; i < 256; ++i) {
		value_[i] = X.value_[i];
	}
	return *this;
}


// àðèôìåòè÷åñêèå îïåðàöèè
void BigInteger::reverse() {
	int* tmp = new int[size_];
	for (int i = 0; i < size_; ++i) {
		tmp[i] = value_[i];
	}
	int j = 0;
	for (int i = size_ - 1; i >= 0; --i) {
		value_[j] = tmp[i];
		++j;
	}
	delete[] tmp;
}

void BigInteger::deleteZero() {
	int i = size_ - 1;
	while (value_[i] == 0 && size_ != 1) {
		--size_;
		--i;
	}
}

BigInteger BigInteger::operator+(const BigInteger& X) const {
	BigInteger tmp1;
	tmp1.sign_ = sign_;
	tmp1.size_ = size_;
	int j = 0;
	for (int i = size_ - 1; i >= 0; --i) {
		tmp1.value_[j] = value_[i];
		++j;
	}
	j = 0;

	BigInteger tmp2;
	tmp2.sign_ = X.sign_;
	tmp2.size_ = X.size_;
	for (int i = X.size_ - 1; i >= 0; --i) {
		tmp2.value_[j] = X.value_[i];
		++j;
	}

	BigInteger result;
	if (tmp1.size_ > tmp2.size_) {
		result.size_ = tmp1.size_ + 1;
	}
	else {
		result.size_ = tmp2.size_ + 1;
	}

	bool flag = false;
	if (tmp1.sign_ == tmp2.sign_) {
		for (int i = 0; i < result.size_; ++i) {
			if ((tmp1.value_[i] + tmp2.value_[i]) > 9) {
				result.value_[i] = (tmp1.value_[i] + tmp2.value_[i]) % 10;
				flag = true;
			}
			else {
				if (flag) {
					if ((tmp1.value_[i] + tmp2.value_[i] + 1) > 9) {
						result.value_[i] = (tmp1.value_[i] + tmp2.value_[i] + 1) % 10;
						flag = true;
					}
					else {
						result.value_[i] = tmp1.value_[i] + tmp2.value_[i] + 1;
						flag = false;
					}
				}
				else {
					result.value_[i] = tmp1.value_[i] + tmp2.value_[i];
				}
			}
		}
		result.sign_ = tmp1.sign_;
		result.deleteZero();
		result.reverse();
		return result;
	}
	else if ((tmp1.sign_ == true && tmp2.sign_ == false) || (tmp1.sign_ == false && tmp2.sign_ == true)) {
		if (tmp1.size_ > tmp2.size_) {
			for (int i = 0; i < result.size_; ++i) {
				if ((tmp1.value_[i] - tmp2.value_[i]) < 0) {
					if (flag) {
						tmp1.value_[i] = tmp1.value_[i] + 9;
						result.value_[i] = tmp1.value_[i] - tmp2.value_[i];
						flag = true;
					}
					else {
						tmp1.value_[i] = tmp1.value_[i] + 10;
						result.value_[i] = tmp1.value_[i] - tmp2.value_[i];
						flag = true;
					}

				}
				else {
					if (flag == true) {
						if (tmp2.value_[i] == 0) {
							if (tmp1.value_[i] - 1 < 0) {
								result.value_[i] = 9;
								flag = true;
							}
							else {
								result.value_[i] = tmp1.value_[i] - 1;
								flag = false;
							}
						}
						else {
							if (tmp1.value_[i] - tmp2.value_[i] - 1 < 0) {
								tmp1.value_[i] = tmp1.value_[i] + 10;
								result.value_[i] = tmp1.value_[i] - tmp2.value_[i];
								flag = true;
							}
							else {
								result.value_[i] = tmp1.value_[i] - tmp2.value_[i] - 1;
								flag = false;
							}
						}
					}
					else {
						result.value_[i] = tmp1.value_[i] - tmp2.value_[i];
					}
				}
			}
			result.sign_ = tmp1.sign_;
			result.deleteZero();
			result.reverse();
			return result;
		}
		else if (tmp2.size_ > tmp1.size_) {
			for (int i = 0; i < result.size_; ++i) {
				if ((tmp2.value_[i] - tmp1.value_[i]) < 0) {
					if (flag) {
						tmp2.value_[i] = tmp2.value_[i] + 9;
						result.value_[i] = tmp2.value_[i] - tmp1.value_[i];
						flag = true;
					}
					else {
						tmp2.value_[i] = tmp2.value_[i] + 10;
						result.value_[i] = tmp2.value_[i] - tmp1.value_[i];
						flag = true;
					}

				}
				else {
					if (flag == true) {
						if (tmp1.value_[i] == 0) {
							if (tmp2.value_[i] - 1 < 0) {
								result.value_[i] = 9;
								flag = true;
							}
							else {
								result.value_[i] = tmp2.value_[i] - 1;
								flag = false;
							}
						}
						else {
							if (tmp2.value_[i] - tmp1.value_[i] - 1 < 0) {
								tmp2.value_[i] = tmp2.value_[i] + 10;
								result.value_[i] = tmp2.value_[i] - tmp1.value_[i];
								flag = true;
							}
							else {
								result.value_[i] = tmp2.value_[i] - tmp1.value_[i] - 1;
								flag = false;
							}
						}
					}
					else {
						result.value_[i] = tmp2.value_[i] - tmp1.value_[i];
					}
				}
			}
			result.sign_ = tmp2.sign_;
			result.deleteZero();
			result.reverse();
			return result;
		}
		else if (tmp1.size_ == tmp2.size_) {
			tmp1.reverse();
			tmp2.reverse();
			for (int j = 0; j < result.size_; ++j) {
				if (tmp1.value_[j] > tmp2.value_[j]) {
					tmp1.reverse();
					tmp2.reverse();
					for (int i = 0; i < result.size_; ++i) {
						if ((tmp1.value_[i] - tmp2.value_[i]) < 0) {
							tmp1.value_[i] = tmp1.value_[i] + 10;
							result.value_[i] = tmp1.value_[i] - tmp2.value_[i];
							flag = true;
						}
						else {
							if (flag == true) {
								if (tmp1.value_[i] - tmp2.value_[i] - 1 < 0) {
									tmp1.value_[i] = tmp1.value_[i] + 10;
									result.value_[i] = tmp1.value_[i] - tmp2.value_[i];
									flag = true;
								}
								else {
									result.value_[i] = tmp1.value_[i] - tmp2.value_[i] - 1;
									flag = false;
								}
							}
							else {
								result.value_[i] = tmp1.value_[i] - tmp2.value_[i];
							}
						}
					}
					result.sign_ = tmp1.sign_;
					result.deleteZero();
					result.reverse();
					return result;
				}
				else if (tmp2.value_[j] > tmp1.value_[j]) {
					tmp1.reverse();
					tmp2.reverse();
					for (int i = 0; i < result.size_; ++i) {
						if ((tmp2.value_[i] - tmp1.value_[i]) < 0) {
							tmp2.value_[i] = tmp2.value_[i] + 10;
							result.value_[i] = tmp2.value_[i] - tmp1.value_[i];
							flag = true;
						}
						else {
							if (flag == true) {
								if (tmp2.value_[i] - tmp1.value_[i] - 1 < 0) {
									tmp2.value_[i] = tmp2.value_[i] + 10;
									result.value_[i] = tmp2.value_[i] - tmp1.value_[i];
									flag = true;
								}
								else {
									result.value_[i] = tmp2.value_[i] - tmp1.value_[i] - 1;
									flag = false;
								}
							}
							else {
								result.value_[i] = tmp2.value_[i] - tmp1.value_[i];
							}
						}
					}
					result.sign_ = tmp2.sign_;
					result.deleteZero();
					result.reverse();
					return result;
				}
			}
		}
		result.deleteZero();
		result.reverse();
		return result;
	}
	//return *this;
}