
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Script/Sentry.ESentryLevel
/// Size: 0x06
enum class ESentryLevel : uint8_t
{
	ESentryLevel__Debug                                                              = 0,
	ESentryLevel__Info                                                               = 1,
	ESentryLevel__Warning                                                            = 2,
	ESentryLevel__Error                                                              = 3,
	ESentryLevel__Fatal                                                              = 4,
	ESentryLevel__ESentryLevel_MAX                                                   = 5
};

/// Class /Script/Sentry.SentryAttachment
/// Size: 0x0010 (0x000030 - 0x000040)
class USentryAttachment : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0030   (0x0010)  MISSED


	/// Functions
	// Function /Script/Sentry.SentryAttachment.InitializeWithPath
	// void InitializeWithPath(FString Path, FString Filename, FString ContentType);                                         // [0x85dcce0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentryAttachment.InitializeWithData
	// void InitializeWithData(TArray<char>& Data, FString Filename, FString ContentType);                                   // [0x85dcb80] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Sentry.SentryAttachment.GetPath
	// FString GetPath();                                                                                                    // [0x85dc900] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Sentry.SentryAttachment.GetFilename
	// FString GetFilename();                                                                                                // [0x85dc710] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Sentry.SentryAttachment.GetData
	// TArray<char> GetData();                                                                                               // [0x85dc2c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Sentry.SentryAttachment.GetContentType
	// FString GetContentType();                                                                                             // [0x85dc240] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Sentry.SentryBreadcrumb
/// Size: 0x0010 (0x000030 - 0x000040)
class USentryBreadcrumb : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0030   (0x0010)  MISSED


	/// Functions
	// Function /Script/Sentry.SentryBreadcrumb.SetType
	// void SetType(FString Type);                                                                                           // [0x85de170] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentryBreadcrumb.SetMessage
	// void SetMessage(FString Message);                                                                                     // [0x85dddb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentryBreadcrumb.SetLevel
	// void SetLevel(ESentryLevel Level);                                                                                    // [0x85ddbb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentryBreadcrumb.SetData
	// void SetData(TMap<FString, FString>& Data);                                                                           // [0x85dd660] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Sentry.SentryBreadcrumb.SetCategory
	// void SetCategory(FString category);                                                                                   // [0x85dd300] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentryBreadcrumb.GetType
	// FString GetType();                                                                                                    // [0x85dc240] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Sentry.SentryBreadcrumb.GetMessage
	// FString GetMessage();                                                                                                 // [0x85dc900] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Sentry.SentryBreadcrumb.GetLevel
	// ESentryLevel GetLevel();                                                                                              // [0x85dc870] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Sentry.SentryBreadcrumb.GetData
	// TMap<FString, FString> GetData();                                                                                     // [0x85dc340] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Sentry.SentryBreadcrumb.GetCategory
	// FString GetCategory();                                                                                                // [0x85dc1c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Sentry.SentryEvent
/// Size: 0x0010 (0x000030 - 0x000040)
class USentryEvent : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0030   (0x0010)  MISSED


	/// Functions
	// Function /Script/Sentry.SentryEvent.SetMessage
	// void SetMessage(FString Message);                                                                                     // [0x85dddb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentryEvent.SetLevel
	// void SetLevel(ESentryLevel Level);                                                                                    // [0x85ddc30] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentryEvent.GetMessage
	// FString GetMessage();                                                                                                 // [0x85dc900] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Sentry.SentryEvent.GetLevel
	// ESentryLevel GetLevel();                                                                                              // [0x85dc8a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Sentry.SentryId
/// Size: 0x0010 (0x000030 - 0x000040)
class USentryId : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0030   (0x0010)  MISSED


	/// Functions
	// Function /Script/Sentry.SentryId.ToString
	// FString ToString();                                                                                                   // [0x85dc2c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Sentry.SentryLibrary
