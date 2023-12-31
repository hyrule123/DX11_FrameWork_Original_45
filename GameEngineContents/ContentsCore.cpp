#include "PrecompileHeader.h"
#include "ContentsCore.h"
#include <GameEngineCore\GameEngineCore.h>
#include "PlayLevel.h"
#include "TitleLevel.h"
#include "TileMapLevel.h"
#include <GameEngineCore/GameEngineCoreWindow.h>



ContentsCore::ContentsCore() 
{
}

ContentsCore::~ContentsCore() 
{
}


void ContentsCore::GameStart() 
{
	GameEngineGUI::GUIWindowCreate<GameEngineCoreWindow>("CoreWindow");
	ContentsResourcesCreate();
	GameEngineCore::CreateLevel<TitleLevel>();
	GameEngineCore::CreateLevel<PlayLevel>();
	GameEngineCore::CreateLevel<TileMapLevel>();
	GameEngineCore::ChangeLevel("TileMapLevel");
}

void ContentsCore::GameEnd() 
{

}