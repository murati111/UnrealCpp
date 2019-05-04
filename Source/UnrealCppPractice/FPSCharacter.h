// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/Character.h"
#include "FPSCharacter.generated.h"

UCLASS()
class UNREALCPPPRACTICE_API AFPSCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AFPSCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	//前後方向の移動入力処理
	UFUNCTION()
		void MoveForward(float Value);
	//左右の移動入力処理
	UFUNCTION()
		void MoveRight(float Value);

	//キーを押したときのジャンプフラグ設定
	UFUNCTION()
		void StartJump();
	//キー解放時のジャンプフラグクリア
	UFUNCTION()
		void StopJump();
	//FPSカメラ
	UPROPERTY(VisibleAnywhere)
		UCameraComponent* FPSCameraComponent;

	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
		USkeletalMeshComponent* FPSMesh;

};
