
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

/// Struct /Script/Serialization.StructSerializerNumericTestStruct
/// Size: 0x0030 (0x000000 - 0x000030)
struct FStructSerializerNumericTestStruct
{ 
	int8_t                                             Int8;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0001   (0x0001)  MISSED
	int16_t                                            Int16;                                                      // 0x0002   (0x0002)  
	int32_t                                            Int32;                                                      // 0x0004   (0x0004)  
	int64_t                                            Int64;                                                      // 0x0008   (0x0008)  
	char                                               UInt8;                                                      // 0x0010   (0x0001)  
	unsigned char                                      UnknownData01_5[0x1];                                       // 0x0011   (0x0001)  MISSED
	uint16_t                                           UInt16;                                                     // 0x0012   (0x0002)  
	uint32_t                                           UInt32;                                                     // 0x0014   (0x0004)  
	uint64_t                                           UInt64;                                                     // 0x0018   (0x0008)  
	float                                              Float;                                                      // 0x0020   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0024   (0x0004)  MISSED
	double                                             Double;                                                     // 0x0028   (0x0008)  
};

/// Struct /Script/Serialization.StructSerializerBooleanTestStruct
/// Size: 0x0003 (0x000000 - 0x000003)
struct FStructSerializerBooleanTestStruct
{ 
	bool                                               BoolFalse;                                                  // 0x0000   (0x0001)  
	bool                                               BoolTrue;                                                   // 0x0001   (0x0001)  
	bool                                               Bitfield0 : 1;                                              // 0x0002:0 (0x0001)  
	bool                                               Bitfield1 : 1;                                              // 0x0002:1 (0x0001)  
	bool                                               Bitfield2Set : 1;                                           // 0x0002:2 (0x0001)  
	bool                                               Bitfield3 : 1;                                              // 0x0002:3 (0x0001)  
	bool                                               Bitfield4Set : 1;                                           // 0x0002:4 (0x0001)  
	bool                                               Bitfield5Set : 1;                                           // 0x0002:5 (0x0001)  
	bool                                               Bitfield6 : 1;                                              // 0x0002:6 (0x0001)  
	bool                                               Bitfield7Set : 1;                                           // 0x0002:7 (0x0001)  
};

/// Struct /Script/Serialization.StructSerializerObjectTestStruct
/// Size: 0x00C0 (0x000000 - 0x0000C0)
struct FStructSerializerObjectTestStruct
{ 
	class UClass*                                      Class;                                                      // 0x0000   (0x0008)  
	class UClass*                                      SubClass;                                                   // 0x0008   (0x0008)  
	SDK_UNDEFINED(48,4969) /* TWeakObjectPtr<UClass*> */ __um(SoftClass);                                          // 0x0010   (0x0030)  
	class UObject*                                     Object;                                                     // 0x0040   (0x0008)  
	SDK_UNDEFINED(8,4970) /* TWeakObjectPtr<UMetaData*> */ __um(WeakObject);                                       // 0x0048   (0x0008)  
	SDK_UNDEFINED(48,4971) /* TWeakObjectPtr<UMetaData*> */ __um(SoftObject);                                      // 0x0050   (0x0030)  
	FSoftClassPath                                     ClassPath;                                                  // 0x0080   (0x0020)  
	FSoftObjectPath                                    ObjectPath;                                                 // 0x00A0   (0x0020)  
};

/// Struct /Script/Serialization.StructSerializerBuiltinTestStruct
/// Size: 0x00A0 (0x000000 - 0x0000A0)
struct FStructSerializerBuiltinTestStruct
{ 
	FGuid                                              Guid;                                                       // 0x0000   (0x0010)  
	FName                                              Name;                                                       // 0x0010   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x001C   (0x0004)  MISSED
	SDK_UNDEFINED(16,4972) /* FString */               __um(String);                                               // 0x0020   (0x0010)  
	SDK_UNDEFINED(24,4973) /* FText */                 __um(Text);                                                 // 0x0030   (0x0018)  
	FVector                                            Vector;                                                     // 0x0048   (0x000C)  
	unsigned char                                      UnknownData01_5[0xC];                                       // 0x0054   (0x000C)  MISSED
	FVector4                                           Vector4;                                                    // 0x0060   (0x0010)  
	FRotator                                           Rotator;                                                    // 0x0070   (0x000C)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x007C   (0x0004)  MISSED
	FQuat                                              Quat;                                                       // 0x0080   (0x0010)  
	FColor                                             Color;                                                      // 0x0090   (0x0004)  
	unsigned char                                      UnknownData03_6[0xC];                                       // 0x0094   (0x000C)  MISSED
};

