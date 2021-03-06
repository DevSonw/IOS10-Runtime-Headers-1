//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/NSSecureCoding-Protocol.h>

@class HKQuantity, NSDate, NSMutableData;

@interface _HDDemoDataActivityWorkoutState : NSObject <NSSecureCoding>
{
    NSMutableData *_associatedObjectUUIDs;
    unsigned long long _workoutActivityType;
    unsigned long long _goalType;
    HKQuantity *_goal;
    NSDate *_startDate;
    double _totalEnergyBurnedInKilocalories;
    double _totalDistanceWalkingInMeters;
    double _totalDistanceCyclingInMeters;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) double totalDistanceCyclingInMeters; // @synthesize totalDistanceCyclingInMeters=_totalDistanceCyclingInMeters;
@property(nonatomic) double totalDistanceWalkingInMeters; // @synthesize totalDistanceWalkingInMeters=_totalDistanceWalkingInMeters;
@property(nonatomic) double totalEnergyBurnedInKilocalories; // @synthesize totalEnergyBurnedInKilocalories=_totalEnergyBurnedInKilocalories;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(retain, nonatomic) HKQuantity *goal; // @synthesize goal=_goal;
@property(nonatomic) unsigned long long goalType; // @synthesize goalType=_goalType;
@property(nonatomic) unsigned long long workoutActivityType; // @synthesize workoutActivityType=_workoutActivityType;
@property(retain, nonatomic) NSMutableData *associatedObjectUUIDs; // @synthesize associatedObjectUUIDs=_associatedObjectUUIDs;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)addAssociatedObjectUUID:(id)arg1;
- (id)generateWorkoutWithEndDate:(id)arg1;
- (id)init;

@end

