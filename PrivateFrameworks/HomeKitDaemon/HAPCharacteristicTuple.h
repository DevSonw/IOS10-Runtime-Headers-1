//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HAPCharacteristic, NSString;

@interface HAPCharacteristicTuple : NSObject
{
    HAPCharacteristic *_hapCharacteristic;
    NSString *_serverIdentifier;
    long long _linkType;
}

@property long long linkType; // @synthesize linkType=_linkType;
@property(retain, nonatomic) NSString *serverIdentifier; // @synthesize serverIdentifier=_serverIdentifier;
@property(retain, nonatomic) HAPCharacteristic *hapCharacteristic; // @synthesize hapCharacteristic=_hapCharacteristic;
- (void).cxx_destruct;
- (id)initWithHAPCharacteristic:(id)arg1 serverIdentifier:(id)arg2 linkType:(long long)arg3;

@end