/// Size: 0x0000 (0x000030 - 0x000030)
class USentryLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/Sentry.SentryLibrary.StringToBytesArray
	// TArray<char> StringToBytesArray(FString inString);                                                                    // [0x85de2c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Sentry.SentryLibrary.SaveStringToFile
	// FString SaveStringToFile(FString inString, FString Filename);                                                         // [0x85dd1c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Sentry.SentryLibrary.CreateSentryUserFeedback
	// class USentryUserFeedback* CreateSentryUserFeedback(class USentryId* EventId, FString Name, FString Email, FString Comments); // [0x85dc010] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Sentry.SentryLibrary.CreateSentryUser
	// class USentryUser* CreateSentryUser(FString Email, FString ID, FString UserName, FString IpAddress, TMap<FString, FString>& Data); // [0x85dbdb0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Sentry.SentryLibrary.CreateSentryEvent
	// class USentryEvent* CreateSentryEvent(FString Message, ESentryLevel Level);                                           // [0x85dbcd0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Sentry.SentryLibrary.CreateSentryBreadcrumb
	// class USentryBreadcrumb* CreateSentryBreadcrumb(FString Message, FString Type, FString category, TMap<FString, FString>& Data, ESentryLevel Level); // [0x85dba70] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Sentry.SentryLibrary.CreateSentryAttachmentWithPath
	// class USentryAttachment* CreateSentryAttachmentWithPath(FString Path, FString Filename, FString ContentType);         // [0x85db920] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Sentry.SentryLibrary.CreateSentryAttachmentWithData
	// class USentryAttachment* CreateSentryAttachmentWithData(TArray<char>& Data, FString Filename, FString ContentType);   // [0x85db7b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Sentry.SentryLibrary.ByteArrayToString
	// FString ByteArrayToString(TArray<char>& Array);                                                                       // [0x85daf30] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Sentry.SentryScope
/// Size: 0x0010 (0x000030 - 0x000040)
class USentryScope : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0030   (0x0010)  MISSED


	/// Functions
	// Function /Script/Sentry.SentryScope.SetTagValue
	// void SetTagValue(FString Key, FString value);                                                                         // [0x85ddf50] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentryScope.SetTags
	// void SetTags(TMap<FString, FString>& Tags);                                                                           // [0x85de050] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Sentry.SentryScope.SetLevel
	// void SetLevel(ESentryLevel Level);                                                                                    // [0x85ddcb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentryScope.SetFingerprint
	// void SetFingerprint(TArray<FString>& Fingerprint);                                                                    // [0x85ddae0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Sentry.SentryScope.SetExtraValue
	// void SetExtraValue(FString Key, FString value);                                                                       // [0x85dd8c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentryScope.SetExtras
	// void SetExtras(TMap<FString, FString>& Extras);                                                                       // [0x85dd9c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Sentry.SentryScope.SetEnvironment
	// void SetEnvironment(FString Environment);                                                                             // [0x85dd820] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentryScope.SetDist
	// void SetDist(FString Dist);                                                                                           // [0x85dd780] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentryScope.SetContext
	// void SetContext(FString Key, TMap<FString, FString>& Values);                                                         // [0x85dd3a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Sentry.SentryScope.RemoveTag
	// void RemoveTag(FString Key);                                                                                          // [0x85dd060] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentryScope.RemoveExtra
	// void RemoveExtra(FString Key);                                                                                        // [0x85dcfc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentryScope.RemoveContext
	// void RemoveContext(FString Key);                                                                                      // [0x85dcf20] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentryScope.GetTagValue
	// FString GetTagValue(FString Key);                                                                                     // [0x85dc980] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Sentry.SentryScope.GetTags
	// TMap<FString, FString> GetTags();                                                                                     // [0x85dca70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Sentry.SentryScope.GetLevel
	// ESentryLevel GetLevel();                                                                                              // [0x85dc8d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Sentry.SentryScope.GetFingerprint
	// TArray<FString> GetFingerprint();                                                                                     // [0x85dc790] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Sentry.SentryScope.GetExtraValue
	// FString GetExtraValue(FString Key);                                                                                   // [0x85dc530] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Sentry.SentryScope.GetExtras
	// TMap<FString, FString> GetExtras();                                                                                   // [0x85dc620] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Sentry.SentryScope.GetEnvironment
	// FString GetEnvironment();                                                                                             // [0x85dc4b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Sentry.SentryScope.GetDist
	// FString GetDist();                                                                                                    // [0x85dc430] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Sentry.SentryScope.ClearBreadcrumbs
	// void ClearBreadcrumbs();                                                                                              // [0x85db690] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentryScope.ClearAttachments
	// void ClearAttachments();                                                                                              // [0x85db670] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentryScope.Clear
	// void Clear();                                                                                                         // [0x85db650] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentryScope.AddBreadcrumb
	// void AddBreadcrumb(class USentryBreadcrumb* Breadcrumb);                                                              // [0x85dabb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentryScope.AddAttachment
	// void AddAttachment(class USentryAttachment* Attachment);                                                              // [0x85dab20] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/Sentry.EnableBuildConfigurations
