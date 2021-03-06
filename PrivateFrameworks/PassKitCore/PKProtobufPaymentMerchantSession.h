//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PassKitCore/NSCopying-Protocol.h>

@class NSString;

@interface PKProtobufPaymentMerchantSession : PBCodable <NSCopying>
{
    unsigned long long _epochTimestamp;
    NSString *_domain;
    NSString *_merchantIdentifier;
    NSString *_nonce;
    NSString *_sessionIdentifier;
    struct {
        unsigned int epochTimestamp:1;
    } _has;
}

@property(retain, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property(nonatomic) unsigned long long epochTimestamp; // @synthesize epochTimestamp=_epochTimestamp;
@property(retain, nonatomic) NSString *nonce; // @synthesize nonce=_nonce;
@property(retain, nonatomic) NSString *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property(retain, nonatomic) NSString *merchantIdentifier; // @synthesize merchantIdentifier=_merchantIdentifier;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasDomain;
@property(nonatomic) _Bool hasEpochTimestamp;
@property(readonly, nonatomic) _Bool hasNonce;
@property(readonly, nonatomic) _Bool hasSessionIdentifier;
@property(readonly, nonatomic) _Bool hasMerchantIdentifier;

@end

