//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsCore/NSCopying-Protocol.h>

@class FCCKPIdentifier;

@interface FCCKPUniqueFieldFailure : PBCodable <NSCopying>
{
    FCCKPIdentifier *_identifierForConstraintFailure;
}

@property(retain, nonatomic) FCCKPIdentifier *identifierForConstraintFailure; // @synthesize identifierForConstraintFailure=_identifierForConstraintFailure;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasIdentifierForConstraintFailure;
- (void)dealloc;

@end

