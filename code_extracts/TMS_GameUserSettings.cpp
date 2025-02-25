// Fill out your copyright notice in the Description page of Project Settings.


#include "TMS_GameUserSettings.h"

UTMS_GameUserSettings::UTMS_GameUserSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	ResetTMSSettings();
}

void UTMS_GameUserSettings::ResetTMSSettings()
{
	HapticFeedbacks = true;
	ArtifactClickOnce = false;
	CameraSensivityX = 5;
	CameraSensivityY = 5;
	InvertX = false;
	InvertY = false;
	ScanningForHints = false;
	SoundVisualisation = false;
	Subtitles = false;
	TTS = false;
	HUDSize = 10;
	MuteAudio = false;
	AudioOutPut = 0;
	GeneralVolume = 8;
	MenuMusicVolume = 8;
	UIVolume = 8;
	InGameMusicVolume = 8;
	SFXVolume = 8;
	AmbiencesVolume = 8;
	GameplayAudioCuesVolume = 8;
	AttenuateLowFrequencies = false;
	AttenuateHighFrequencies = false;
	PersonalizedAttenuation = false;
	GainValue = 0;
	FrequenciesValue = 1000;
	
	Language = "English";
}