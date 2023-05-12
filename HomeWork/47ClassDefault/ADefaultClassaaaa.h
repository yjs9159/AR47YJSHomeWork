#pragma once

// Ό³Έν : 
class ADefaultClassaaaa
{
public:
	// constructer destructer
	ADefaultClassaaaa();
	~ADefaultClassaaaa();

	// delete Function
	ADefaultClassaaaa(const ADefaultClassaaaa& _Other) = delete;
	ADefaultClassaaaa(ADefaultClassaaaa&& _Other) noexcept = delete;
	ADefaultClassaaaa& operator=(const ADefaultClassaaaa& _Other) = delete;
	ADefaultClassaaaa& operator=(ADefaultClassaaaa&& _other) noexcept = delete;

protected:

private:
	 
};

