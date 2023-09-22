#include "Bank.h"
#include "Player.h"

int main()
{
#pragma region 다중 상속
	// 하나의 하위 클래스가 여러개의 상위 클래스를 상속 받는 것입니다.

	/*Computer computer;
	computer.Use();*/

#pragma endregion

#pragma region Friend
	// Friend로 선언된 클래스의 private 및 protected 멤버에
	// 접근할 수 있도록 설정해주는 기능입니다.

	Player player;
	player.ShowMoney();

	Bank bank;
	bank.Wihtdrawal(player, 2000);

	player.ShowMoney();
	bank.ShowMoney();

#pragma endregion

	return 0;
}