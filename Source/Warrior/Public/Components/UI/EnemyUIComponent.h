// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/UI/PawnUIComponent.h"
#include "EnemyUIComponent.generated.h"

class UWarriorWidgetBase;
/**
 * 
 */
UCLASS()
class WARRIOR_API UEnemyUIComponent : public UPawnUIComponent
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable)
	void RegisterEnemyDrawnWidget(UWarriorWidgetBase* InWidgetToRegister);
	UFUNCTION(BlueprintCallable)
	void RemoveEnemyDrawnWidgetsIfAny();
private:
	TArray<UWarriorWidgetBase*> EnemyDrawnWidgets;
};
