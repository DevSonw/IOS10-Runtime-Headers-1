//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PKPaymentSetupAssistantRegistrationUtilities : NSObject
{
}

+ (id)_bridgeContextDefaultLocalCredential;
+ (void)_bridgePreflight:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
+ (void)_phonePreflight:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
+ (void)preflightPaymentSetupProvisioningController:(id)arg1 forSetupAssistant:(unsigned long long)arg2 withCompletion:(CDUnknownBlockType)arg3;
+ (_Bool)_bridgeNeedsToRun:(unsigned long long *)arg1;
+ (_Bool)_phoneNeedsToRun:(unsigned long long *)arg1;
+ (_Bool)setupAssistantNeedsToRun:(unsigned long long)arg1 returningRequirements:(unsigned long long *)arg2;

@end
