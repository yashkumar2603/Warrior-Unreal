// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "Characters/WarriorBaseCharacter.h"
#include "WarriorEnemyCharacter.generated.h"

class UEnemyCombatComponent;
class UEnemyUIComponent;
class UWidgetComponent;
/**
 *
 */
UCLASS()
class WARRIOR_API AWarriorEnemyCharacter : public AWarriorBaseCharacter
{
	GENERATED_BODY()

public:
	AWarriorEnemyCharacter();
	//~ Begin PawnCombatInterface Interface.
	virtual UPawnCombatComponent* GetPawnCombatComponent() const override;
	//~ End PawnCombatInterface Interface

	//~ Begin IPawnUIInterface Interface.
	virtual UPawnUIComponent* GetPawnUIComponent() const override;
	virtual UEnemyUIComponent* GetEnemyUIComponent() const override;
	//~ End IPawnUIInterface Interface

protected:
	virtual void BeginPlay() override;

	//~ Begin APawn Interface.
	virtual void PossessedBy(AController* NewController) override;
	//~ End APawn Interface

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Combat")
	UEnemyCombatComponent* EnemyCombatComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "UI")
	UEnemyUIComponent* EnemyUIComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "UI")
	UWidgetComponent* EnemyHealthWidgetComponent;
private:
	void InitEnemyStartUpData();
public:
	FORCEINLINE UEnemyCombatComponent* GetEnemyCombatComponent() const { return EnemyCombatComponent; }
};