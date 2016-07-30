//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/BBRemoteDataProvider-Protocol.h>
#import <HealthDaemon/HDFitnessFriendsManagerReadyObserver-Protocol.h>

@class BBDataProviderConnection, BBDataProviderProxy, HDFitnessFriendsManager, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface HDFitnessFriendsNotificationBBDataProvider : NSObject <BBRemoteDataProvider, HDFitnessFriendsManagerReadyObserver>
{
    BBDataProviderConnection *_dataProviderConnection;
    BBDataProviderProxy *_dataProviderProxy;
    HDFitnessFriendsManager *_fitnessFriendsManager;
    NSObject<OS_dispatch_queue> *_bulletinQueue;
    NSMutableDictionary *_bulletinByFriendID;
    int notifyGoalCompletionToken;
    int notifyAchievementToken;
    int notifyWorkoutToken;
}

- (void).cxx_destruct;
- (void)handleBulletinActionResponse:(id)arg1;
- (id)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2;
- (id)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2;
- (id)sortDescriptors;
- (id)sectionIcon;
- (id)sectionDisplayName;
- (id)universalSectionIdentifier;
- (id)sectionIdentifier;
- (void)_queue_withdrawBulletinRequest:(id)arg1 fromFriendWithID:(id)arg2;
- (void)_queue_addBulletinRequest:(id)arg1 fromPerson:(id)arg2 isFakedBulletin:(_Bool)arg3;
- (id)_newPrepopulatedBulletinRequestForPerson:(id)arg1;
- (void)_showAchievementEarnedNotificationFromPerson:(id)arg1 achievement:(id)arg2 activitySnapshot:(id)arg3 isFakedBulletin:(_Bool)arg4;
- (void)_showWorkoutFinishedNotificationFromPerson:(id)arg1 workout:(id)arg2 activitySnapshot:(id)arg3 isFakedBulletin:(_Bool)arg4;
- (void)_showGoalCompletionNotificationFromPerson:(id)arg1 activitySnapshot:(id)arg2 isFakedBulletin:(_Bool)arg3;
- (id)_appleWatchSourceRevision;
- (id)_personWithName:(id)arg1;
- (id)_fakeSnapshotForDate:(id)arg1;
- (id)_fakeWorkoutDuringDayStartingAtDate:(id)arg1;
- (id)_fakeOutdoorRunningWorkoutDuringDayStartingAtDate:(id)arg1;
- (id)_fakeAchievementDuringDayStartingAtDate:(id)arg1;
- (void)_showFakeWorkoutNotification;
- (void)_showFakeAchievementNotification;
- (void)_showFakeGoalCompletionNotification;
- (void)showAchievementEarnedNotificationFromPerson:(id)arg1 achievement:(id)arg2 activitySnapshot:(id)arg3;
- (void)showWorkoutFinishedNotificationFromPerson:(id)arg1 workout:(id)arg2 activitySnapshot:(id)arg3;
- (void)showGoalCompletionNotificationFromPerson:(id)arg1 activitySnapshot:(id)arg2;
- (void)dealloc;
- (void)fitnessFriendsManagerReady:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
