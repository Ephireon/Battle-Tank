// Copyright Ephireon Systems Ltd.

#pragma once

#include "Components/StaticMeshComponent.h"
#include "TankBarrel.generated.h"

/**
 * 
 */

UCLASS(meta = (BlueprintSpawnableComponent))
class BATTLETANK_API UTankBarrel : public UStaticMeshComponent
{
	GENERATED_BODY()

public:
	// -1 is max downward speed, and +1 is max up speed
	void Elevate(float RelativeSpeed);

private:
	UPROPERTY(EditDefaultsOnly, Category = "Setup")
		float MaxDegreesPerSecond = 5;
	
		UPROPERTY(EditDefaultsOnly, Category = "Setup")
		float MaxElevationDegrees = 40;

		UPROPERTY(EditDefaultsOnly, Category = "Setup")
		float MinElevationDegrees = 0;
};
