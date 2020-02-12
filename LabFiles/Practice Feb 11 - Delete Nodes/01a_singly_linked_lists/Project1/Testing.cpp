#include "Testing.h"

void call_insertBack(AnyList& aList, int item)
{
	// Uncomment when testing your function insertBack
	aList.insertBack(item);
}

void call_getNumOfItems(const AnyList& aList, int& items)
{
	// Uncomment when testing your function getNumOfItems
	items = aList.getNumOfItems();
}

void call_search(const AnyList& aList, int item, bool& found)
{
	// Uncomment when testing your function search
	found = aList.search(item);
}

void call_commonEnds(const AnyList& aList, 
	const AnyList& anotherList, bool& result)
{
	// Uncomment when testing your function commonEnds
	result = aList.commonEnds(anotherList);
}
