//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class FKPerson, NSDate, NSDictionary, NSUUID;

@interface _HKFitnessFriend : NSObject <NSSecureCoding, NSCopying>
{
    NSDictionary *_snapshots;
    NSDictionary *_friendAchievements;
    NSDictionary *_friendWorkouts;
    FKPerson *_person;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) FKPerson *person; // @synthesize person=_person;
@property(retain, nonatomic) NSDictionary *friendWorkouts; // @synthesize friendWorkouts=_friendWorkouts;
@property(retain, nonatomic) NSDictionary *friendAchievements; // @synthesize friendAchievements=_friendAchievements;
@property(retain, nonatomic) NSDictionary *snapshots; // @synthesize snapshots=_snapshots;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)currentSnapshot;
- (id)currentDateComponents;
- (id)_mostRecentSnapshot;
@property(readonly, nonatomic) NSDate *dateForLatestRelationshipStart;
@property(readonly, nonatomic) NSDate *dateForLatestDataShown;
@property(readonly, nonatomic) NSDate *dateForLatestDataShownToMe;
@property(readonly, nonatomic) NSDate *dateForLatestDataHidden;
@property(readonly, nonatomic) NSDate *dateForLatestDataHiddenFromMe;
@property(readonly, nonatomic) NSDate *dateForLatestOutgoingInviteRequest;
@property(readonly, nonatomic) _Bool hasInviteRequestFromMe;
@property(readonly, nonatomic) _Bool sentInviteRequestToMe;
@property(readonly, nonatomic) _Bool isAwaitingInviteResponseFromMe;
@property(readonly, nonatomic) _Bool isMuted;
- (_Bool)isActivityDataVisibleToMeForDate:(id)arg1;
@property(readonly, nonatomic) _Bool isFriendshipCurrentlyActive;
@property(readonly, nonatomic) _Bool canSeeMyActivityData;
@property(readonly, nonatomic) _Bool isActivityDataCurrentlyVisibleToMe;
@property(readonly) NSUUID *friendUUID;
- (id)initWithActivitySnapshots:(id)arg1 friendAchievements:(id)arg2 friendWorkouts:(id)arg3 person:(id)arg4;
- (id)init;

@end