/// Size: 0x0005 (0x000000 - 0x000005)
struct FEnableBuildConfigurations
{ 
	bool                                               bEnableDebug;                                               // 0x0000   (0x0001)  
	bool                                               bEnableDebugGame;                                           // 0x0001   (0x0001)  
	bool                                               bEnableDevelopment;                                         // 0x0002   (0x0001)  
	bool                                               bEnableTest;                                                // 0x0003   (0x0001)  
	bool                                               bEnableShipping;                                            // 0x0004   (0x0001)  
};

/// Struct /Script/Sentry.EnableBuildTargets
/// Size: 0x0005 (0x000000 - 0x000005)
struct FEnableBuildTargets
{ 
	bool                                               bEnableClient;                                              // 0x0000   (0x0001)  
	bool                                               bEnableGame;                                                // 0x0001   (0x0001)  
	bool                                               bEnableEditor;                                              // 0x0002   (0x0001)  
	bool                                               bEnableServer;                                              // 0x0003   (0x0001)  
	bool                                               bEnableProgram;                                             // 0x0004   (0x0001)  
};

/// Struct /Script/Sentry.AutomaticBreadcrumbs
/// Size: 0x0005 (0x000000 - 0x000005)
struct FAutomaticBreadcrumbs
{ 
	bool                                               bOnMapLoadingStarted;                                       // 0x0000   (0x0001)  
	bool                                               bOnMapLoaded;                                               // 0x0001   (0x0001)  
	bool                                               bOnGameStateClassChanged;                                   // 0x0002   (0x0001)  
	bool                                               bOnGameSessionIDChanged;                                    // 0x0003   (0x0001)  
	bool                                               bOnUserActivityStringChanged;                               // 0x0004   (0x0001)  
};

/// Struct /Script/Sentry.TagsPromotion
/// Size: 0x0006 (0x000000 - 0x000006)
struct FTagsPromotion
{ 
	bool                                               bPromoteBuildConfiguration;                                 // 0x0000   (0x0001)  
	bool                                               bPromoteTargetType;                                         // 0x0001   (0x0001)  
	bool                                               bPromoteEngineMode;                                         // 0x0002   (0x0001)  
	bool                                               bPromoteIsGame;                                             // 0x0003   (0x0001)  
	bool                                               bPromoteIsStandalone;                                       // 0x0004   (0x0001)  
	bool                                               bPromoteIsUnattended;                                       // 0x0005   (0x0001)  
};

