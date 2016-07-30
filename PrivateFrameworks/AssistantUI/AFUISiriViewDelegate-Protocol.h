//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AssistantUI/NSObject-Protocol.h>

@class AFUISiriView, NSString;

@protocol AFUISiriViewDelegate <NSObject>
- (void)siriView:(AFUISiriView *)arg1 didReceiveSiriActivationMessageWithSource:(long long)arg2;
- (_Bool)siriView:(AFUISiriView *)arg1 attemptUnlockWithPassword:(NSString *)arg2;
- (void)siriViewDidReceiveAudioRouteAction:(AFUISiriView *)arg1;
- (void)siriViewDidReceiveHelpAction:(AFUISiriView *)arg1;
- (void)siriViewDidReceiveBugButtonLongPress:(AFUISiriView *)arg1;
- (void)siriViewDidReceiveReportBugAction:(AFUISiriView *)arg1;
- (void)siriViewDidRecieveStatusViewHoldDidEndAction:(AFUISiriView *)arg1;
- (void)siriViewDidRecieveStatusViewHoldDidBeginAction:(AFUISiriView *)arg1;
- (void)siriViewDidRecieveStatusViewTappedAction:(AFUISiriView *)arg1;
- (float)audioRecordingPowerLevelForSiriView:(AFUISiriView *)arg1;
@end
