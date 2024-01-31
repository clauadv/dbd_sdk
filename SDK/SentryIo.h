
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: Sentry

/// Class /Script/SentryIo.BhvrBeforeSendHandler
/// Size: 0x0000 (0x000030 - 0x000030)
class UBhvrBeforeSendHandler : public USentryBeforeSendHandler
{ 
public:
};

/// Class /Script/SentryIo.SentryIoBaseSubsystem
/// Size: 0x0000 (0x000038 - 0x000038)
class USentryIoBaseSubsystem : public UGameInstanceSubsystem
{ 
public:
};

/// Class /Script/SentryIo.SentryIoLinuxSubsystem
/// Size: 0x00A8 (0x000038 - 0x0000E0)
class USentryIoLinuxSubsystem : public USentryIoBaseSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0xA8];                                      // 0x0038   (0x00A8)  MISSED
};

/// Class /Script/SentryIo.SentryIoSubsystem
/// Size: 0x0010 (0x000038 - 0x000048)
class USentryIoSubsystem : public USentryIoBaseSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0038   (0x0010)  MISSED
};

