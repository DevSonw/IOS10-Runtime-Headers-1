//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray;

@interface GEOPDReverseGeocodingParameters : PBCodable <NSCopying>
{
    NSMutableArray *_locations;
    int _placeTypeLimit;
    _Bool _preserveOriginalLocation;
    struct {
        unsigned int placeTypeLimit:1;
        unsigned int preserveOriginalLocation:1;
    } _has;
}

+ (Class)locationType;
@property(nonatomic) _Bool preserveOriginalLocation; // @synthesize preserveOriginalLocation=_preserveOriginalLocation;
@property(retain, nonatomic) NSMutableArray *locations; // @synthesize locations=_locations;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasPreserveOriginalLocation;
- (int)StringAsPlaceTypeLimit:(id)arg1;
- (id)placeTypeLimitAsString:(int)arg1;
@property(nonatomic) _Bool hasPlaceTypeLimit;
@property(nonatomic) int placeTypeLimit; // @synthesize placeTypeLimit=_placeTypeLimit;
- (id)locationAtIndex:(unsigned long long)arg1;
- (unsigned long long)locationsCount;
- (void)addLocation:(id)arg1;
- (void)clearLocations;
- (void)dealloc;

@end

