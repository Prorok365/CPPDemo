// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameFramework/RotatingMovementComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SphereComponent.h"
#include "Coin.generated.h"


UCLASS()
class CPPDEMO_API ACoin : public AActor
{
	GENERATED_BODY()
	
private:
	UPROPERTY(EditAnywhere, Category = "Points")
	int32 coinValue = 10;

public:	
	// Sets default values for this actor's properties
	ACoin();

	// ================== Properties Declarations ================== //

	UPROPERTY(BlueprintReadWrite, Category = "Components")
	USceneComponent* Root;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
	UStaticMeshComponent* MyMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
	URotatingMovementComponent* MyRotatingMovementComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
	USphereComponent* SphereCollisionComponent;



	// ============================================================ //

	// ================== Un-function Properties ================== //

	//UPROPERTY(EditAnywhere, Category = "ChangeMesh")
	//UStaticMesh* NewMesh;

	// ============================================================ //

	// ================== Functions Declarations ================== //

	UFUNCTION(BlueprintCallable, Category = "Collision")
	void OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
		UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep,
		const FHitResult& SweepResult);

	UFUNCTION(BlueprintCallable, Category = "Collision")
	void OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
		UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	
	// ============================================================ //

	// ================== Un-function Functions ================== //
	//UFUNCTION(CallInEditor, Category = "ChangeMesh")
	//void ChangeStaticMesh();

	//UFUNCTION(CallInEditor, Category = "ChangeMesh")
	//void ChangeOnlyToCapsule();
	
	// =========================================================== //


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	

};
