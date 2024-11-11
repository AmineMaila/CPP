#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <deque>
#include <vector>
#include <iomanip>
#include <iostream>

class PmergeMe
{
public:
	~PmergeMe();
	PmergeMe();
	PmergeMe(const PmergeMe& other);
	PmergeMe& operator=(const PmergeMe& other);

	typedef std::vector<std::pair<int, int> > pvector;
	typedef std::deque<std::pair<int, int> > pdeque;

	// VECTOR

	std::vector<int>	generateOrderVector(int size);
	int					binarySearchVector(std::vector<int>& array, int target);
	void				mergePairsVector(pvector& left, pvector& right, pvector& arr);
	void				sortPairsVector(pvector& arr);
	void				insertVector( void );
	void				sortPairVector( void );
	void				pairVector( void );
	void				parseVector(int size, char **arr);
	void				runVector( void );

	// DEQUE
	
	std::deque<int>		generateOrderDeque(int size);
	int					binarySearchDeque(std::deque<int>& array, int target);
	void				mergePairsDeque(pdeque& left, pdeque& right, pdeque& arr);
	void				sortPairsDeque(pdeque& arr);
	void				insertDeque( void );
	void				sortPairDeque( void );
	void				pairDeque( void );
	void				parseDeque(int size, char **arr);
	void				runDeque( void );

	class InputInvalidException : public std::exception
	{
	public:
		virtual const char	*what() const throw();
	};

private:
	pvector				vec;
	std::vector<int>	sortVec;

	pdeque				deq;
	std::deque<int>		sortDeq;

	int					struggler;
};


#endif