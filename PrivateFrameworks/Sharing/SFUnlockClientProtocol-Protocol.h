//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Sharing/NSObject-Protocol.h>

@class NSError, SFAutoUnlockDevice;

@protocol SFUnlockClientProtocol <NSObject>
- (void)failedUnlockWithError:(NSError *)arg1;
- (void)completedUnlockWithDevice:(SFAutoUnlockDevice *)arg1;
- (void)beganAttemptWithDevice:(SFAutoUnlockDevice *)arg1;
- (void)failedToEnableDevice:(SFAutoUnlockDevice *)arg1 error:(NSError *)arg2;
- (void)enabledDevice:(SFAutoUnlockDevice *)arg1;
- (void)keyDeviceLocked:(SFAutoUnlockDevice *)arg1;
@end

