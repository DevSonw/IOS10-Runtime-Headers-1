//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreCDPInternal/CDPRemoteDeviceSecretValidatorProtocol-Protocol.h>

@class CDPContext, NSMutableDictionary;
@protocol CDPDDeviceSecretValidatorDelegate;

@interface CDPDDeviceSecretValidator : NSObject <CDPRemoteDeviceSecretValidatorProtocol>
{
    _Bool _isAttemptingRecovery;
    unsigned long long _failedAttempts;
    NSMutableDictionary *_failedSecrets;
    NSMutableDictionary *_recoveryErrors;
    _Bool _depletedRemainingAttempts;
    CDPContext *_context;
    _Bool _isUsingMultipleICSC;
    unsigned long long _supportedEscapeOfferMask;
    CDUnknownBlockType _validSecretHandler;
    id <CDPDDeviceSecretValidatorDelegate> _delegate;
}

@property(nonatomic) __weak id <CDPDDeviceSecretValidatorDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType validSecretHandler; // @synthesize validSecretHandler=_validSecretHandler;
@property(nonatomic) _Bool isUsingMultipleICSC; // @synthesize isUsingMultipleICSC=_isUsingMultipleICSC;
@property(nonatomic) unsigned long long supportedEscapeOfferMask; // @synthesize supportedEscapeOfferMask=_supportedEscapeOfferMask;
- (void).cxx_destruct;
- (unsigned long long)failedAttempts;
- (_Bool)isAttemptingRecovery;
- (_Bool)_isInvalidICSCError:(id)arg1;
- (void)cancelValidationWithError:(id)arg1;
- (void)approveFromAnotherDeviceWithCompletion:(CDUnknownBlockType)arg1;
- (void)supportedEscapeOfferMaskCompletion:(CDUnknownBlockType)arg1;
- (void)cancelApproveFromAnotherDevice;
- (void)resetAccountCDPState;
- (void)_performSingleiCSCRecoveryWithSecret:(id)arg1 type:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_handleMultiCSCRecoveryResults:(id)arg1 type:(unsigned long long)arg2 secret:(id)arg3 device:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (id)_handleMultiCSCRecoveryFailureForDevice:(id)arg1 recoveryError:(id)arg2 secret:(id)arg3;
- (void)_handleRecoveryFailureForFinalDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)validateSecret:(id)arg1 devices:(id)arg2 type:(unsigned long long)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)_attemptToRecoverDevice:(id)arg1 withSecret:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithContext:(id)arg1 delegate:(id)arg2;
- (id)init;

@end

