//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoLibraryServices/NSObject-Protocol.h>

@class NSDate, NSSet;
@protocol PLSyncablePerson;

@protocol PLSyncableDetectedFace <NSObject>
@property(nonatomic) short cloudLocalState;
@property(nonatomic) _Bool nameSourceAuto;
@property(nonatomic) _Bool isHiddenInGroups;
@property(nonatomic) _Bool hidden;
@property(nonatomic) _Bool manual;
@property(nonatomic) long long sourceHeight;
@property(nonatomic) long long sourceWidth;
@property(retain, nonatomic) id <PLSyncablePerson> personBeingKeyFace;
@property(retain, nonatomic) NSSet *rejectedPeople;
@property(retain, nonatomic) id <PLSyncablePerson> person;
@property(copy, nonatomic) NSDate *adjustmentVersion;
@property(nonatomic) long long faceAlgorithmVersion;
@property(nonatomic) double size;
@property(nonatomic) double centerY;
@property(nonatomic) double centerX;
@end
