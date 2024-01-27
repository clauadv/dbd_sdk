
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

/// Struct /Script/SessionMessages.SessionServiceLogUnsubscribe
/// Size: 0x0001 (0x000000 - 0x000001)
struct FSessionServiceLogUnsubscribe
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/SessionMessages.SessionServiceLogSubscribe
/// Size: 0x0001 (0x000000 - 0x000001)
struct FSessionServiceLogSubscribe
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/SessionMessages.SessionServiceLog
/// Size: 0x0040 (0x000000 - 0x000040)
struct FSessionServiceLog
{ 
	FName                                              category;                                                   // 0x0000   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	SDK_UNDEFINED(16,4982) /* FString */               __um(Data);                                                 // 0x0010   (0x0010)  
	FGuid                                              InstanceId;                                                 // 0x0020   (0x0010)  
	double                                             TimeSeconds;                                                // 0x0030   (0x0008)  
	char                                               Verbosity;                                                  // 0x0038   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0039   (0x0007)  MISSED
};

/// Struct /Script/SessionMessages.SessionServicePong
/// Size: 0x0090 (0x000000 - 0x000090)
struct FSessionServicePong
{ 
	bool                                               Authorized;                                                 // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	SDK_UNDEFINED(16,4983) /* FString */               __um(BuildDate);                                            // 0x0008   (0x0010)  
	SDK_UNDEFINED(16,4984) /* FString */               __um(DeviceName);                                           // 0x0018   (0x0010)  
	FGuid                                              InstanceId;                                                 // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,4985) /* FString */               __um(InstanceName);                                         // 0x0038   (0x0010)  
	SDK_UNDEFINED(16,4986) /* FString */               __um(PlatformName);                                         // 0x0048   (0x0010)  
	FGuid                                              SESSIONID;                                                  // 0x0058   (0x0010)  
	SDK_UNDEFINED(16,4987) /* FString */               __um(SessionName);                                          // 0x0068   (0x0010)  
	SDK_UNDEFINED(16,4988) /* FString */               __um(SessionOwner);                                         // 0x0078   (0x0010)  
	bool                                               Standalone;                                                 // 0x0088   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0089   (0x0007)  MISSED
};

/// Struct /Script/SessionMessages.SessionServicePing
/// Size: 0x0010 (0x000000 - 0x000010)
struct FSessionServicePing
{ 
	SDK_UNDEFINED(16,4989) /* FString */               __um(UserName);                                             // 0x0000   (0x0010)  
};

