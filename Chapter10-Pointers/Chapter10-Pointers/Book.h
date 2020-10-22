#pragma once

class Book
{
private:
	int totalPages;
	int currentPage;
public:
	Book(int totalPages)
	{
		this->totalPages = totalPages;
		currentPage = 0;
	}

	int getCurrentPage()
	{
		return currentPage;
	}

	int getTotalPages()
	{
		return totalPages;
	}

	bool turnPage()
	{
		currentPage++;
		if (currentPage > totalPages)
		{
			currentPage = totalPages;
			return false;
		}
		return true;
	}

	bool goBackPage()
	{
		currentPage--;
		if (currentPage < 0)
		{
			currentPage = 0;
			return false;
		}
		return true;
	}

};