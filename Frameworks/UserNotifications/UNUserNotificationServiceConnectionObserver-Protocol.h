//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UserNotifications/NSObject-Protocol.h>

@class NSArray, NSData, NSString;

@protocol UNUserNotificationServiceConnectionObserver <NSObject>

@optional
- (void)didChangePendingNotificationRequests:(NSArray *)arg1 forBundleIdentifier:(NSString *)arg2;
- (void)didDeliverNotifications:(NSArray *)arg1 forBundleIdentifier:(NSString *)arg2;
- (void)didReceiveDeviceToken:(NSData *)arg1 forBundleIdentifier:(NSString *)arg2;
@end

