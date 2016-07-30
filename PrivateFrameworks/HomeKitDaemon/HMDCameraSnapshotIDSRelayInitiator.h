//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/HMDCameraSnapshotIDSRelay.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/IDSSessionDelegate-Protocol.h>

@class IDSSession, NSMutableData, NSObject, NSString;
@protocol HMDCameraSnapshotIDSRelayInitiatorDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface HMDCameraSnapshotIDSRelayInitiator : HMDCameraSnapshotIDSRelay <IDSSessionDelegate, HMFLogging>
{
    _Bool _idsSessionStarted;
    NSString *_filePath;
    NSString *_destinationID;
    NSMutableData *_fileLengthAndData;
    NSObject<OS_dispatch_source> *_socketSource;
    IDSSession *_idsSession;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSString *_requestIdentifier;
    id <HMDCameraSnapshotIDSRelayInitiatorDelegate> _delegate;
}

+ (id)logCategory;
@property(nonatomic) _Bool idsSessionStarted; // @synthesize idsSessionStarted=_idsSessionStarted;
@property(nonatomic) __weak id <HMDCameraSnapshotIDSRelayInitiatorDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *requestIdentifier; // @synthesize requestIdentifier=_requestIdentifier;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(retain, nonatomic) IDSSession *idsSession; // @synthesize idsSession=_idsSession;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *socketSource; // @synthesize socketSource=_socketSource;
@property(retain, nonatomic) NSMutableData *fileLengthAndData; // @synthesize fileLengthAndData=_fileLengthAndData;
@property(retain, nonatomic) NSString *destinationID; // @synthesize destinationID=_destinationID;
@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
- (void).cxx_destruct;
- (void)_callFileTransferFailed:(id)arg1;
- (void)sessionEnded:(id)arg1 withReason:(unsigned int)arg2 error:(id)arg3;
- (void)sessionStarted:(id)arg1;
- (void)session:(id)arg1 receivedInvitationCancelFromID:(id)arg2;
- (void)session:(id)arg1 receivedInvitationDeclineFromID:(id)arg2;
- (void)session:(id)arg1 receivedInvitationAcceptFromID:(id)arg2;
- (void)_reset;
- (void)_startFileTransfer;
- (id)_smallData;
- (void)_sendInvitation;
- (void)sendInvitation;
- (void)_sendFile;
- (void)sendFile:(id)arg1;
- (void)dealloc;
- (id)logIdentifier;
- (id)initWithRequestIdentifier:(id)arg1 destinationID:(id)arg2 delegate:(id)arg3 queue:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
