
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/UnitTestUtilities.TestInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UTestInterface : public UInterface
{ 
public:
};

/// Class /Script/UnitTestUtilities.TestActor
/// Size: 0x0000 (0x000230 - 0x000230)
class ATestActor : public AActor
{ 
public:
};

/// Class /Script/UnitTestUtilities.TestActorComponent
/// Size: 0x0000 (0x0000B8 - 0x0000B8)
class UTestActorComponent : public UActorComponent
{ 
public:
};

/// Class /Script/UnitTestUtilities.TestActorComponentImplementingTestInterface
/// Size: 0x0008 (0x0000B8 - 0x0000C0)
class UTestActorComponentImplementingTestInterface : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00B8   (0x0008)  MISSED
};

/// Class /Script/UnitTestUtilities.TestActorImplementingTestInterface
/// Size: 0x0008 (0x000230 - 0x000238)
class ATestActorImplementingTestInterface : public AActor
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0230   (0x0008)  MISSED
};

/// Class /Script/UnitTestUtilities.TestMovableActor
/// Size: 0x0008 (0x000230 - 0x000238)
class ATestMovableActor : public AActor
{ 
public:
	class UBoxComponent*                               BoxComponent;                                               // 0x0230   (0x0008)  
};