/// Struct /Script/Serialization.StructSerializerArrayTestStruct
/// Size: 0x0060 (0x000000 - 0x000060)
struct FStructSerializerArrayTestStruct
{ 
	TArray<int32_t>                                    Int32Array;                                                 // 0x0000   (0x0010)  
	TArray<char>                                       ByteArray;                                                  // 0x0010   (0x0010)  
	int32_t                                            StaticSingleElement;                                        // 0x0020   (0x0004)  
	int32_t                                            StaticInt32Array;                                           // 0x0024   (0x000C)  
	float                                              StaticFloatArray;                                           // 0x0030   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x003C   (0x0004)  MISSED
	TArray<FVector>                                    VectorArray;                                                // 0x0040   (0x0010)  
	TArray<FStructSerializerBuiltinTestStruct>         StructArray;                                                // 0x0050   (0x0010)  
};

/// Struct /Script/Serialization.StructSerializerMapTestStruct
/// Size: 0x0140 (0x000000 - 0x000140)
struct FStructSerializerMapTestStruct
{ 
	SDK_UNDEFINED(80,4974) /* TMap<int32_t, FString> */ __um(IntToStr);                                            // 0x0000   (0x0050)  
	SDK_UNDEFINED(80,4975) /* TMap<FString, FString> */ __um(StrToStr);                                            // 0x0050   (0x0050)  
	SDK_UNDEFINED(80,4976) /* TMap<FString, FVector> */ __um(StrToVec);                                            // 0x00A0   (0x0050)  
	SDK_UNDEFINED(80,4977) /* TMap<FString, FStructSerializerBuiltinTestStruct> */ __um(StrToStruct);              // 0x00F0   (0x0050)  
};

/// Struct /Script/Serialization.StructSerializerSetTestStruct
/// Size: 0x0140 (0x000000 - 0x000140)
struct FStructSerializerSetTestStruct
{ 
	SDK_UNDEFINED(80,4978) /* TSet<FString> */         __um(StrSet);                                               // 0x0000   (0x0050)  
	SDK_UNDEFINED(80,4979) /* TSet<int32_t> */         __um(IntSet);                                               // 0x0050   (0x0050)  
	SDK_UNDEFINED(80,4980) /* TSet<FName> */           __um(NameSet);                                              // 0x00A0   (0x0050)  
	SDK_UNDEFINED(80,4981) /* TSet<FStructSerializerBuiltinTestStruct> */ __um(StructSet);                         // 0x00F0   (0x0050)  
};

/// Struct /Script/Serialization.StructSerializerTestStruct
/// Size: 0x0480 (0x000000 - 0x000480)
struct FStructSerializerTestStruct
{ 
	FStructSerializerNumericTestStruct                 Numerics;                                                   // 0x0000   (0x0030)  
	FStructSerializerBooleanTestStruct                 Booleans;                                                   // 0x0030   (0x0003)  
	unsigned char                                      UnknownData00_5[0x5];                                       // 0x0033   (0x0005)  MISSED
	FStructSerializerObjectTestStruct                  Objects;                                                    // 0x0038   (0x00C0)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x00F8   (0x0008)  MISSED
	FStructSerializerBuiltinTestStruct                 Builtins;                                                   // 0x0100   (0x00A0)  
	FStructSerializerArrayTestStruct                   Arrays;                                                     // 0x01A0   (0x0060)  
	FStructSerializerMapTestStruct                     Maps;                                                       // 0x0200   (0x0140)  
	FStructSerializerSetTestStruct                     Sets;                                                       // 0x0340   (0x0140)  
};

/// Struct /Script/Serialization.StructSerializerByteArray
/// Size: 0x0038 (0x000000 - 0x000038)
struct FStructSerializerByteArray
{ 
	int32_t                                            Dummy1;                                                     // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<char>                                       ByteArray;                                                  // 0x0008   (0x0010)  
	int32_t                                            Dummy2;                                                     // 0x0018   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x001C   (0x0004)  MISSED
	TArray<int8_t>                                     Int8Array;                                                  // 0x0020   (0x0010)  
	int32_t                                            Dummy3;                                                     // 0x0030   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0034   (0x0004)  MISSED
};

