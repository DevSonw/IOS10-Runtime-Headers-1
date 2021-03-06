//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableSet, NSSet, NSString;
@protocol OS_dispatch_queue, SpotlightReceiverJob;

@interface SpotlightReceiverConnection : NSObject
{
    NSMutableSet *_positiveSet;
    NSMutableSet *_negativeSet;
    _Bool _wantsHTML;
    _Bool _wantsText;
    _Bool _wantsUAs;
    _Bool _wantsIndexUpdates;
    _Bool _wantsInteractions;
    NSObject<SpotlightReceiverJob> *_receiver;
    NSSet *_bundleIDs;
    NSArray *_contentTypes;
    NSSet *_INIntentClassNames;
    NSString *_serviceName;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _requestCount;
}

+ (void)setup;
@property(nonatomic) _Bool wantsInteractions; // @synthesize wantsInteractions=_wantsInteractions;
@property(nonatomic) _Bool wantsIndexUpdates; // @synthesize wantsIndexUpdates=_wantsIndexUpdates;
@property(nonatomic) _Bool wantsUAs; // @synthesize wantsUAs=_wantsUAs;
@property(nonatomic) _Bool wantsText; // @synthesize wantsText=_wantsText;
@property(nonatomic) _Bool wantsHTML; // @synthesize wantsHTML=_wantsHTML;
@property(readonly, nonatomic) unsigned long long requestCount; // @synthesize requestCount=_requestCount;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property(readonly, nonatomic) NSSet *INIntentClassNames; // @synthesize INIntentClassNames=_INIntentClassNames;
@property(readonly, nonatomic) NSArray *contentTypes; // @synthesize contentTypes=_contentTypes;
@property(readonly, nonatomic) NSSet *bundleIDs; // @synthesize bundleIDs=_bundleIDs;
@property(readonly, nonatomic) NSObject<SpotlightReceiverJob> *receiver; // @synthesize receiver=_receiver;
- (void).cxx_destruct;
- (void)deleteAllInteractionsWithBundleID:(id)arg1 protectionClass:(id)arg2;
- (void)deleteInteractionsWithGroupIdentifiers:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3;
- (void)deleteInteractionsWithIdentifiers:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3;
- (void)addInteraction:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3;
- (void)addUserActions:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3;
- (void)purgeFromBundle:(id)arg1 identifiers:(id)arg2;
- (void)deleteFromBundle:(id)arg1;
- (void)deleteFromBundle:(id)arg1 sinceDate:(id)arg2;
- (void)deleteFromBundle:(id)arg1 domainIdentifiers:(id)arg2;
- (void)deleteFromBundle:(id)arg1 contentType:(id)arg2 identifiers:(id)arg3;
- (void)deleteFromBundle:(id)arg1 encodedIdentifiers:(id)arg2;
- (void)indexFromBundle:(id)arg1 protectionClass:(id)arg2 items:(id)arg3 itemsContent:(id)arg4;
- (_Bool)_wantsContentType:(id)arg1;
- (_Bool)_wantsBundleID:(id)arg1;
- (id)initWithServiceName:(id)arg1 clientID:(long long)arg2 wantsText:(_Bool)arg3 wantsHTML:(_Bool)arg4;

@end

