//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface UNSPendingNotificationRepository : NSObject
{
}

- (void)performClockMigration;
- (void)performMigrationForBundleIdentifier:(id)arg1;
- (void)performMigration;
- (void)applicationStateDidRestore;
- (void)setPendingNotificationRecords:(id)arg1 forBundleIdentifier:(id)arg2;
- (id)pendingNotificationRecordsForBundleIdentifier:(id)arg1;
- (void)_setPendingNotificationDictionaries:(id)arg1 forBundleIdentifier:(id)arg2;
- (id)_pendingNotificationDictionariesForBundleIdentifier:(id)arg1;
- (void)setLastFireDateKey:(id)arg1 forBundleIdentifier:(id)arg2;
- (id)lastFireDateKeyForBundleIdentifier:(id)arg1;
- (id)lastLocalNotificationFireDateForBundleIdentifier:(id)arg1;
- (void)setLastLocalNotificationFireDate:(id)arg1 forBundleIdentifier:(id)arg2;

@end

