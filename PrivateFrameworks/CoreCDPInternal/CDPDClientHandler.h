//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreCDPInternal/CDPDaemonProtocol-Protocol.h>

@class NSXPCConnection;

@interface CDPDClientHandler : NSObject <CDPDaemonProtocol>
{
    NSXPCConnection *_connection;
    unsigned long long _entitlements;
    unsigned long long _clientType;
    id _notificationObject;
}

- (void).cxx_destruct;
- (_Bool)_allowUtilityAccess;
- (_Bool)_allowStateMachineAccess;
- (_Bool)_allowDataRecovery;
- (_Bool)_allowFollowUps;
- (void)getStingrayDisableEligibility:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)preflightStingrayDisableForContext:(id)arg1 uiProvider:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getStingrayStateForContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setStingrayState:(_Bool)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeNonViewAwarePeersFromCircleWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setUserVisibleKeychainSyncEnabled:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)isUserVisibleKeychainSyncEnabledWithCompletion:(CDUnknownBlockType)arg1;
- (void)hasLocalSecretWithCompletion:(CDUnknownBlockType)arg1;
- (void)isICDPEnabledForDSID:(id)arg1 checkWithServer:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)recoverIDMSRecoveryDictionaryWithContext:(id)arg1 uiProvider:(id)arg2 authProvider:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)postFollowUpWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)clearFollowUpWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)finishOfflineLocalSecretChangeWithContext:(id)arg1 uiProvider:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)localSecretChangedTo:(id)arg1 secretType:(unsigned long long)arg2 context:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)shouldPerformRepairForContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (void)_removeObserver;
- (void)_startObservingConnectionStateForRepairWithStateMachine:(id)arg1;
- (void)repairCloudDataProtectionStateWithContext:(id)arg1 uiProvider:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)handleCloudDataProtectionStateWithContext:(id)arg1 uiProvider:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithConnection:(id)arg1 entitlements:(unsigned long long)arg2 clientType:(unsigned long long)arg3;

@end

