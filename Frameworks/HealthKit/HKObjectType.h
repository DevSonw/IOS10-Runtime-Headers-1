//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class NSString;

@interface HKObjectType : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_identifier;
    long long _code;
    Class _dataObjectClass;
}

+ (_Bool)supportsSecureCoding;
+ (id)fitnessFriendWorkoutType;
+ (id)fitnessFriendAchievementType;
+ (id)fitnessFriendActivitySnapshotType;
+ (id)watchActivationType;
+ (id)deepBreathingSessionType;
+ (id)coachingEventType;
+ (id)activityCacheType;
+ (id)briskMinuteDataType;
+ (id)calorieGoal;
+ (id)_typeWithIdentifier:(id)arg1;
+ (id)activitySummaryType;
+ (id)workoutType;
+ (id)_objectTypeWithIdentifier:(id)arg1 class:(Class)arg2 lookupTable:(id)arg3;
+ (id)seriesTypeForIdentifier:(id)arg1;
+ (id)documentTypeForIdentifier:(id)arg1;
+ (id)correlationTypeForIdentifier:(id)arg1;
+ (id)characteristicTypeForIdentifier:(id)arg1;
+ (id)categoryTypeForIdentifier:(id)arg1;
+ (id)quantityTypeForIdentifier:(id)arg1;
+ (id)dataTypeWithCode:(long long)arg1;
+ (id)_allTypesWithIdentifierTable:(id)arg1;
+ (id)_allQuantityTypes;
+ (id)_allCorrelationTypes;
+ (id)_allCategoryTypes;
+ (id)_allTypesOfClass:(Class)arg1;
+ (id)_allDataTypeIdentifiers;
+ (_Bool)_allowAuthorizationForSharing:(_Bool)arg1 types:(id)arg2 entitlements:(id)arg3 disallowedTypes:(id)arg4;
+ (_Bool)_allowAuthorizationForReadingWithTypes:(id)arg1 entitlements:(id)arg2 disallowedTypes:(id)arg3;
+ (_Bool)_allowAuthorizationForSharingWithTypes:(id)arg1 entitlements:(id)arg2 disallowedTypes:(id)arg3;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)_predicateForSDKVersion:(unsigned int)arg1;
- (_Bool)_requiresAuthorization;
@property(readonly, nonatomic) Class dataObjectClass;
@property(readonly, nonatomic) long long code;
@property(readonly) NSString *identifier;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)_safeDescription;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initWithDefinition:(CDStruct_6b208136 *)arg1;
- (id)init;
- (_Bool)_allowAuthorizationForReadingWithEntitlements:(id)arg1;
- (_Bool)_allowAuthorizationForSharingWithEntitlements:(id)arg1;

@end
