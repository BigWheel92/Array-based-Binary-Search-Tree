#include <iostream>
using namespace std;
#include "BinarySearchTree.h"

int main()
{
	BinarySearchTree<int, int> bst;

	for (int i = 0; i < 10; i++)
		bst.insert(i, i);

}
