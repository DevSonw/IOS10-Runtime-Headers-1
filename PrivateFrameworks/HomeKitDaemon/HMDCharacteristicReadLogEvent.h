//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/HMDLogEvent.h>

#import <HomeKitDaemon/HMDAWDLogEvent-Protocol.h>

@class HAPAccessory, HMDAccessory, NSArray, NSString, NSUUID;

@interface HMDCharacteristicReadLogEvent : HMDLogEvent <HMDAWDLogEvent>
{
    _Bool _isLocal;
    NSArray *_characteristicsToRead;
    HAPAccessory *_hapAccessory;
    HMDAccessory *_hmdAccessory;
    NSUUID *_transactionId;
}

+ (id)characteristicReadLogEvent:(id)arg1 hmdAccessory:(id)arg2 hapAccessory:(id)arg3 isLocal:(_Bool)arg4 transactionId:(id)arg5;
+ (id)uuid;
+ (void)initialize;
@property(readonly, nonatomic) NSUUID *transactionId; // @synthesize transactionId=_transactionId;
@property(readonly, nonatomic) _Bool isLocal; // @synthesize isLocal=_isLocal;
@property(readonly, nonatomic) __weak HMDAccessory *hmdAccessory; // @synthesize hmdAccessory=_hmdAccessory;
@property(readonly, nonatomic) __weak HAPAccessory *hapAccessory; // @synthesize hapAccessory=_hapAccessory;
@property(readonly, nonatomic) NSArray *characteristicsToRead; // @synthesize characteristicsToRead=_characteristicsToRead;
- (void).cxx_destruct;
- (id)initCharacteristicReadLogEvent:(id)arg1 hmdAccessory:(id)arg2 hapAccessory:(id)arg3 isLocal:(_Bool)arg4 transactionId:(id)arg5;
- (id)metricForAWD;
- (unsigned int)AWDMessageType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

