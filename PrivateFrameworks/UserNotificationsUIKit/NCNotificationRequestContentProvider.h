//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UserNotificationsUIKit/NCNotificationStaticContentProviding-Protocol.h>

@class NCNotificationRequest, NSArray, NSDate, NSString, UIImage;
@protocol NCNotificationStaticContentProvidingDelegate;

@interface NCNotificationRequestContentProvider : NSObject <NCNotificationStaticContentProviding>
{
    id <NCNotificationStaticContentProvidingDelegate> _delegate;
    NCNotificationRequest *_notificationRequest;
}

@property(retain, nonatomic) NCNotificationRequest *notificationRequest; // @synthesize notificationRequest=_notificationRequest;
@property(nonatomic) __weak id <NCNotificationStaticContentProvidingDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_appName;
- (id)_appBundleIdentifer;
@property(readonly, copy, nonatomic) CDUnknownBlockType dismissAction;
@property(readonly, copy, nonatomic) CDUnknownBlockType defaultAction;
@property(readonly, nonatomic) NSArray *interfaceActions;
@property(readonly, nonatomic) UIImage *thumbnail;
@property(readonly, copy, nonatomic) NSString *hintText;
@property(readonly, copy, nonatomic) NSString *secondaryText;
@property(readonly, copy, nonatomic) NSString *primarySubtitleText;
@property(readonly, copy, nonatomic) NSString *primaryText;
@property(readonly, copy, nonatomic) NSDate *date;
@property(readonly, copy, nonatomic) NSString *title;
@property(readonly, nonatomic) UIImage *icon;
- (id)init;
- (id)initWithNotificationRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

