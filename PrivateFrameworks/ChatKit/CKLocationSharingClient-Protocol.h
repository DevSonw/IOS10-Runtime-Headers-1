//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChatKit/NSObject-Protocol.h>

@class IMHandle;
@protocol CKLocationSharingDelegate;

@protocol CKLocationSharingClient <NSObject>
@property(readonly) IMHandle *locationSharingHandle;
@property(readonly) _Bool locationSharingHasExpired;
- (void)setLocationSharingDelegate:(id <CKLocationSharingDelegate>)arg1;
@end

