//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>

@interface AWDHomeKitResult : PBCodable <NSCopying>
{
    CDStruct_9f2792e4 _characteristicTypes;
    CDStruct_9f2792e4 _serviceTypes;
    unsigned long long _timestamp;
    unsigned int _duration;
    unsigned int _isClient;
    unsigned int _operationType;
    int _resultCode;
    unsigned int _resultType;
    unsigned int _transportType;
    struct {
        unsigned int timestamp:1;
        unsigned int duration:1;
        unsigned int isClient:1;
        unsigned int operationType:1;
        unsigned int resultCode:1;
        unsigned int resultType:1;
        unsigned int transportType:1;
    } _has;
}

@property(nonatomic) unsigned int operationType; // @synthesize operationType=_operationType;
@property(nonatomic) unsigned int isClient; // @synthesize isClient=_isClient;
@property(nonatomic) unsigned int transportType; // @synthesize transportType=_transportType;
@property(nonatomic) unsigned int duration; // @synthesize duration=_duration;
@property(nonatomic) int resultCode; // @synthesize resultCode=_resultCode;
@property(nonatomic) unsigned int resultType; // @synthesize resultType=_resultType;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasOperationType;
- (void)setCharacteristicTypes:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (unsigned int)characteristicTypeAtIndex:(unsigned long long)arg1;
- (void)addCharacteristicType:(unsigned int)arg1;
- (void)clearCharacteristicTypes;
@property(readonly, nonatomic) unsigned int *characteristicTypes;
@property(readonly, nonatomic) unsigned long long characteristicTypesCount;
- (void)setServiceTypes:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (unsigned int)serviceTypeAtIndex:(unsigned long long)arg1;
- (void)addServiceType:(unsigned int)arg1;
- (void)clearServiceTypes;
@property(readonly, nonatomic) unsigned int *serviceTypes;
@property(readonly, nonatomic) unsigned long long serviceTypesCount;
@property(nonatomic) _Bool hasIsClient;
@property(nonatomic) _Bool hasTransportType;
@property(nonatomic) _Bool hasDuration;
@property(nonatomic) _Bool hasResultCode;
@property(nonatomic) _Bool hasResultType;
@property(nonatomic) _Bool hasTimestamp;
- (void)dealloc;

@end

