//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>

@class PBUnknownFields, _INPBHomeAttributeValue;

@interface _INPBHomeAttribute : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    int _attributeType;
    _INPBHomeAttributeValue *_attributeValue;
    struct {
        unsigned int attributeType:1;
    } _has;
}

+ (id)options;
@property(retain, nonatomic) _INPBHomeAttributeValue *attributeValue; // @synthesize attributeValue=_attributeValue;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasAttributeValue;
@property(nonatomic) _Bool hasAttributeType;
@property(nonatomic) int attributeType; // @synthesize attributeType=_attributeType;

@end
