//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SafariShared/WBSHistoryLoaderDelegate-Protocol.h>

@class NSArray, WBSHistoryDeletionPlan, WBSHistorySQLiteStore;

@protocol WBSHistoryStoreDelegate <WBSHistoryLoaderDelegate>
- (void)historyStore:(WBSHistorySQLiteStore *)arg1 didRemoveVisits:(NSArray *)arg2;
- (void)historyStore:(WBSHistorySQLiteStore *)arg1 didRemoveItems:(NSArray *)arg2;
- (void)historyStoreDidFailDatabaseIntegrityCheck:(WBSHistorySQLiteStore *)arg1;
- (_Bool)historyStoreShouldCheckDatabaseIntegrity:(WBSHistorySQLiteStore *)arg1;
- (void)historyStore:(WBSHistorySQLiteStore *)arg1 didPrepareToDeleteWithDeletionPlan:(WBSHistoryDeletionPlan *)arg2;

@optional
- (_Bool)historyStoreShouldScheduleMaintenance:(WBSHistorySQLiteStore *)arg1;
@end
