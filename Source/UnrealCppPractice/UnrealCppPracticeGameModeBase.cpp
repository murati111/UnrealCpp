// Fill out your copyright notice in the Description page of Project Settings.


#include "UnrealCppPracticeGameModeBase.h"
#include "Engine.h"

void  AUnrealCppPracticeGameModeBase::StartPlay()
{
	Super::StartPlay();
	if (GEngine)
	{
		//�f�o�b�N���b�Z�[�W��5�b�ԕ\��
		//�|�P�̃L�[�l�i�ŏ��̈����j�͂��̃��b�Z�[�W���X�V�A���t���b�V������K�v���Ȃ����Ƃ������Ă���
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("Hello World, this is FPSTUtorial!"));
	}
}
