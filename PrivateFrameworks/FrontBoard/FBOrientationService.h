//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBOrientationServiceServer;

@interface FBOrientationService : NSObject
{
    FBOrientationServiceServer *_server;
}

+ (id)sharedInstance;
- (void)noteInterfaceOrientationChanged:(long long)arg1 animationSettings:(id)arg2 direction:(long long)arg3;
- (void)noteInterfaceOrientationChanged:(long long)arg1;
- (id)init;

@end
