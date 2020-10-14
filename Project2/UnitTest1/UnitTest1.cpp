#include "pch.h"
#include "CppUnitTest.h"
#include "..\Project2\BankSavingsAccount.h"
#include "..\Project2\MarketInvestment.h"
#include "..\Project2\MoneyInYourPocket.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethodMoneyInYourPocketAdd)
		{
			// AAA

			// Arrange
			MoneyInYourPocket pocketMoney;
			double expectedMoney = 4.2;
			
			// Act
			pocketMoney.add(expectedMoney);
			double actualBalance = pocketMoney.getBalance();

			// Assert
			Assert::AreEqual(expectedMoney, actualBalance);
		}

		TEST_METHOD(TestMethodMoneyInYourPocketWithdraw)
		{
			// AAA

			// Arrange
			MoneyInYourPocket pocketMoney;
			double moneyToAdd = 10;
			double moneyToWithdraw = 4.2;
			double expectedBalance = moneyToAdd - moneyToWithdraw;

			// Act
			pocketMoney.add(moneyToAdd);
			pocketMoney.withdraw(moneyToWithdraw);
			double actualBalance = pocketMoney.getBalance();

			// Assert
			Assert::AreEqual(expectedBalance, actualBalance);

		}

		TEST_METHOD(TestMethodMoneyInYourPocketWithdrawNegativeNumber)
		{
			// AAA

			// Arrange
			MoneyInYourPocket pocketMoney;
			double moneyToAdd = 10;
			double moneyToWithdraw = -4.2;
			double expectedBalance = moneyToAdd + moneyToWithdraw;

			// Act
			pocketMoney.add(moneyToAdd);
			pocketMoney.withdraw(moneyToWithdraw);
			double actualBalance = pocketMoney.getBalance();

			// Assert
			Assert::AreEqual(expectedBalance, actualBalance);

		}

		TEST_METHOD(TestMethodBankSavingsAdd)
		{
			// AAA

			// Arrange
			BankSavingsAccount savings;
			double expectedMoney = 4.2;

			// Act
			savings.add(expectedMoney);
			double actualBalance = savings.getBalance();

			// Assert
			Assert::AreEqual(expectedMoney, actualBalance);
		}

		TEST_METHOD(TestMethodBankSavingsWithdraw)
		{
			// AAA

			// Arrange
			BankSavingsAccount savings;
			double moneyToAdd = 10;
			double moneyToWithdraw = 4.2;
			double expectedBalance = moneyToAdd - moneyToWithdraw;

			// Act
			savings.add(moneyToAdd);
			savings.withdraw(moneyToWithdraw);
			double actualBalance = savings.getBalance();

			// Assert
			Assert::AreEqual(expectedBalance, actualBalance);

		}

		TEST_METHOD(TestMethodBankSavingsWithdrawNegativeNumber)
		{
			// AAA

			// Arrange
			BankSavingsAccount savings;
			double moneyToAdd = 10;
			double moneyToWithdraw = -4.2;
			double expectedBalance = moneyToAdd + moneyToWithdraw;

			// Act
			savings.add(moneyToAdd);
			savings.withdraw(moneyToWithdraw);
			double actualBalance = savings.getBalance();

			// Assert
			Assert::AreEqual(expectedBalance, actualBalance);
		}

		TEST_METHOD(TestMethodBankSavingsInterestRate)
		{
			// AAA

			// Arrange
			BankSavingsAccount savings;
			double expectedInterestRate = .01;

			// Act
			savings.setInterestRate(expectedInterestRate);
			double actualInterestRate = savings.getInterestRate();

			// Assert
			Assert::AreEqual(expectedInterestRate, actualInterestRate);
		}

		TEST_METHOD(TestMethodBankSavingsApplyReturnOnInvestment)
		{
			// AAA

			// Arrange
			BankSavingsAccount savings;
			double expectedInterestRate = .01;
			double moneyToAdd = 100;
			double expectedBalance = moneyToAdd + moneyToAdd * expectedInterestRate;

			// Act
			savings.setInterestRate(expectedInterestRate);
			savings.add(moneyToAdd);
			savings.applyReturnOnInvestment();
			double actualBalance = savings.getBalance();

			// Assert
			Assert::AreEqual(expectedBalance, actualBalance);
		}

		TEST_METHOD(TestMethodMarketInvestmentAdd)
		{
			// AAA

			// Arrange
			MarketInvestment marketInvestment;
			double expectedMoney = 4.2;

			// Act
			marketInvestment.add(expectedMoney);
			double actualBalance = marketInvestment.getBalance();

			// Assert
			Assert::AreEqual(expectedMoney, actualBalance);
		}

		TEST_METHOD(TestMethodMarketInvestmentWithdraw)
		{
			// AAA

			// Arrange
			MarketInvestment marketInvestment;
			double moneyToAdd = 100;
			double moneyToWithdraw = 4.2;
			double withdrawlFee = 10;
			double expectedBalance = moneyToAdd - moneyToWithdraw - withdrawlFee;

			// Act
			marketInvestment.add(moneyToAdd);
			marketInvestment.withdraw(moneyToWithdraw);
			double actualBalance = marketInvestment.getBalance();

			// Assert
			Assert::AreEqual(expectedBalance, actualBalance);

		}

		TEST_METHOD(TestMethodMarketInvestmentWithdrawNegativeNumber)
		{
			// AAA

			// Arrange
			MarketInvestment marketInvestment;
			double moneyToAdd = 100;
			double moneyToWithdraw = -4.2;
			double withdrawlFee = 10;
			double expectedBalance = moneyToAdd + moneyToWithdraw - withdrawlFee;

			// Act
			marketInvestment.add(moneyToAdd);
			marketInvestment.withdraw(moneyToWithdraw);
			double actualBalance = marketInvestment.getBalance();

			// Assert
			Assert::AreEqual(expectedBalance, actualBalance);
		}

		TEST_METHOD(TestMethodMarketInvestmentApplyReturnOnInvestment)
		{
			// AAA

			// Arrange
			MarketInvestment marketInvestment(42);
			double moneyToAdd = 100;
			double expectedBalance = 104;

			// Act
			marketInvestment.add(moneyToAdd);
			marketInvestment.applyReturnOnInvestment();
			double actualBalance = marketInvestment.getBalance();

			// Assert
			Assert::AreEqual(expectedBalance, actualBalance);
		}
	};
}
