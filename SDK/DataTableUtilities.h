
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: Engine

/// Struct /Script/DataTableUtilities.DBDTunableRowHandle
/// Size: 0x0028 (0x000000 - 0x000028)
struct FDBDTunableRowHandle
{ 
	FDataTableRowHandle                                _dataTableRowHandle;                                        // 0x0000   (0x0018)  
	float                                              _defaultValue;                                              // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x001C   (0x000C)  MISSED
};

/// Struct /Script/DataTableUtilities.DBDTableRowBase
/// Size: 0x0000 (0x000008 - 0x000008)
struct FDBDTableRowBase : FTableRowBase
{ 
};

/// Struct /Script/DataTableUtilities.DBDTableRowBaseWithId
/// Size: 0x0010 (0x000008 - 0x000018)
struct FDBDTableRowBaseWithId : FDBDTableRowBase
{ 
	FName                                              ID;                                                         // 0x0008   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/DataTableUtilities.DataTableProxy
/// Size: 0x0040 (0x000000 - 0x000040)
struct FDataTableProxy
{ 
	SDK_UNDEFINED(48,811) /* TWeakObjectPtr<UDataTable*> */ __um(AssetPtr);                                        // 0x0000   (0x0030)  
	class UDataTable*                                  _dataTable;                                                 // 0x0030   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0038   (0x0008)  MISSED
};

/// Struct /Script/DataTableUtilities.DBDTunableRowBase
/// Size: 0x0000 (0x000008 - 0x000008)
struct FDBDTunableRowBase : FDBDTableRowBase
{ 
};

