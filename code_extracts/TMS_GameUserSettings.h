// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameUserSettings.h"
#include "TMS_GameUserSettings.generated.h"

/**
 * 
 */
UCLASS()
class THEYMAKESOUND_API UTMS_GameUserSettings : public UGameUserSettings
{
	GENERATED_UCLASS_BODY()

public:
	//Get our game settings
	UFUNCTION(BlueprintCallable)
	static UTMS_GameUserSettings* GetTMS_UserSettings()
	{
		return Cast<UTMS_GameUserSettings>(UTMS_GameUserSettings::GetGameUserSettings());
	}

	UFUNCTION(BlueprintCallable)
	void ResetTMSSettings();

	UPROPERTY(Config, BlueprintReadWrite)
	bool HapticFeedbacks;
	
	UPROPERTY(Config, BlueprintReadWrite)
	bool ArtifactClickOnce;

	UPROPERTY(Config, BlueprintReadWrite)
	float CameraSensivityX;

	UPROPERTY(Config, BlueprintReadWrite)
	float CameraSensivityY;

	UPROPERTY(Config, BlueprintReadWrite)
	bool InvertX;

	UPROPERTY(Config, BlueprintReadWrite)
	bool InvertY;

	UPROPERTY(Config, BlueprintReadWrite)	
	bool ScanningForHints;

	UPROPERTY(Config, BlueprintReadWrite)
	bool SoundVisualisation;

	UPROPERTY(Config, BlueprintReadWrite)
	bool Subtitles;

	UPROPERTY(Config, BlueprintReadWrite)
	bool TTS;

	UPROPERTY(Config, BlueprintReadWrite)
	float HUDSize;

	UPROPERTY(Config, BlueprintReadWrite)
	int AudioOutPut;

	UPROPERTY(Config, BlueprintReadWrite)
	bool MuteAudio;

	UPROPERTY(Config, BlueprintReadWrite)
	float GeneralVolume;
	
	UPROPERTY(Config, BlueprintReadWrite)
	float MenuMusicVolume;
	
	UPROPERTY(Config, BlueprintReadWrite)
	float UIVolume;
	
	UPROPERTY(Config, BlueprintReadWrite)
	float InGameMusicVolume;
	
	UPROPERTY(Config, BlueprintReadWrite)
	float SFXVolume;
	
	UPROPERTY(Config, BlueprintReadWrite)
	float AmbiencesVolume;
	
	UPROPERTY(Config, BlueprintReadWrite)
	float GameplayAudioCuesVolume;
	
	UPROPERTY(Config, BlueprintReadWrite)
	bool AttenuateLowFrequencies;
	
	UPROPERTY(Config, BlueprintReadWrite)
	bool AttenuateHighFrequencies;

	UPROPERTY(Config, BlueprintReadWrite)
	bool PersonalizedAttenuation;

	UPROPERTY(Config, BlueprintReadWrite)
	float GainValue;
	
	UPROPERTY(Config, BlueprintReadWrite)
	float FrequenciesValue;
	
	UPROPERTY(Config, BlueprintReadWrite)
	FString Language;
};
