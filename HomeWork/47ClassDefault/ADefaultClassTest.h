#pragma once

// Ό³Έν : 
class ADefaultClassTest
{
public:
	// constructer destructer
	ADefaultClassTest();
	~ADefaultClassTest();

	// delete Function
	ADefaultClassTest(const ADefaultClassTest& _Other) = delete;
	ADefaultClassTest(ADefaultClassTest&& _Other) noexcept = delete;
	ADefaultClassTest& operator=(const ADefaultClassTest& _Other) = delete;
	ADefaultClassTest& operator=(ADefaultClassTest&& _other) noexcept = delete;

protected:

private:
	 
};

