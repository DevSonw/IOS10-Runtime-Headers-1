//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVOutputDeviceInternal, NSDictionary, NSString;

@interface AVOutputDevice : NSObject
{
    AVOutputDeviceInternal *_outputDevice;
}

+ (id)sharedLocalDevice;
- (double)frecencyScore;
- (void)updateFrecencyScore;
- (void)setSecondDisplayEnabled:(_Bool)arg1;
- (struct OpaqueFigEndpoint *)figEndpoint;
@property(readonly, nonatomic) NSDictionary *modelSpecificInformation;
@property(readonly, nonatomic) float batteryLevel;
@property(readonly, nonatomic) _Bool hasBatteryLevel;
@property(readonly, nonatomic) NSString *modelID;
@property(readonly, nonatomic) long long deviceType;
@property(readonly, nonatomic) NSString *ID;
@property(readonly, nonatomic) NSString *name;
- (id)_figEndpointPropertyValueForKey:(struct __CFString *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (id)_weakReference;
- (id)initWithFigEndpoint:(struct OpaqueFigEndpoint *)arg1;
- (id)init;

@end

