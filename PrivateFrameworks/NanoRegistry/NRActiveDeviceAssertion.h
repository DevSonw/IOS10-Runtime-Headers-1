//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NRDevice, NSString;
@protocol OS_dispatch_queue;

@interface NRActiveDeviceAssertion : NSObject
{
    _Bool _isActive;
    NSString *_identifier;
    NSObject<OS_dispatch_queue> *_queue;
    NRDevice *_device;
}

@property(retain, nonatomic) NRDevice *device; // @synthesize device=_device;
@property(nonatomic) _Bool isActive; // @synthesize isActive=_isActive;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)_invalidate;
- (void)invalidate;
- (id)description;
- (void)dealloc;
- (id)initWithDevice:(id)arg1 identifier:(id)arg2;

@end

