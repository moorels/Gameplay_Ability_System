// Fill out your copyright notice in the Description page of Project Settings.


#include "AuraCharacterBase.h"


AAuraCharacterBase::AAuraCharacterBase()
{

	PrimaryActorTick.bCanEverTick = true;

	Weapon = CreateDefaultSubobject<USkeletalMeshComponent>("Weapon");
	Weapon->SetupAttachment(GetMesh(), FName("WeaponHandSocket"));
	Weapon->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}


void AAuraCharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}


