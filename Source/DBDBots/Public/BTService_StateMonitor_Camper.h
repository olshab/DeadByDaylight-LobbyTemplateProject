#pragma once

#include "CoreMinimal.h"
#include "BTService_StateMonitor.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTService_StateMonitor_Camper.generated.h"

UCLASS()
class DBDBOTS_API UBTService_StateMonitor_Camper : public UBTService_StateMonitor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector BBDamageState;

	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector BBImmoblizedState;

	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector BBGuidedState;

	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector BBEscapedState;

	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector BBIsInInjuredBleedout;

	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector BBDyingTimerPercentLeft;

	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector BBHookTimerPercentLeft;

	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector BBHookDrainStage;

	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector BBItemType;

	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector BBItemCharge;

	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector BBIsHoldingEmptyItem;

	UPROPERTY(EditInstanceOnly)
	float EmptyItemChargeThreshold;

	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector BBSpecialItemID;

	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector BBIsChased;

	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector BBWasInStimulusSight;

	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector BBWasBeingAimedAt;

	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector BBIsBeingAimedAt;

	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector BBIsBeingAttacked;

	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector BBIsChained;

	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector BBIsInPressureZone;

	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector BBIsInActivatedRBT;

	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector BBIsInDeathTimer;

	UPROPERTY(EditInstanceOnly)
	float DeathTimerEndGamePrecent;

	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector BBHasCrowAttached;

	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector BBLastTrapSideStepExpirationTime;

	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector BBLastAskedToMoveTime;

	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector BBPreventDroppingEmptyItems;

	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector BBIgnoreGoalPressure;

	UPROPERTY(EditInstanceOnly)
	float ChaseUnseenMinimumKillerRange;

	UPROPERTY(EditInstanceOnly)
	float ChaseSeenMinimumKillerRange;

public:
	UBTService_StateMonitor_Camper();
};

FORCEINLINE uint32 GetTypeHash(const UBTService_StateMonitor_Camper) { return 0; }
