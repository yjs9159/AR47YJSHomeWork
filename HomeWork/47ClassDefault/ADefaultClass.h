#pragma once

// Ό³Έν : 
class ADefaultClass
{
public:
	// constructer destructer
	ADefaultClass();
	~ADefaultClass();

	// delete Function
	ADefaultClass(const ADefaultClass& _Other) = delete;
	ADefaultClass(ADefaultClass&& _Other) noexcept = delete;
	ADefaultClass& operator=(const ADefaultClass& _Other) = delete;
	ADefaultClass& operator=(ADefaultClass&& _other) noexcept = delete;

protected:

private:
	 
};