/// Class /Script/Sentry.SentrySettings
/// Size: 0x00A8 (0x000030 - 0x0000D8)
class USentrySettings : public UObject
{ 
public:
	SDK_UNDEFINED(16,4962) /* FString */               __um(DsnUrl);                                               // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,4963) /* FString */               __um(Environment);                                          // 0x0040   (0x0010)  
	bool                                               InitAutomatically;                                          // 0x0050   (0x0001)  
	bool                                               EnableVerboseLogging;                                       // 0x0051   (0x0001)  
	FEnableBuildConfigurations                         EnableBuildConfigurations;                                  // 0x0052   (0x0005)  
	FEnableBuildTargets                                EnableBuildTargets;                                         // 0x0057   (0x0005)  
	FAutomaticBreadcrumbs                              AutomaticBreadcrumbs;                                       // 0x005C   (0x0005)  
	FTagsPromotion                                     TagsPromotion;                                              // 0x0061   (0x0006)  
	bool                                               EnableAutoCrashCapturing;                                   // 0x0067   (0x0001)  
	bool                                               EnableAutoLogAttachment;                                    // 0x0068   (0x0001)  
	bool                                               EnableStackTrace;                                           // 0x0069   (0x0001)  
	bool                                               EnableAutoSessionTracking;                                  // 0x006A   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x006B   (0x0001)  MISSED
	int32_t                                            SessionTimeout;                                             // 0x006C   (0x0004)  
	bool                                               OverrideReleaseName;                                        // 0x0070   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0071   (0x0007)  MISSED
	SDK_UNDEFINED(16,4964) /* FString */               __um(Release);                                              // 0x0078   (0x0010)  
	bool                                               UploadSymbolsAutomatically;                                 // 0x0088   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0089   (0x0007)  MISSED
	SDK_UNDEFINED(16,4965) /* FString */               __um(ProjectName);                                          // 0x0090   (0x0010)  
	SDK_UNDEFINED(16,4966) /* FString */               __um(OrgName);                                              // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,4967) /* FString */               __um(AuthToken);                                            // 0x00B0   (0x0010)  
	bool                                               IncludeSources;                                             // 0x00C0   (0x0001)  
	unsigned char                                      UnknownData03_5[0x7];                                       // 0x00C1   (0x0007)  MISSED
	SDK_UNDEFINED(16,4968) /* FString */               __um(CrashReporterUrl);                                     // 0x00C8   (0x0010)  
};

/// Class /Script/Sentry.SentrySubsystem
/// Size: 0x0038 (0x000038 - 0x000070)
class USentrySubsystem : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x38];                                      // 0x0038   (0x0038)  MISSED


	/// Functions
	// Function /Script/Sentry.SentrySubsystem.StartSession
	// void StartSession();                                                                                                  // [0x85de2a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentrySubsystem.SetUser
	// void SetUser(class USentryUser* User);                                                                                // [0x85de210] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentrySubsystem.SetTag
	// void SetTag(FString Key, FString value);                                                                              // [0x85dde50] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentrySubsystem.SetLevel
	// void SetLevel(ESentryLevel Level);                                                                                    // [0x85ddd30] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentrySubsystem.SetContext
	// void SetContext(FString Key, TMap<FString, FString>& Values);                                                         // [0x85dd500] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Sentry.SentrySubsystem.RemoveUser
	// void RemoveUser();                                                                                                    // [0x85dd1a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentrySubsystem.RemoveTag
	// void RemoveTag(FString Key);                                                                                          // [0x85dd100] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentrySubsystem.IsEnabled
	// bool IsEnabled();                                                                                                     // [0x85dcef0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Sentry.SentrySubsystem.InitializeWithSettings
	// void InitializeWithSettings(FDelegateProperty& OnConfigureSettings);                                                  // [0x85dce30] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Sentry.SentrySubsystem.Initialize
	// void Initialize();                                                                                                    // [0x85dcb60] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentrySubsystem.EndSession
	// void EndSession();                                                                                                    // [0x85dc1a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentrySubsystem.ConfigureScope
	// void ConfigureScope(FDelegateProperty& OnConfigureScope);                                                             // [0x85db6f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Sentry.SentrySubsystem.Close
	// void Close();                                                                                                         // [0x85db6d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentrySubsystem.ClearBreadcrumbs
	// void ClearBreadcrumbs();                                                                                              // [0x85db6b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentrySubsystem.CaptureUserFeedbackWithParams
	// void CaptureUserFeedbackWithParams(class USentryId* EventId, FString Email, FString Comments, FString Name);          // [0x85db4c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentrySubsystem.CaptureUserFeedback
	// void CaptureUserFeedback(class USentryUserFeedback* UserFeedback);                                                    // [0x85db430] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentrySubsystem.CaptureMessageWithScope
	// class USentryId* CaptureMessageWithScope(FString Message, FDelegateProperty& OnConfigureScope, ESentryLevel Level);   // [0x85db2c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Sentry.SentrySubsystem.CaptureMessage
	// class USentryId* CaptureMessage(FString Message, ESentryLevel Level);                                                 // [0x85db1d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentrySubsystem.CaptureEventWithScope
	// class USentryId* CaptureEventWithScope(class USentryEvent* Event, FDelegateProperty& OnConfigureScope);               // [0x85db0c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Sentry.SentrySubsystem.CaptureEvent
	// class USentryId* CaptureEvent(class USentryEvent* Event);                                                             // [0x85db020] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentrySubsystem.AddBreadcrumbWithParams
	// void AddBreadcrumbWithParams(FString Message, FString category, FString Type, TMap<FString, FString>& Data, ESentryLevel Level); // [0x85dacd0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Sentry.SentrySubsystem.AddBreadcrumb
	// void AddBreadcrumb(class USentryBreadcrumb* Breadcrumb);                                                              // [0x85dac40] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/Sentry.SentryUser
