//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MobileCoreServices/NSCopying-Protocol.h>
#import <MobileCoreServices/NSSecureCoding-Protocol.h>

@class NSMutableDictionary, NSNumber, NSString;
@protocol OS_dispatch_queue;

@interface _LSDiskUsage : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_bundleIdentifier;
    NSMutableDictionary *_usage;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (_Bool)supportsSecureCoding;
+ (id)ODRUsageForBundleIdentifier:(id)arg1 error:(id *)arg2;
+ (id)dynamicUsageForBundleIdentifier:(id)arg1 error:(id *)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)debugDescription;
@property(readonly, nonatomic) NSNumber *onDemandResourcesUsage; // @dynamic onDemandResourcesUsage;
@property(readonly, nonatomic) NSNumber *dynamicUsage; // @dynamic dynamicUsage;
@property(readonly, nonatomic) NSNumber *staticUsage; // @dynamic staticUsage;
- (void)dealloc;
- (id)init;
- (_Bool)_fetchWithXPCConnection:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) NSString *_bundleIdentifier;
- (id)_initWithBundleIdentifier:(id)arg1 alreadyKnownUsage:(id)arg2;

@end

