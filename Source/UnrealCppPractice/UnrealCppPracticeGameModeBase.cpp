// Fill out your copyright notice in the Description page of Project Settings.


#include "UnrealCppPracticeGameModeBase.h"
#include "Engine.h"

void  AUnrealCppPracticeGameModeBase::StartPlay()
{
	Super::StartPlay();
	if (GEngine)
	{
		//デバックメッセージを5秒間表示
		//－１のキー値（最初の引数）はこのメッセージを更新、リフレッシュする必要がないことを示している
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("Hello World, this is FPSTUtorial!"));
	}
}