/// Size: 0x0010 (0x000030 - 0x000040)
class USentryUser : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0030   (0x0010)  MISSED


	/// Functions
	// Function /Script/Sentry.SentryUser.SetUsername
	// void SetUsername(FString UserName);                                                                                   // [0x85dd300] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentryUser.SetIpAddress
	// void SetIpAddress(FString IpAddress);                                                                                 // [0x85dd060] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentryUser.SetId
	// void SetId(FString ID);                                                                                               // [0x85de170] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentryUser.SetEmail
	// void SetEmail(FString Email);                                                                                         // [0x85dddb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentryUser.SetData
	// void SetData(TMap<FString, FString>& Data);                                                                           // [0x85dea80] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Sentry.SentryUser.GetUsername
	// FString GetUsername();                                                                                                // [0x85dc1c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Sentry.SentryUser.GetIpAddress
	// FString GetIpAddress();                                                                                               // [0x85dea00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Sentry.SentryUser.GetId
	// FString GetId();                                                                                                      // [0x85dc240] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Sentry.SentryUser.GetEmail
	// FString GetEmail();                                                                                                   // [0x85dc900] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Sentry.SentryUser.GetData
	// TMap<FString, FString> GetData();                                                                                     // [0x85de910] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Sentry.SentryUserFeedback
/// Size: 0x0010 (0x000030 - 0x000040)
class USentryUserFeedback : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0030   (0x0010)  MISSED


	/// Functions
	// Function /Script/Sentry.SentryUserFeedback.SetName
	// void SetName(FString Name);                                                                                           // [0x85dddb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentryUserFeedback.SetEmail
	// void SetEmail(FString Email);                                                                                         // [0x85de170] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentryUserFeedback.SetComment
	// void SetComment(FString Comments);                                                                                    // [0x85dd300] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentryUserFeedback.Initialize
	// void Initialize(class USentryId* EventId);                                                                            // [0x5828940] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentryUserFeedback.GetName
	// FString GetName();                                                                                                    // [0x85dc900] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Sentry.SentryUserFeedback.GetEmail
	// FString GetEmail();                                                                                                   // [0x85dc240] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Sentry.SentryUserFeedback.GetComment
	// FString GetComment();                                                                                                 // [0x85dc1c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

