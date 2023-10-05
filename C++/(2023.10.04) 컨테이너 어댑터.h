#include <iostream>
#include <stack>
#include <queue>
using namespace std;

#pragma region 컨테이너 어댑터
// 기존 컨테이너의 인터페이스를 제한하여
// 만든 기능이 제한되거나 변형된 컨테이너입니다.
#pragma endregion

int main()
{
#pragma region 컨테이너 어댑터 (Stack)

	/*stack<int> stack;

	stack.push(10);
	stack.push(20);
	stack.push(30);
	stack.push(40);
	stack.push(50);

	 cout << "Stack의 Top : " << stack.top() << endl;

	while (stack.size())
	{
		cout << stack.top() << endl;
		stack.pop();
	}*/

#pragma endregion

#pragma region 컨테이너 어댑터 (Queue)

	/*queue<int> queue;

	queue.push(10);
	queue.push(20);
	queue.push(30);
	queue.push(40);
	queue.push(50);

	while (queue.size())
	{
		cout << queue.front() << endl;
		queue.pop();
	}*/

#pragma endregion

#pragma region 컨테이너 어댑터 (Priority Queue)

	/*priority_queue<int> priorityQueue;

	priorityQueue.push(4);
	priorityQueue.push(7);
	priorityQueue.push(3);
	priorityQueue.push(1);
	priorityQueue.push(10);

	while (priorityQueue.size())
	{
		cout << priorityQueue.top() << endl;
		priorityQueue.pop();
	}*/

#pragma endregion

	return 0;
}