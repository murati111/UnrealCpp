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

	//�O������̈ړ����͏���
	UFUNCTION()
		void MoveForward(float Value);
	//���E�̈ړ����͏���
	UFUNCTION()
		void MoveRight(float Value);

	//�L�[���������Ƃ��̃W�����v�t���O�ݒ�
	UFUNCTION()
		void StartJump();
	//�L�[������̃W�����v�t���O�N���A
	UFUNCTION()
		void StopJump();
	//FPS�J����
	UPROPERTY(VisibleAnywhere)
		UCameraComponent* FPSCameraComponent;

	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
		USkeletalMeshComponent* FPSMesh;

};
