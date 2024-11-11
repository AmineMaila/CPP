#include "PmergeMe.hpp"

PmergeMe::~PmergeMe() {}

PmergeMe::PmergeMe() {struggler = -1;}

PmergeMe::PmergeMe(const PmergeMe& other)
{
	*this = other;
}
	
PmergeMe&	PmergeMe::operator=(const PmergeMe& other)
{
	if (this != &other)
	{
		this->vec = other.vec;
		this->struggler = other.struggler;
	}
	return (*this);
}

void	PmergeMe::runVector( void )
{
	std::cout << "Before :  ";
	for (std::vector<int>::iterator it = sortVec.begin(); it != sortVec.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;

	std::clock_t start = std::clock();
	if (sortVec.size() > 1)
	{
		pairVector();
		sortPairVector();
		insertVector();
	}
	clock_t end = std::clock();

	std::cout << "After :  ";
	for (std::vector<int>::iterator it = sortVec.begin(); it != sortVec.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;

	double elapsedTime = static_cast<double>(end - start) / CLOCKS_PER_SEC;
	std::cout << "Time to process a range of "
	<< sortVec.size()
	<< " elements with std::vector : "
	<< std::fixed << std::setprecision(6)
	<< elapsedTime
	<< " s" << std::endl;
}


int	PmergeMe::binarySearchVector(std::vector<int>& array, int target)
{
	int low = 0;
	int high = array.size() - 1;
	int mid;
	while (low <= high)
	{
		mid = (low + high) / 2;
		if (target < array.at(mid))
			high = mid - 1;
		else if (target > array.at(mid))
			low = mid + 1;
		else
			return (mid);
	}
	return (low);
}

std::vector<int>	PmergeMe::generateOrderVector(int size)
{
	std::vector<int>	jacobseq;
	std::vector<int>	order;
	int					curr;

	jacobseq.push_back(1);
	jacobseq.push_back(1);

	int last = 1;
	for (size_t i = 2; (curr = jacobseq[i - 1] + 2 * jacobseq[i - 2]) < size; i++)
	{
		jacobseq.push_back(curr);
		order.push_back(curr);

		while (curr > last + 1)
			order.push_back(--curr);
		last = jacobseq.back();
	}

	while (last < size)
		order.push_back(++last);
	return (order);
}

void    PmergeMe::insertVector( void )
{
	std::vector<int> pend;

	sortVec.clear();

	sortVec.push_back(vec.begin()->second);
	for (pvector::iterator itr = vec.begin(); itr != vec.end(); itr++)
	{
		sortVec.push_back(itr->first);
		pend.push_back(itr->second);
	}

	std::vector<int> order = generateOrderVector(pend.size());

	for (size_t i = 0; i < order.size(); i++)
	{
		int target = pend.at(order.at(i) - 1);
		int pos = binarySearchVector(sortVec, target);

		sortVec.insert(sortVec.begin() + pos, target);
	}
	if (struggler != -1)
		sortVec.insert(sortVec.begin() + binarySearchVector(sortVec, struggler), struggler);
}

void    PmergeMe::mergePairsVector(pvector& left, pvector& right, pvector& arr)
{
	pvector::iterator l = left.begin();
	pvector::iterator r = right.begin();
	pvector::iterator itr = arr.begin();

	while (l != left.end() && r != right.end())
	{
		if (l->first < r->first)
		{
			*itr = *l;
			l++;
		}
		else
		{
			*itr = *r;
			r++;
		}
		itr++;
	}

	while (l != left.end())
		*(itr++) = *(l++);
	while (r != right.end())
		*(itr++) = *(r++);
}

void    PmergeMe::sortPairsVector(pvector& arr)
{
	if (arr.size() == 1)
		return ;

	pvector::iterator mid = arr.begin() + arr.size() / 2;

	pvector left(arr.begin(), mid);
	pvector right(mid, arr.end());

	sortPairsVector(left);
	sortPairsVector(right);
	mergePairsVector(left, right, arr);
}

void	PmergeMe::sortPairVector( void )
{
	pvector::iterator	itr;
	int					tmp;

	for (itr = vec.begin(); itr != vec.end(); itr++)
	{
		if (itr->first < itr->second)
		{
			tmp = itr->first;
			itr->first = itr->second;
			itr->second = tmp;
		}
	}
	sortPairsVector(vec);
}

void    PmergeMe::pairVector( void )
{
	std::vector<int>::iterator itr;
	for (itr = sortVec.begin(); itr != sortVec.end() && itr + 1 != sortVec.end(); std::advance(itr, 2))
		vec.push_back(std::pair<int, int>(*itr, *(itr + 1)));
	if (sortVec.size() % 2 != 0)
		struggler = *itr;
}

void	PmergeMe::parseVector(int size, char **arr)
{
	for (int i = 1; i < size; i++)
	{
		for (int j = 0; arr[i][j]; j++)
			if (!std::isdigit(arr[i][j]))
				throw (std::exception());
		sortVec.push_back(std::stoi(arr[i]));
	}
}

const char	*PmergeMe::InputInvalidException::what() const throw() {return ("input invalid");}

void	PmergeMe::runDeque( void )
{
	std::clock_t start = std::clock();
	if (sortDeq.size() > 1)
	{
		pairDeque();
		sortPairDeque();
		insertDeque();
	}
	clock_t end = std::clock();

	double elapsedTime = static_cast<double>(end - start) / CLOCKS_PER_SEC;
	std::cout << "Time to process a range of "
	<< sortDeq.size()
	<< " elements with std::deque : "
	<< std::fixed << std::setprecision(6)
	<< elapsedTime
	<< " s" << std::endl;
}

int	PmergeMe::binarySearchDeque(std::deque<int>& array, int target)
{
	int low = 0;
	int high = array.size() - 1;
	int mid;
	while (low <= high)
	{
		mid = (low + high) / 2;
		if (target < array.at(mid))
			high = mid - 1;
		else if (target > array.at(mid))
			low = mid + 1;
		else
			return (mid);
	}
	return (low);
}

std::deque<int>	PmergeMe::generateOrderDeque(int size)
{
	std::deque<int>	jacobseq;
	std::deque<int>	order;
	int					curr;

	jacobseq.push_back(1);
	jacobseq.push_back(1);

	int last = 1;
	for (size_t i = 2; (curr = jacobseq[i - 1] + 2 * jacobseq[i - 2]) < size; i++)
	{
		jacobseq.push_back(curr);

		order.push_back(curr);

		while (curr > last + 1)
			order.push_back(--curr);
		last = jacobseq.back();
	}

	while (last < size)
		order.push_back(++last);

	return (order);
}

void    PmergeMe::insertDeque( void )
{
	std::deque<int> pend;

	sortDeq.clear();
	sortDeq.push_back(deq.begin()->second);
	for (pdeque::iterator itr = deq.begin(); itr != deq.end(); itr++)
	{
		sortDeq.push_back(itr->first);
		pend.push_back(itr->second);
	}

	std::deque<int> order = generateOrderDeque(pend.size());

	for (size_t i = 0; i < order.size(); i++)
	{
		int target = pend.at(order.at(i) - 1);
		int pos = binarySearchDeque(sortDeq, target);

		sortDeq.insert(sortDeq.begin() + pos, target);
	}
	if (struggler != -1)
		sortDeq.insert(sortDeq.begin() + binarySearchDeque(sortDeq, struggler), struggler);
}

void    PmergeMe::mergePairsDeque(pdeque& left, pdeque& right, pdeque& arr)
{
	pdeque::iterator l = left.begin();
	pdeque::iterator r = right.begin();
	pdeque::iterator itr = arr.begin();

	while (l != left.end() && r != right.end())
	{
		if (l->first < r->first)
		{
			*itr = *l;
			l++;
		}
		else
		{
			*itr = *r;
			r++;
		}
		itr++;
	}

	while (l != left.end())
		*(itr++) = *(l++);
	while (r != right.end())
		*(itr++) = *(r++);
}

void    PmergeMe::sortPairsDeque(pdeque& arr)
{
	if (arr.size() == 1)
		return ;

	pdeque::iterator mid = arr.begin() + arr.size() / 2;

	pdeque left(arr.begin(), mid);
	pdeque right(mid, arr.end());

	sortPairsDeque(left);
	sortPairsDeque(right);
	mergePairsDeque(left, right, arr);
}

void	PmergeMe::sortPairDeque( void )
{
	pdeque::iterator	itr;
	int					tmp;

	for (itr = deq.begin(); itr != deq.end(); itr++)
	{
		if (itr->first < itr->second)
		{
			tmp = itr->first;
			itr->first = itr->second;
			itr->second = tmp;
		}
	}
	sortPairsDeque(deq);
}

void    PmergeMe::pairDeque( void )
{
	std::deque<int>::iterator itr;
	for (itr = sortDeq.begin(); itr != sortDeq.end() && itr + 1 != sortDeq.end(); std::advance(itr, 2))
		deq.push_back(std::pair<int, int>(*itr, *(itr + 1)));
	if (sortDeq.size() % 2 != 0)
		struggler = *itr;
}

void	PmergeMe::parseDeque(int size, char **arr)
{
	for (int i = 1; i < size; i++)
	{
		for (int j = 0; arr[i][j]; j++)
			if (!std::isdigit(arr[i][j]))
				throw (std::exception());
		sortDeq.push_back(std::stoi(arr[i]));
	}
}
