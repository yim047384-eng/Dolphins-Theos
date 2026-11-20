#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Enum UgcLua.EEntityType
enum class EEntityType : uint8 {
	Invalid = 0,
	Timer = 1,
	Trigger = 2,
	TriggerGroup = 3,
	Component = 4,
	ComponentPreset = 5,
	LightComponent = 6,
	LightComponentPreset = 7,
	Region = 8,
	GameplayDevice = 9,
	GameplayDevicePreset = 10,
	PlayerState = 11,
	ArmedAICharacter = 12,
	MonsterCharacter = 13,
	PlayerPreset = 14,
	PlayerCharacterPreset = 15,
	ArmedAI = 16,
	ArmedAIPreset = 17,
	Monster = 18,
	MonsterPreset = 19,
	SkillPreset = 20,
	BuffPreset = 21,
	WeaponPreset = 22,
	WeatherPreset = 23,
	Item = 24,
	ItemPreset = 25,
	Vehicle = 26,
	VehiclePreset = 27,
	Effect = 28,
	EffectPreset = 29,
	Sound = 30,
	SoundPreset = 31,
	LogicObject = 32,
	LogicObjectPreset = 33,
	TriggerArea = 34,
	TriggerAreaPreset = 35,
	Marker = 36,
	Pickup = 37,
	PickupPreset = 38,
	ContestedItem = 39,
	ContestedItemPreset = 40,
	BankProduct = 41,
	BuildingInstance = 42,
	Skill = 43,
	Projectile = 44,
	ActorSkill = 45,
	Empower = 46,
	DropGroupPreset = 47,
	TreasurePreset = 48,
	NPC = 49,
	UObject = 50,
	__MAX = 51,
	EEntityType_MAX = 52
};

// Object Name: Enum UgcLua.EUGCLuaType
enum class EUGCLuaType : uint8 {
	LuaNiil = 0,
	Boolean = 1,
	Number = 2,
	String = 3,
	EUGCLuaType_MAX = 4
};

