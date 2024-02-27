// 04/11

// Node 형태라고 부르는 굉장히 많이 사용되는 방식이 존재하는데
// 어떤 클래스가 자신 내부에 자기 자신의 참조형(보통은 포인터)을 n개 들고 있으면
// 그걸 Node 형식이라고 부른다

#include <iostream>
#include <GameEngineConsole/GameEngineArray.h>
#include <conio.h>

// 자료구조에서 자료를 처리하는 방법은 크게 2가지
// 배열형 -> 자료를 늘어 놓는것
// 노드형 -> 자료를 하나하나 개별적으로 놓은 다음
// 그 노드는 자기 다음 노드를 알고 있는것(내부에서 포인터로 들고 있으니까)
// 노드형에도 2가지가 있다
// 선형과 트리형
// 선형은 


// 맵의 한 지역
// ex) 다크소울2의 맵
// 하이데의 폐허
// 청의 성당
// 하이데의 큰 불탑
// 매듀라


class MapZone
{
public:
    MapZone* SelectNext()
    {
        system("cls");
        printf("현재 이곳은 %s 입니다.\n", GetName());
        printf_s("어디로 가시겠습니까?\n");

        for (int i = 0; i < LinkZone.Count(); i++)
        {
            printf("%d. %s\n", i + 1, LinkZone[i]->GetName());
        }

        int Select = _getch();
        int SelectIndex = Select - '1';

        if (SelectIndex >= LinkZone.Count())
        {
            return this;
        }

        return LinkZone[SelectIndex];
    }

    const char* GetName()
    {
        return Name;
    }

    void SetName(const char* _Name)
    {
        Name = _Name;
    }

    void Link(MapZone* _OtherZone)
    {
        if (nullptr == _OtherZone)
        {
            return;
        }

        LinkZone.ReSize(LinkZone.Count() + 1);
        LinkZone[LinkZone.Count() - 1] = _OtherZone;

        _OtherZone->LinkZone.ReSize(_OtherZone->LinkZone.Count() + 1);
        _OtherZone->LinkZone[_OtherZone->LinkZone.Count() - 1] = this;
    }

private:
    const char* Name = nullptr;
    GameEngineArray<MapZone*> LinkZone;  // 지역과 지역이 링크되서 연결되어 있다고 볼 수 있다
};

typedef int DataType;

class Node
{
public:
    Node(const DataType& _Value)
        : Value(_Value)
    {

    }

    int getValue()
    {
        return Value;
    }

    Node* Getnext()
    {
        return Next;
    }

    Node* GetPrev()
    {
        return Prev;
    }

    void NextLinkPointer(Node* _Next)
    {
        Next = _Next;
        _Next->Prev = this;
    }

    void NextLinkRef(Node& _Next)
    {
        Next = &_Next;
        _Next.Prev = this;
    }

private:
    // Next만 있으면 단방향 노드
    Node* Next = nullptr;
    // 양방향
    Node* Prev = nullptr;

    DataType Value;
};


int main()
{
    {
        Node Node1 = 0;
        Node Node2 = 1;
        Node Node3 = 2;
        Node Node4 = 3;
        Node Node5 = 4;

        Node1.NextLinkRef(Node2);
        Node2.NextLinkRef(Node3);
        Node3.NextLinkRef(Node4);
        Node4.NextLinkRef(Node5);

        Node* CurNode = &Node5;
        while (nullptr != CurNode)
        {
            printf_s("%d\n", CurNode->getValue());
            CurNode = CurNode->GetPrev();


            //const char* Name = CurMap->GetName();
            //printf_s("%s\n", CurMap->GetName());
            //CurMap->GetLink();
        }

        return 1;
    }

    {
        // 100번지
        MapZone Map1;
        // 200번지
        MapZone Map2;
        // 300번지
        MapZone Map3;
        // 400번지
        MapZone Map4;
        MapZone Map5;

        Map1.SetName("하이데의 폐허");
        Map2.SetName("청의 성당");
        Map3.SetName("하이데의 큰 불탑");
        Map4.SetName("매듀라");
        Map5.SetName("숨겨진 항구");

        Map1.Link(&Map2); // 연결 되었다는건 서로간의 포인터를 안다는 것
        Map1.Link(&Map4);
        Map1.Link(&Map3);

        Map2.Link(&Map5);

        // 100번지
        MapZone* CurMap = &Map1; // 현재 맵은 하이데의 폐허
        while (nullptr != CurMap)
        {
            CurMap = CurMap->SelectNext();


            //const char* Name = CurMap->GetName();
            //printf_s("%s\n", CurMap->GetName());
            //CurMap->GetLink();
        }
    }

}