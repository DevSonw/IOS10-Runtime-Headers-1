//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsCore/NSCopying-Protocol.h>

@class FCCKPIdentifier, FCCKPLocale, NSData, NSString;

@interface FCCKPRequestOperationHeader : PBCodable <NSCopying>
{
    unsigned long long _applicationConfigVersion;
    unsigned long long _deviceFlowControlBudget;
    unsigned long long _deviceFlowControlBudgetCap;
    unsigned long long _deviceProtocolVersion;
    unsigned long long _globalConfigVersion;
    NSString *_applicationBundle;
    NSString *_applicationContainer;
    int _applicationContainerEnvironment;
    NSString *_applicationVersion;
    NSData *_clientChangeToken;
    NSString *_deviceAssignedName;
    NSString *_deviceFlowControlKey;
    float _deviceFlowControlRegeneration;
    NSString *_deviceHardwareID;
    NSString *_deviceHardwareVersion;
    FCCKPIdentifier *_deviceIdentifier;
    NSString *_deviceLibraryName;
    NSString *_deviceLibraryVersion;
    NSString *_deviceSoftwareVersion;
    int _isolationLevel;
    FCCKPLocale *_locale;
    NSString *_mmcsProtocolVersion;
    int _targetDatabase;
    NSString *_userIDContainerID;
    struct {
        unsigned int applicationConfigVersion:1;
        unsigned int deviceFlowControlBudget:1;
        unsigned int deviceFlowControlBudgetCap:1;
        unsigned int deviceProtocolVersion:1;
        unsigned int globalConfigVersion:1;
        unsigned int applicationContainerEnvironment:1;
        unsigned int deviceFlowControlRegeneration:1;
        unsigned int isolationLevel:1;
        unsigned int targetDatabase:1;
    } _has;
}

@property(retain, nonatomic) NSString *userIDContainerID; // @synthesize userIDContainerID=_userIDContainerID;
@property(retain, nonatomic) NSString *deviceHardwareID; // @synthesize deviceHardwareID=_deviceHardwareID;
@property(retain, nonatomic) NSString *deviceAssignedName; // @synthesize deviceAssignedName=_deviceAssignedName;
@property(retain, nonatomic) NSData *clientChangeToken; // @synthesize clientChangeToken=_clientChangeToken;
@property(retain, nonatomic) NSString *mmcsProtocolVersion; // @synthesize mmcsProtocolVersion=_mmcsProtocolVersion;
@property(retain, nonatomic) FCCKPLocale *locale; // @synthesize locale=_locale;
@property(nonatomic) unsigned long long deviceProtocolVersion; // @synthesize deviceProtocolVersion=_deviceProtocolVersion;
@property(nonatomic) float deviceFlowControlRegeneration; // @synthesize deviceFlowControlRegeneration=_deviceFlowControlRegeneration;
@property(nonatomic) unsigned long long deviceFlowControlBudgetCap; // @synthesize deviceFlowControlBudgetCap=_deviceFlowControlBudgetCap;
@property(nonatomic) unsigned long long deviceFlowControlBudget; // @synthesize deviceFlowControlBudget=_deviceFlowControlBudget;
@property(retain, nonatomic) NSString *deviceFlowControlKey; // @synthesize deviceFlowControlKey=_deviceFlowControlKey;
@property(retain, nonatomic) NSString *deviceLibraryVersion; // @synthesize deviceLibraryVersion=_deviceLibraryVersion;
@property(retain, nonatomic) NSString *deviceLibraryName; // @synthesize deviceLibraryName=_deviceLibraryName;
@property(retain, nonatomic) NSString *deviceHardwareVersion; // @synthesize deviceHardwareVersion=_deviceHardwareVersion;
@property(retain, nonatomic) NSString *deviceSoftwareVersion; // @synthesize deviceSoftwareVersion=_deviceSoftwareVersion;
@property(retain, nonatomic) FCCKPIdentifier *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
@property(nonatomic) unsigned long long globalConfigVersion; // @synthesize globalConfigVersion=_globalConfigVersion;
@property(nonatomic) unsigned long long applicationConfigVersion; // @synthesize applicationConfigVersion=_applicationConfigVersion;
@property(retain, nonatomic) NSString *applicationVersion; // @synthesize applicationVersion=_applicationVersion;
@property(retain, nonatomic) NSString *applicationBundle; // @synthesize applicationBundle=_applicationBundle;
@property(retain, nonatomic) NSString *applicationContainer; // @synthesize applicationContainer=_applicationContainer;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasIsolationLevel;
@property(nonatomic) int isolationLevel; // @synthesize isolationLevel=_isolationLevel;
@property(readonly, nonatomic) _Bool hasUserIDContainerID;
@property(nonatomic) _Bool hasTargetDatabase;
@property(nonatomic) int targetDatabase; // @synthesize targetDatabase=_targetDatabase;
@property(readonly, nonatomic) _Bool hasDeviceHardwareID;
@property(readonly, nonatomic) _Bool hasDeviceAssignedName;
@property(readonly, nonatomic) _Bool hasClientChangeToken;
@property(nonatomic) _Bool hasApplicationContainerEnvironment;
@property(nonatomic) int applicationContainerEnvironment; // @synthesize applicationContainerEnvironment=_applicationContainerEnvironment;
@property(readonly, nonatomic) _Bool hasMmcsProtocolVersion;
@property(readonly, nonatomic) _Bool hasLocale;
@property(nonatomic) _Bool hasDeviceProtocolVersion;
@property(nonatomic) _Bool hasDeviceFlowControlRegeneration;
@property(nonatomic) _Bool hasDeviceFlowControlBudgetCap;
@property(nonatomic) _Bool hasDeviceFlowControlBudget;
@property(readonly, nonatomic) _Bool hasDeviceFlowControlKey;
@property(readonly, nonatomic) _Bool hasDeviceLibraryVersion;
@property(readonly, nonatomic) _Bool hasDeviceLibraryName;
@property(readonly, nonatomic) _Bool hasDeviceHardwareVersion;
@property(readonly, nonatomic) _Bool hasDeviceSoftwareVersion;
@property(readonly, nonatomic) _Bool hasDeviceIdentifier;
@property(nonatomic) _Bool hasGlobalConfigVersion;
@property(nonatomic) _Bool hasApplicationConfigVersion;
@property(readonly, nonatomic) _Bool hasApplicationVersion;
@property(readonly, nonatomic) _Bool hasApplicationBundle;
@property(readonly, nonatomic) _Bool hasApplicationContainer;
- (void)dealloc;

@end

